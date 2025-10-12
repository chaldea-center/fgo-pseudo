void NGuiPlayMakerProxy___ctor(NGuiPlayMakerProxy_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *NGuiPlayMakerProxy__GetFsmEventEnumValue(System_Enum_o *value, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  System_Type_o *Type; // x20
  System_Reflection_FieldInfo_o *Field; // x0
  Il2CppType *v5; // x20
  System_Reflection_FieldInfo_o *v6; // x19
  System_RuntimeTypeHandle_o v7; // x0
  __int64 v8; // x0
  void *monitor; // x8
  System_Enum_c *klass; // x8

  v2 = (Il2CppObject *)value;
  if ( (byte_4C35807 & 1) == 0 )
  {
    sub_1C32C20(&PlayMakerUtils_FsmEvent___TypeInfo);
    sub_1C32C20(&PlayMakerUtils_FsmEvent_var);
    value = (System_Enum_o *)sub_1C32C20(&System_Type_TypeInfo);
    byte_4C35807 = 1;
  }
  if ( !v2 )
    goto LABEL_14;
  Type = System_Object__GetType(v2, 0);
  value = (System_Enum_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v2->klass->vtable[3].methodPtr)(
                             v2,
                             v2->klass->vtable[3].method);
  if ( !Type )
    goto LABEL_14;
  Field = System_Type__GetField(Type, (System_String_o *)value, 0);
  v5 = PlayMakerUtils_FsmEvent_var;
  v6 = Field;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v7.fields.value = (intptr_t)v5;
  value = (System_Enum_o *)System_Type__GetTypeFromHandle(v7, 0);
  if ( !v6 )
    goto LABEL_14;
  v8 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, System_Enum_o *, _QWORD, const MethodInfo *))v6->klass->vtable._14_GetCustomAttributes.methodPtr)(
         v6,
         value,
         0,
         v6->klass->vtable._14_GetCustomAttributes.method);
  value = (System_Enum_o *)sub_1C32D5C(v8, PlayMakerUtils_FsmEvent___TypeInfo);
  if ( !value )
    goto LABEL_14;
  monitor = value[1].monitor;
  if ( monitor )
  {
    if ( !(_DWORD)monitor )
      sub_1C32E84(value);
    klass = value[2].klass;
    if ( klass )
      return (System_String_o *)klass->_1.name;
LABEL_14:
    sub_1C32E7C(value);
  }
  return 0;
}


void NGuiPlayMakerProxy__Start(NGuiPlayMakerProxy_o *this, const MethodInfo *method)
{
  ;
}


void NGuiPlayMakerProxy__Update(NGuiPlayMakerProxy_o *this, const MethodInfo *method)
{
  ;
}