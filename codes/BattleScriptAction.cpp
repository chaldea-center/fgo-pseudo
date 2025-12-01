bool BattleScriptAction__IsSingleExec(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 1) < 2 || (unsigned int)(type - 7) < 2;
}