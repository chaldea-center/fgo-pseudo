void __fastcall SyncWidget___ctor(SyncWidget_o *this, const MethodInfo *method)
{
  _QWORD **v3; // x21
  __int64 v4; // x20
  __int16 v5; // w8
  __int64 v6; // x20
  __int64 v7; // x20
  __int64 v8; // x20
  _QWORD **v9; // x21
  __int64 v10; // x20
  __int16 v11; // w8
  __int64 v12; // x20
  __int64 v13; // x20
  __int64 v14; // x20

  if ( (byte_434EDF0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_Action___);
    sub_B70694(&Method_System_Array_Empty_SyncWidget_SyncParamType___);
    byte_434EDF0 = 1;
  }
  v3 = (_QWORD **)Method_System_Array_Empty_SyncWidget_SyncParamType___;
  v4 = **((_QWORD **)Method_System_Array_Empty_SyncWidget_SyncParamType___ + 6);
  v5 = *(_WORD *)(v4 + 306);
  if ( (v5 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_SyncWidget_SyncParamType___ + 6));
    v5 = *(_WORD *)(v4 + 306);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v6 = *v3[6];
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_B08394(*v3[6]);
    if ( !*(_DWORD *)(v6 + 224) )
    {
      v7 = *v3[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_B08394(*v3[6]);
      j_il2cpp_runtime_class_init_0(v7);
    }
  }
  v8 = *v3[6];
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B08394(*v3[6]);
  this->fields.syncParamTypeArray = **(struct SyncWidget_SyncParamType_array ***)(v8 + 184);
  sub_B70630(&this->fields.syncParamTypeArray);
  this->fields.blankSize = UnityEngine_Vector2__get_zero(0LL);
  v9 = (_QWORD **)Method_System_Array_Empty_Action___;
  v10 = **((_QWORD **)Method_System_Array_Empty_Action___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_Action___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_B08394(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_B08394(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_B08394(*v9[6]);
  this->fields.syncActionArray = **(struct System_Action_array ***)(v14 + 184);
  sub_B70630(&this->fields.syncActionArray);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SyncWidget__Awake(SyncWidget_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *syncParamTypeArray; // x20
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *v4; // x0
  __int64 v5; // x1
  System_Func_TSource__TResult__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  long double v8; // q0

  if ( (byte_434EDED & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_Action___);
    sub_B70694(&Method_System_Func_SyncWidget_SyncParamType__Action___ctor__);
    sub_B70694(&System_Func_SyncWidget_SyncParamType__Action__TypeInfo);
    byte_434EDED = 1;
  }
  this->fields.self = (struct UIWidget_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  sub_B70630(&this->fields.self);
  syncParamTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.syncParamTypeArray;
  v4 = (System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *)sub_B70764(System_Func_SyncWidget_SyncParamType__Action__TypeInfo);
  if ( !this )
    sub_B7076C(v4, v5);
  v6 = (System_Func_TSource__TResult__o *)v4;
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._5_InitSync.methodPtr,
    (const MethodInfo_29A90A0 *)Method_System_Func_SyncWidget_SyncParamType__Action___ctor__);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Voice_BATTLE__BattlePerformance_VoiceParam_(
                                                              syncParamTypeArray,
                                                              v6,
                                                              (const MethodInfo_1CC31A8 *)Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___);
  this->fields.syncActionArray = (struct System_Action_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 v7,
                                                                 (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_Action___);
  *(__n128 *)&v8 = sub_B70630(&this->fields.syncActionArray);
  ((void (__fastcall *)(SyncWidget_o *, Il2CppMethodPointer, long double))this->klass->vtable._5_InitSync.method)(
    this,
    this->klass->vtable._6_DisabledSync.methodPtr,
    v8);
}


System_Action_o *__fastcall SyncWidget__ConvertTypeToAction(SyncWidget_o *this, int32_t type, const MethodInfo *method)
{
  System_Action_o *v5; // x0
  __int64 *v6; // x8
  SyncWidget___c_c *v7; // x0
  struct SyncWidget___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_3; // x20
  Il2CppObject *v10; // x19
  struct SyncWidget___c_StaticFields *v11; // x0

  if ( (byte_434EDEF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SyncWidget_SyncColorAlpha__);
    sub_B70694(&Method_SyncWidget__ConvertTypeToAction_b__9_0__);
    sub_B70694(&Method_SyncWidget__ConvertTypeToAction_b__9_1__);
    sub_B70694(&Method_SyncWidget__ConvertTypeToAction_b__9_2__);
    sub_B70694(&Method_SyncWidget___c__ConvertTypeToAction_b__9_3__);
    sub_B70694(&SyncWidget___c_TypeInfo);
    byte_434EDEF = 1;
  }
  switch ( type )
  {
    case 0:
      v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v6 = &Method_SyncWidget__ConvertTypeToAction_b__9_0__;
      goto LABEL_16;
    case 1:
      v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v6 = &Method_SyncWidget__ConvertTypeToAction_b__9_1__;
      goto LABEL_16;
    case 2:
      v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v6 = &Method_SyncWidget__ConvertTypeToAction_b__9_2__;
      goto LABEL_16;
    case 3:
      v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v6 = &Method_SyncWidget_SyncColorAlpha__;
LABEL_16:
      _9__9_3 = v5;
      System_Action___ctor(v5, (Il2CppObject *)this, *v6, 0LL);
      break;
    default:
      v7 = SyncWidget___c_TypeInfo;
      if ( (BYTE3(SyncWidget___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo);
        v7 = SyncWidget___c_TypeInfo;
      }
      static_fields = v7->static_fields;
      _9__9_3 = static_fields->__9__9_3;
      if ( !_9__9_3 )
      {
        if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7);
          static_fields = SyncWidget___c_TypeInfo->static_fields;
        }
        v10 = (Il2CppObject *)static_fields->__9;
        _9__9_3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(_9__9_3, v10, Method_SyncWidget___c__ConvertTypeToAction_b__9_3__, 0LL);
        v11 = SyncWidget___c_TypeInfo->static_fields;
        v11->__9__9_3 = _9__9_3;
        sub_B70630(&v11->__9__9_3);
      }
      break;
  }
  return _9__9_3;
}


bool __fastcall SyncWidget__DisabledSync(SyncWidget_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall SyncWidget__InitSync(SyncWidget_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall SyncWidget__LateUpdate(SyncWidget_o *this, const MethodInfo *method)
{
  SyncWidget__Sync(this, method);
}


void __fastcall SyncWidget__Sync(SyncWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *self; // x20
  UnityEngine_Object_o *syncFrom; // x20
  System_Collections_Generic_IEnumerable_T__o *syncActionArray; // x19
  SyncWidget___c_c *v6; // x0
  struct SyncWidget___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__8_0; // x20
  Il2CppObject *v9; // x21
  struct SyncWidget___c_StaticFields *v10; // x0

  if ( (byte_434EDEE & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_Action___ctor__);
    sub_B70694(&System_Action_Action__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_Action___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SyncWidget___c__Sync_b__8_0__);
    sub_B70694(&SyncWidget___c_TypeInfo);
    byte_434EDEE = 1;
  }
  self = (UnityEngine_Object_o *)this->fields.self;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(self, 0LL, 0LL) )
  {
    syncFrom = (UnityEngine_Object_o *)this->fields.syncFrom;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(syncFrom, 0LL, 0LL)
      && (((__int64 (__fastcall *)(SyncWidget_o *, void *))this->klass->vtable._6_DisabledSync.method)(
            this,
            this->klass[1]._1.image) & 1) == 0 )
    {
      syncActionArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.syncActionArray;
      v6 = SyncWidget___c_TypeInfo;
      if ( (BYTE3(SyncWidget___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo);
        v6 = SyncWidget___c_TypeInfo;
      }
      static_fields = v6->static_fields;
      _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          static_fields = SyncWidget___c_TypeInfo->static_fields;
        }
        v9 = (Il2CppObject *)static_fields->__9;
        _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__8_0,
          v9,
          Method_SyncWidget___c__Sync_b__8_0__,
          (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
        v10 = SyncWidget___c_TypeInfo->static_fields;
        v10->__9__8_0 = (struct System_Action_Action__o *)_9__8_0;
        sub_B70630(&v10->__9__8_0);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        syncActionArray,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_Action___);
    }
  }
}


void __fastcall SyncWidget__SyncColorAlpha(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *self; // x8
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v4; // x19
  float b; // s10
  float r; // s8
  float g; // s9
  struct UIWidget_o *v8; // x8
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  self = this->fields.self;
  if ( !self )
    goto LABEL_7;
  syncFrom = this->fields.syncFrom;
  v4 = this;
  if ( !syncFrom )
    goto LABEL_7;
  b = self->fields.mColor.fields.b;
  r = self->fields.mColor.fields.r;
  g = self->fields.mColor.fields.g;
  this = (SyncWidget_o *)UnityEngine_Mathf__Approximately(
                           self->fields.mColor.fields.a,
                           syncFrom->fields.mColor.fields.a,
                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v8 = v4->fields.syncFrom;
  if ( !v8 || (this = (SyncWidget_o *)v4->fields.self) == 0LL )
LABEL_7:
    sub_B7076C(this, method);
  v9.fields.a = v8->fields.mColor.fields.a;
  v9.fields.r = r;
  v9.fields.g = g;
  v9.fields.b = b;
  UIWidget__set_color((UIWidget_o *)this, v9, 0LL);
}


void __fastcall SyncWidget___ConvertTypeToAction_b__9_0(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  float v4; // s0
  double v5; // d0

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0LL) )
    sub_B7076C(this, method);
  v4 = v3->fields.blankSize.fields.x + v3->fields.blankSize.fields.x;
  if ( v4 == INFINITY )
    v5 = -v4;
  else
    v5 = v4;
  UIWidget__set_width((UIWidget_o *)this, syncFrom->fields.mWidth + (int)v5, 0LL);
}


void __fastcall SyncWidget___ConvertTypeToAction_b__9_1(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  float v4; // s0
  double v5; // d0

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0LL) )
    sub_B7076C(this, method);
  v4 = v3->fields.blankSize.fields.y + v3->fields.blankSize.fields.y;
  if ( v4 == INFINITY )
    v5 = -v4;
  else
    v5 = v4;
  UIWidget__set_height((UIWidget_o *)this, syncFrom->fields.mHeight + (int)v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SyncWidget___ConvertTypeToAction_b__9_2(SyncWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *self; // x0
  UnityEngine_Component_o *syncFrom; // x8
  UnityEngine_Transform_o *v5; // x19
  int v6; // s0

  self = (UnityEngine_Component_o *)this->fields.self;
  if ( !self
    || (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(self, 0LL),
        (syncFrom = (UnityEngine_Component_o *)this->fields.syncFrom) == 0LL)
    || (v5 = (UnityEngine_Transform_o *)self,
        (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(syncFrom, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)self, 0LL), !v5) )
  {
    sub_B7076C(self, method);
  }
  UnityEngine_Transform__set_localScale(v5, *(UnityEngine_Vector3_o *)&v6, 0LL);
}


void __fastcall SyncWidget___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SyncWidget___c_StaticFields *static_fields; // x0

  if ( (byte_434F108 & 1) == 0 )
  {
    sub_B70694(&SyncWidget___c_TypeInfo);
    byte_434F108 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(SyncWidget___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SyncWidget___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SyncWidget___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall SyncWidget___c___ctor(SyncWidget___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SyncWidget___c___ConvertTypeToAction_b__9_3(SyncWidget___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SyncWidget___c___Sync_b__8_0(SyncWidget___c_o *this, System_Action_o *x, const MethodInfo *method)
{
  ActionExtensions__Call(x, 0LL);
}