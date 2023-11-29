bool __fastcall MissionType__IsMasterMission(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}