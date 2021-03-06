#pragma once
#include<stdexcept>
#include<iostream>


namespace SiriusFM {
	class DiffusionGBM {
		private:
			double const m_mu;
			double const m_sigma;

		public:
			DiffusionGBM(double mu, double sigma):m_mu(mu), m_sigma(sigma)
			
			{if (sigma <= 0) {
					throw std:: invalid_argument("Incorrect values");
					 };
			};

			double Mu(double st, double t) const {
				return (st*(this -> m_mu) >= 0)?st*(this -> m_mu):0;};
			double Sigma(double st, double t) const {
				return st * (this -> m_sigma);};
	};
};
