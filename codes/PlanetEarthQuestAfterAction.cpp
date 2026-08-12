void PlanetEarthQuestAfterAction___ctor(PlanetEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BlankEarth_o *PlanetEarthQuestAfterAction__GetBlankEarth(PlanetEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  UnityEngine_Object_o *TerminalListTop; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_596D1C4 & 1) == 0 )
  {
    this = (PlanetEarthQuestAfterAction_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D1C4 = 1;
  }
  TerminalListTop = (UnityEngine_Object_o *)BlankEarthQuestAfterAction__GetTerminalListTop(
                                              (BlankEarthQuestAfterAction_o *)this,
                                              method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2, v3);
  v5 = UnityEngine_Object__op_Inequality(TerminalListTop, 0, 0);
  if ( !v5 )
    return 0;
  if ( !TerminalListTop )
    sub_2213CDC(v5, v6);
  return ScrTerminalListTop__get_PlanetEarth((ScrTerminalListTop_o *)TerminalListTop, 0);
}


bool PlanetEarthQuestAfterAction__IsBlankEarthActive(PlanetEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  UnityEngine_Object_o *TerminalListTop; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *PlanetEarth; // x19

  if ( (byte_596D1C3 & 1) == 0 )
  {
    this = (PlanetEarthQuestAfterAction_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D1C3 = 1;
  }
  TerminalListTop = (UnityEngine_Object_o *)BlankEarthQuestAfterAction__GetTerminalListTop(
                                              (BlankEarthQuestAfterAction_o *)this,
                                              method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2, v3);
  v5 = UnityEngine_Object__op_Equality(TerminalListTop, 0, 0);
  if ( v5 )
    return 0;
  if ( !TerminalListTop )
    sub_2213CDC(v5, v6);
  PlanetEarth = (UnityEngine_Object_o *)ScrTerminalListTop__get_PlanetEarth((ScrTerminalListTop_o *)TerminalListTop, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  return UnityEngine_Object__op_Inequality(PlanetEarth, 0, 0);
}