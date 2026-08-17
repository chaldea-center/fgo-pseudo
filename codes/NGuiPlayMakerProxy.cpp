void NGuiPlayMakerProxy___ctor(NGuiPlayMakerProxy_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *NGuiPlayMakerProxy__GetFsmEventEnumValue(System_Enum_o *value, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  System_Type_o *Type; // x20
  System_Reflection_FieldInfo_o *Field; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppType *v7; // x20
  System_Reflection_FieldInfo_o *v8; // x19
  System_RuntimeTypeHandle_o v9; // x0
  __int64 v10; // x0
  void *monitor; // x8
  System_Enum_c *klass; // x8

  v2 = (Il2CppObject *)value;
  if ( (byte_596E556 & 1) == 0 )
  {
    sub_2213A60(&PlayMakerUtils_FsmEvent___TypeInfo);
    value = (System_Enum_o *)sub_2213A60(&PlayMakerUtils_FsmEvent_var);
    byte_596E556 = 1;
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
  v7 = PlayMakerUtils_FsmEvent_var;
  v8 = Field;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v5, v6);
  v9.fields.value = (intptr_t)v7;
  value = (System_Enum_o *)System_Type__GetTypeFromHandle(v9, 0);
  if ( !v8 )
    goto LABEL_14;
  v10 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, System_Enum_o *, _QWORD, const MethodInfo *))v8->klass->vtable._14_GetCustomAttributes.methodPtr)(
          v8,
          value,
          0,
          v8->klass->vtable._14_GetCustomAttributes.method);
  value = (System_Enum_o *)sub_2213BB4(v10, PlayMakerUtils_FsmEvent___TypeInfo);
  if ( !value )
    goto LABEL_14;
  monitor = value[1].monitor;
  if ( monitor )
  {
    if ( !(_DWORD)monitor )
      sub_2213CE4(value);
    klass = value[2].klass;
    if ( klass )
      return (System_String_o *)klass->_1.name;
LABEL_14:
    sub_2213CDC(value, method);
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