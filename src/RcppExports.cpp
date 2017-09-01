// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "fluEvidenceSynthesis_types.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// inference_cpp
mcmc_result_inference_t inference_cpp(std::vector<size_t> demography, std::vector<size_t> age_group_limits, Eigen::MatrixXi ili, Eigen::MatrixXi mon_pop, Eigen::MatrixXi n_pos, Eigen::MatrixXi n_samples, flu::vaccine::vaccine_t vaccine_calendar, Eigen::MatrixXi polymod_data, Eigen::VectorXd initial, Eigen::MatrixXd mapping, Eigen::VectorXd risk_ratios, Eigen::VectorXd epsilon_index, size_t psi_index, size_t transmissibility_index, Eigen::VectorXd susceptibility_index, size_t initial_infected_index, size_t no_age_groups, size_t no_risk_groups, size_t nburn, size_t nbatch, size_t blen);
RcppExport SEXP _fluEvidenceSynthesis_inference_cpp(SEXP demographySEXP, SEXP age_group_limitsSEXP, SEXP iliSEXP, SEXP mon_popSEXP, SEXP n_posSEXP, SEXP n_samplesSEXP, SEXP vaccine_calendarSEXP, SEXP polymod_dataSEXP, SEXP initialSEXP, SEXP mappingSEXP, SEXP risk_ratiosSEXP, SEXP epsilon_indexSEXP, SEXP psi_indexSEXP, SEXP transmissibility_indexSEXP, SEXP susceptibility_indexSEXP, SEXP initial_infected_indexSEXP, SEXP no_age_groupsSEXP, SEXP no_risk_groupsSEXP, SEXP nburnSEXP, SEXP nbatchSEXP, SEXP blenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<size_t> >::type demography(demographySEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type age_group_limits(age_group_limitsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type ili(iliSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type mon_pop(mon_popSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type n_pos(n_posSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< flu::vaccine::vaccine_t >::type vaccine_calendar(vaccine_calendarSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type polymod_data(polymod_dataSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type initial(initialSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mapping(mappingSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type risk_ratios(risk_ratiosSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type epsilon_index(epsilon_indexSEXP);
    Rcpp::traits::input_parameter< size_t >::type psi_index(psi_indexSEXP);
    Rcpp::traits::input_parameter< size_t >::type transmissibility_index(transmissibility_indexSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type susceptibility_index(susceptibility_indexSEXP);
    Rcpp::traits::input_parameter< size_t >::type initial_infected_index(initial_infected_indexSEXP);
    Rcpp::traits::input_parameter< size_t >::type no_age_groups(no_age_groupsSEXP);
    Rcpp::traits::input_parameter< size_t >::type no_risk_groups(no_risk_groupsSEXP);
    Rcpp::traits::input_parameter< size_t >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< size_t >::type nbatch(nbatchSEXP);
    Rcpp::traits::input_parameter< size_t >::type blen(blenSEXP);
    rcpp_result_gen = Rcpp::wrap(inference_cpp(demography, age_group_limits, ili, mon_pop, n_pos, n_samples, vaccine_calendar, polymod_data, initial, mapping, risk_ratios, epsilon_index, psi_index, transmissibility_index, susceptibility_index, initial_infected_index, no_age_groups, no_risk_groups, nburn, nbatch, blen));
    return rcpp_result_gen;
END_RCPP
}
// dmultinomialCPP
double dmultinomialCPP(Eigen::VectorXi x, int size, Eigen::VectorXd prob, bool use_log);
RcppExport SEXP _fluEvidenceSynthesis_dmultinomialCPP(SEXP xSEXP, SEXP sizeSEXP, SEXP probSEXP, SEXP use_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type use_log(use_logSEXP);
    rcpp_result_gen = Rcpp::wrap(dmultinomialCPP(x, size, prob, use_log));
    return rcpp_result_gen;
END_RCPP
}
// inference_multistrains
mcmc_result_inference_t inference_multistrains(std::vector<size_t> demography, Eigen::MatrixXi ili, Eigen::MatrixXi mon_pop, Rcpp::List n_pos, Eigen::MatrixXi n_samples, Rcpp::List vaccine_calendar, Eigen::MatrixXi polymod_data, Eigen::VectorXd initial, size_t nburn, size_t nbatch, size_t blen);
RcppExport SEXP _fluEvidenceSynthesis_inference_multistrains(SEXP demographySEXP, SEXP iliSEXP, SEXP mon_popSEXP, SEXP n_posSEXP, SEXP n_samplesSEXP, SEXP vaccine_calendarSEXP, SEXP polymod_dataSEXP, SEXP initialSEXP, SEXP nburnSEXP, SEXP nbatchSEXP, SEXP blenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<size_t> >::type demography(demographySEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type ili(iliSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type mon_pop(mon_popSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type n_pos(n_posSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type vaccine_calendar(vaccine_calendarSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type polymod_data(polymod_dataSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type initial(initialSEXP);
    Rcpp::traits::input_parameter< size_t >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< size_t >::type nbatch(nbatchSEXP);
    Rcpp::traits::input_parameter< size_t >::type blen(blenSEXP);
    rcpp_result_gen = Rcpp::wrap(inference_multistrains(demography, ili, mon_pop, n_pos, n_samples, vaccine_calendar, polymod_data, initial, nburn, nbatch, blen));
    return rcpp_result_gen;
END_RCPP
}
// updateMeans
Eigen::VectorXd updateMeans(Eigen::VectorXd means, Eigen::VectorXd v, size_t n);
RcppExport SEXP _fluEvidenceSynthesis_updateMeans(SEXP meansSEXP, SEXP vSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type means(meansSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    Rcpp::traits::input_parameter< size_t >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(updateMeans(means, v, n));
    return rcpp_result_gen;
END_RCPP
}
// updateCovariance
Eigen::MatrixXd updateCovariance(Eigen::MatrixXd cov, Eigen::VectorXd v, Eigen::VectorXd means, size_t n);
RcppExport SEXP _fluEvidenceSynthesis_updateCovariance(SEXP covSEXP, SEXP vSEXP, SEXP meansSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type cov(covSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type means(meansSEXP);
    Rcpp::traits::input_parameter< size_t >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(updateCovariance(cov, v, means, n));
    return rcpp_result_gen;
END_RCPP
}
// getTimeFromWeekYear
Rcpp::Datetime getTimeFromWeekYear(int week, int year);
RcppExport SEXP _fluEvidenceSynthesis_getTimeFromWeekYear(SEXP weekSEXP, SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type week(weekSEXP);
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    rcpp_result_gen = Rcpp::wrap(getTimeFromWeekYear(week, year));
    return rcpp_result_gen;
END_RCPP
}
// runSEIRModel
Rcpp::DataFrame runSEIRModel(std::vector<size_t> age_sizes, flu::vaccine::vaccine_t vaccine_calendar, Eigen::MatrixXi polymod_data, Eigen::VectorXd susceptibility, double transmissibility, double init_pop, Eigen::VectorXd infection_delays, size_t interval);
RcppExport SEXP _fluEvidenceSynthesis_runSEIRModel(SEXP age_sizesSEXP, SEXP vaccine_calendarSEXP, SEXP polymod_dataSEXP, SEXP susceptibilitySEXP, SEXP transmissibilitySEXP, SEXP init_popSEXP, SEXP infection_delaysSEXP, SEXP intervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<size_t> >::type age_sizes(age_sizesSEXP);
    Rcpp::traits::input_parameter< flu::vaccine::vaccine_t >::type vaccine_calendar(vaccine_calendarSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type polymod_data(polymod_dataSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type susceptibility(susceptibilitySEXP);
    Rcpp::traits::input_parameter< double >::type transmissibility(transmissibilitySEXP);
    Rcpp::traits::input_parameter< double >::type init_pop(init_popSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type infection_delays(infection_delaysSEXP);
    Rcpp::traits::input_parameter< size_t >::type interval(intervalSEXP);
    rcpp_result_gen = Rcpp::wrap(runSEIRModel(age_sizes, vaccine_calendar, polymod_data, susceptibility, transmissibility, init_pop, infection_delays, interval));
    return rcpp_result_gen;
END_RCPP
}
// infectionODEs
Rcpp::DataFrame infectionODEs(Rcpp::NumericVector population, Eigen::VectorXd initial_infected, flu::vaccine::vaccine_t vaccine_calendar, Eigen::MatrixXd contact_matrix, Eigen::VectorXd susceptibility, double transmissibility, Eigen::VectorXd infection_delays, Rcpp::DateVector dates);
RcppExport SEXP _fluEvidenceSynthesis_infectionODEs(SEXP populationSEXP, SEXP initial_infectedSEXP, SEXP vaccine_calendarSEXP, SEXP contact_matrixSEXP, SEXP susceptibilitySEXP, SEXP transmissibilitySEXP, SEXP infection_delaysSEXP, SEXP datesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type population(populationSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type initial_infected(initial_infectedSEXP);
    Rcpp::traits::input_parameter< flu::vaccine::vaccine_t >::type vaccine_calendar(vaccine_calendarSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type contact_matrix(contact_matrixSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type susceptibility(susceptibilitySEXP);
    Rcpp::traits::input_parameter< double >::type transmissibility(transmissibilitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type infection_delays(infection_delaysSEXP);
    Rcpp::traits::input_parameter< Rcpp::DateVector >::type dates(datesSEXP);
    rcpp_result_gen = Rcpp::wrap(infectionODEs(population, initial_infected, vaccine_calendar, contact_matrix, susceptibility, transmissibility, infection_delays, dates));
    return rcpp_result_gen;
END_RCPP
}
// log_likelihood
double log_likelihood(double epsilon, double psi, size_t predicted, double population_size, int ili_cases, int ili_monitored, int confirmed_positive, int confirmed_samples);
RcppExport SEXP _fluEvidenceSynthesis_log_likelihood(SEXP epsilonSEXP, SEXP psiSEXP, SEXP predictedSEXP, SEXP population_sizeSEXP, SEXP ili_casesSEXP, SEXP ili_monitoredSEXP, SEXP confirmed_positiveSEXP, SEXP confirmed_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< size_t >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< double >::type population_size(population_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type ili_cases(ili_casesSEXP);
    Rcpp::traits::input_parameter< int >::type ili_monitored(ili_monitoredSEXP);
    Rcpp::traits::input_parameter< int >::type confirmed_positive(confirmed_positiveSEXP);
    Rcpp::traits::input_parameter< int >::type confirmed_samples(confirmed_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(log_likelihood(epsilon, psi, predicted, population_size, ili_cases, ili_monitored, confirmed_positive, confirmed_samples));
    return rcpp_result_gen;
END_RCPP
}
// total_log_likelihood
double total_log_likelihood(Eigen::VectorXd epsilon, double psi, Eigen::MatrixXi predicted, Eigen::VectorXi population_size, Eigen::MatrixXi ili_cases, Eigen::MatrixXi ili_monitored, Eigen::MatrixXi confirmed_positive, Eigen::MatrixXi confirmed_samples);
RcppExport SEXP _fluEvidenceSynthesis_total_log_likelihood(SEXP epsilonSEXP, SEXP psiSEXP, SEXP predictedSEXP, SEXP population_sizeSEXP, SEXP ili_casesSEXP, SEXP ili_monitoredSEXP, SEXP confirmed_positiveSEXP, SEXP confirmed_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type population_size(population_sizeSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type ili_cases(ili_casesSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type ili_monitored(ili_monitoredSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type confirmed_positive(confirmed_positiveSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type confirmed_samples(confirmed_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(total_log_likelihood(epsilon, psi, predicted, population_size, ili_cases, ili_monitored, confirmed_positive, confirmed_samples));
    return rcpp_result_gen;
END_RCPP
}
// runPredatorPrey
Eigen::MatrixXd runPredatorPrey(double step_size, double h_step);
RcppExport SEXP _fluEvidenceSynthesis_runPredatorPrey(SEXP step_sizeSEXP, SEXP h_stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type h_step(h_stepSEXP);
    rcpp_result_gen = Rcpp::wrap(runPredatorPrey(step_size, h_step));
    return rcpp_result_gen;
END_RCPP
}
// runPredatorPreySimple
Eigen::MatrixXd runPredatorPreySimple(double step_size, double h_step);
RcppExport SEXP _fluEvidenceSynthesis_runPredatorPreySimple(SEXP step_sizeSEXP, SEXP h_stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type h_step(h_stepSEXP);
    rcpp_result_gen = Rcpp::wrap(runPredatorPreySimple(step_size, h_step));
    return rcpp_result_gen;
END_RCPP
}
// adaptiveMCMCR
Rcpp::List adaptiveMCMCR(Rcpp::Function lprior, Rcpp::Function llikelihood, Rcpp::Function outfun, Rcpp::Function acceptfun, size_t nburn, Eigen::VectorXd initial, size_t nbatch, size_t blen, bool verbose);
RcppExport SEXP _fluEvidenceSynthesis_adaptiveMCMCR(SEXP lpriorSEXP, SEXP llikelihoodSEXP, SEXP outfunSEXP, SEXP acceptfunSEXP, SEXP nburnSEXP, SEXP initialSEXP, SEXP nbatchSEXP, SEXP blenSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Function >::type lprior(lpriorSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type llikelihood(llikelihoodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type outfun(outfunSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type acceptfun(acceptfunSEXP);
    Rcpp::traits::input_parameter< size_t >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type initial(initialSEXP);
    Rcpp::traits::input_parameter< size_t >::type nbatch(nbatchSEXP);
    Rcpp::traits::input_parameter< size_t >::type blen(blenSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(adaptiveMCMCR(lprior, llikelihood, outfun, acceptfun, nburn, initial, nbatch, blen, verbose));
    return rcpp_result_gen;
END_RCPP
}
// contact_matrix
Eigen::MatrixXd contact_matrix(Eigen::MatrixXi polymod_data, std::vector<size_t> demography, Rcpp::NumericVector age_group_limits);
RcppExport SEXP _fluEvidenceSynthesis_contact_matrix(SEXP polymod_dataSEXP, SEXP demographySEXP, SEXP age_group_limitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type polymod_data(polymod_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type demography(demographySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type age_group_limits(age_group_limitsSEXP);
    rcpp_result_gen = Rcpp::wrap(contact_matrix(polymod_data, demography, age_group_limits));
    return rcpp_result_gen;
END_RCPP
}
// age_group_levels
Rcpp::CharacterVector age_group_levels(Rcpp::NumericVector limits);
RcppExport SEXP _fluEvidenceSynthesis_age_group_levels(SEXP limitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type limits(limitsSEXP);
    rcpp_result_gen = Rcpp::wrap(age_group_levels(limits));
    return rcpp_result_gen;
END_RCPP
}
// age_group_limits
Rcpp::IntegerVector age_group_limits(std::vector<std::string> levels);
RcppExport SEXP _fluEvidenceSynthesis_age_group_limits(SEXP levelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type levels(levelsSEXP);
    rcpp_result_gen = Rcpp::wrap(age_group_limits(levels));
    return rcpp_result_gen;
END_RCPP
}
// as_age_group
Rcpp::IntegerVector as_age_group(Rcpp::NumericVector age, Rcpp::NumericVector limits);
RcppExport SEXP _fluEvidenceSynthesis_as_age_group(SEXP ageSEXP, SEXP limitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type limits(limitsSEXP);
    rcpp_result_gen = Rcpp::wrap(as_age_group(age, limits));
    return rcpp_result_gen;
END_RCPP
}
// separate_into_age_groups
Rcpp::IntegerVector separate_into_age_groups(std::vector<size_t> age_sizes, Rcpp::NumericVector limits);
RcppExport SEXP _fluEvidenceSynthesis_separate_into_age_groups(SEXP age_sizesSEXP, SEXP limitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<size_t> >::type age_sizes(age_sizesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type limits(limitsSEXP);
    rcpp_result_gen = Rcpp::wrap(separate_into_age_groups(age_sizes, limits));
    return rcpp_result_gen;
END_RCPP
}
// stratify_by_risk
Eigen::VectorXd stratify_by_risk(const Eigen::VectorXd& age_groups, const Eigen::VectorXd& risk, size_t no_risk_groups);
RcppExport SEXP _fluEvidenceSynthesis_stratify_by_risk(SEXP age_groupsSEXP, SEXP riskSEXP, SEXP no_risk_groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type age_groups(age_groupsSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type risk(riskSEXP);
    Rcpp::traits::input_parameter< size_t >::type no_risk_groups(no_risk_groupsSEXP);
    rcpp_result_gen = Rcpp::wrap(stratify_by_risk(age_groups, risk, no_risk_groups));
    return rcpp_result_gen;
END_RCPP
}
// as_R0
double as_R0(double transmission_rate, Eigen::MatrixXd contact_matrix, Eigen::VectorXd age_groups, double duration);
RcppExport SEXP _fluEvidenceSynthesis_as_R0(SEXP transmission_rateSEXP, SEXP contact_matrixSEXP, SEXP age_groupsSEXP, SEXP durationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type transmission_rate(transmission_rateSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type contact_matrix(contact_matrixSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type age_groups(age_groupsSEXP);
    Rcpp::traits::input_parameter< double >::type duration(durationSEXP);
    rcpp_result_gen = Rcpp::wrap(as_R0(transmission_rate, contact_matrix, age_groups, duration));
    return rcpp_result_gen;
END_RCPP
}
// as_transmission_rate
double as_transmission_rate(double R0, Eigen::MatrixXd contact_matrix, Eigen::VectorXd age_groups, double duration);
RcppExport SEXP _fluEvidenceSynthesis_as_transmission_rate(SEXP R0SEXP, SEXP contact_matrixSEXP, SEXP age_groupsSEXP, SEXP durationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type R0(R0SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type contact_matrix(contact_matrixSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type age_groups(age_groupsSEXP);
    Rcpp::traits::input_parameter< double >::type duration(durationSEXP);
    rcpp_result_gen = Rcpp::wrap(as_transmission_rate(R0, contact_matrix, age_groups, duration));
    return rcpp_result_gen;
END_RCPP
}
// vaccinationScenario
std::vector<double> vaccinationScenario(std::vector<size_t> age_sizes, flu::vaccine::vaccine_t vaccine_calendar, Eigen::MatrixXi polymod_data, std::vector<size_t> contact_ids, Eigen::VectorXd parameters);
RcppExport SEXP _fluEvidenceSynthesis_vaccinationScenario(SEXP age_sizesSEXP, SEXP vaccine_calendarSEXP, SEXP polymod_dataSEXP, SEXP contact_idsSEXP, SEXP parametersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<size_t> >::type age_sizes(age_sizesSEXP);
    Rcpp::traits::input_parameter< flu::vaccine::vaccine_t >::type vaccine_calendar(vaccine_calendarSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type polymod_data(polymod_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type contact_ids(contact_idsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type parameters(parametersSEXP);
    rcpp_result_gen = Rcpp::wrap(vaccinationScenario(age_sizes, vaccine_calendar, polymod_data, contact_ids, parameters));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fluEvidenceSynthesis_inference_cpp", (DL_FUNC) &_fluEvidenceSynthesis_inference_cpp, 21},
    {"_fluEvidenceSynthesis_dmultinomialCPP", (DL_FUNC) &_fluEvidenceSynthesis_dmultinomialCPP, 4},
    {"_fluEvidenceSynthesis_inference_multistrains", (DL_FUNC) &_fluEvidenceSynthesis_inference_multistrains, 11},
    {"_fluEvidenceSynthesis_updateMeans", (DL_FUNC) &_fluEvidenceSynthesis_updateMeans, 3},
    {"_fluEvidenceSynthesis_updateCovariance", (DL_FUNC) &_fluEvidenceSynthesis_updateCovariance, 4},
    {"_fluEvidenceSynthesis_getTimeFromWeekYear", (DL_FUNC) &_fluEvidenceSynthesis_getTimeFromWeekYear, 2},
    {"_fluEvidenceSynthesis_runSEIRModel", (DL_FUNC) &_fluEvidenceSynthesis_runSEIRModel, 8},
    {"_fluEvidenceSynthesis_infectionODEs", (DL_FUNC) &_fluEvidenceSynthesis_infectionODEs, 8},
    {"_fluEvidenceSynthesis_log_likelihood", (DL_FUNC) &_fluEvidenceSynthesis_log_likelihood, 8},
    {"_fluEvidenceSynthesis_total_log_likelihood", (DL_FUNC) &_fluEvidenceSynthesis_total_log_likelihood, 8},
    {"_fluEvidenceSynthesis_runPredatorPrey", (DL_FUNC) &_fluEvidenceSynthesis_runPredatorPrey, 2},
    {"_fluEvidenceSynthesis_runPredatorPreySimple", (DL_FUNC) &_fluEvidenceSynthesis_runPredatorPreySimple, 2},
    {"_fluEvidenceSynthesis_adaptiveMCMCR", (DL_FUNC) &_fluEvidenceSynthesis_adaptiveMCMCR, 9},
    {"_fluEvidenceSynthesis_contact_matrix", (DL_FUNC) &_fluEvidenceSynthesis_contact_matrix, 3},
    {"_fluEvidenceSynthesis_age_group_levels", (DL_FUNC) &_fluEvidenceSynthesis_age_group_levels, 1},
    {"_fluEvidenceSynthesis_age_group_limits", (DL_FUNC) &_fluEvidenceSynthesis_age_group_limits, 1},
    {"_fluEvidenceSynthesis_as_age_group", (DL_FUNC) &_fluEvidenceSynthesis_as_age_group, 2},
    {"_fluEvidenceSynthesis_separate_into_age_groups", (DL_FUNC) &_fluEvidenceSynthesis_separate_into_age_groups, 2},
    {"_fluEvidenceSynthesis_stratify_by_risk", (DL_FUNC) &_fluEvidenceSynthesis_stratify_by_risk, 3},
    {"_fluEvidenceSynthesis_as_R0", (DL_FUNC) &_fluEvidenceSynthesis_as_R0, 4},
    {"_fluEvidenceSynthesis_as_transmission_rate", (DL_FUNC) &_fluEvidenceSynthesis_as_transmission_rate, 4},
    {"_fluEvidenceSynthesis_vaccinationScenario", (DL_FUNC) &_fluEvidenceSynthesis_vaccinationScenario, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_fluEvidenceSynthesis(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
