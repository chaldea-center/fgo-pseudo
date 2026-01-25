void PlanetEarthQuestAfterAction___ctor(PlanetEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BlankEarth_o *PlanetEarthQuestAfterAction__GetBlankEarth(PlanetEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *TerminalListTop; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4CEB209 & 1) == 0 )
  {
    this = (PlanetEarthQuestAfterAction_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB209 = 1;
  }
  TerminalListTop = (UnityEngine_Object_o *)BlankEarthQuestAfterAction__GetTerminalListTop(
                                              (BlankEarthQuestAfterAction_o *)this,
                                              method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Inequality(TerminalListTop, 0, 0);
  if ( !v3 )
    return 0;
  if ( !TerminalListTop )
    sub_1C7BD40(v3, v4);
  return ScrTerminalListTop__get_PlanetEarth((ScrTerminalListTop_o *)TerminalListTop, 0);
}


bool PlanetEarthQuestAfterAction__IsBlankEarthActive(PlanetEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *TerminalListTop; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *PlanetEarth; // x19

  if ( (byte_4CEB208 & 1) == 0 )
  {
    this = (PlanetEarthQuestAfterAction_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB208 = 1;
  }
  TerminalListTop = (UnityEngine_Object_o *)BlankEarthQuestAfterAction__GetTerminalListTop(
                                              (BlankEarthQuestAfterAction_o *)this,
                                              method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality(TerminalListTop, 0, 0);
  if ( v3 )
    return 0;
  if ( !TerminalListTop )
    sub_1C7BD40(v3, v4);
  PlanetEarth = (UnityEngine_Object_o *)ScrTerminalListTop__get_PlanetEarth((ScrTerminalListTop_o *)TerminalListTop, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(PlanetEarth, 0, 0);
}