#pragma once
#include<stdexcept>
#include<iostream>
#include<cmath>

namespace SiriusFM
{
	class DiffusionCIR {
		private:
			double const m_mu;
			double const m_sigma;
			double const m_kappa;
			double const m_thetta;
		public:
			DiffusionCIR(double mu, double sigma, double kappa, double thetta):
				m_mu(mu), m_sigma(sigma), m_thetta(thetta), m_kappa(kappa)
		{if (kappa<=0 || sigma <= 0 || thetta <= 0)
			{
				throw std:: invalid_argument("Incorrect values");
			};
		};
			double mu(double st, double t){
				return this -> m_kappa * (this -> m_thetta - st);};
			double sigma(double st, double t){
				return this -> m_sigma * sqrt(st);};
	};
};
