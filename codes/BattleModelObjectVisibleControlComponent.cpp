void __fastcall BattleModelObjectVisibleControlComponent___ctor(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  LODWORD(this->fields.visibleChangeObjects) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent__Awake(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x19
  BattleModelObjectVisibleControlComponent___c_c *v4; // x0
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__5_0; // x20
  Il2CppObject *v7; // x21
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *v8; // x0

  if ( (byte_42AC97C & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
    sub_B52984(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_B52984(&Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__);
    sub_B52984(&BattleModelObjectVisibleControlComponent___c_TypeInfo);
    byte_42AC97C = 1;
  }
  v3 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields.visible;
  v4 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  if ( (BYTE3(BattleModelObjectVisibleControlComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleModelObjectVisibleControlComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleModelObjectVisibleControlComponent___c_TypeInfo);
    v4 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__5_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__5_0,
      v7,
      Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
    v8 = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    v8->__9__5_0 = (struct System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__o *)_9__5_0;
    sub_B52920(&v8->__9__5_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v3,
    (System_Action_T__o *)_9__5_0,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
}


bool __fastcall BattleModelObjectVisibleControlComponent__CheckTiming(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)&this->fields.visible;
  if ( !v3 )
    sub_B52A5C(this, timing);
  return *(_QWORD *)(v3 + 24) && LODWORD(this->fields.visibleChangeObjects) == timing;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__EndProc(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_o *v4; // x19
  System_Collections_Generic_IEnumerable_T__o *v5; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x20

  v4 = this;
  if ( (byte_42AC97E & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
    sub_B52984(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_B52984(&Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__);
    byte_42AC97E = 1;
  }
  v5 = *(System_Collections_Generic_IEnumerable_T__o **)&v4->fields.visible;
  if ( !v5 )
    sub_B52A5C(this, *(_QWORD *)&timing);
  if ( !v5[1].monitor || LODWORD(v4->fields.visibleChangeObjects) != timing )
    return 0;
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)v4,
    Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v5,
    (System_Action_T__o *)v6,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__ExecuteProc(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_o *v4; // x19
  System_Collections_Generic_IEnumerable_T__o *v5; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x20

  v4 = this;
  if ( (byte_42AC97D & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
    sub_B52984(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_B52984(&Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__);
    byte_42AC97D = 1;
  }
  v5 = *(System_Collections_Generic_IEnumerable_T__o **)&v4->fields.visible;
  if ( !v5 )
    sub_B52A5C(this, *(_QWORD *)&timing);
  if ( !v5[1].monitor || LODWORD(v4->fields.visibleChangeObjects) != timing )
    return 0;
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)v4,
    Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v5,
    (System_Action_T__o *)v6,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return 1;
}


bool __fastcall BattleModelObjectVisibleControlComponent__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *v6; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v7; // x21

  if ( (byte_42AC97F & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
    sub_B52984(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_B52984(&Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__);
    sub_B52984(&BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo);
    byte_42AC97F = 1;
  }
  v3 = (BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *)sub_B52A54(BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo);
  BattleModelObjectVisibleControlComponent___c__DisplayClass9_0___ctor(v3, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  v3->fields.isSkinned = 0;
  v6 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields.visible;
  v7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v6,
    (System_Action_T__o *)v7,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return v3->fields.isSkinned;
}


void __fastcall BattleModelObjectVisibleControlComponent___EndProc_b__8_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(
    x,
    LOBYTE(this[1].klass) == 0,
    0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent___ExecuteProc_b__7_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, (bool)this[1].klass, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AF524 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_B52984(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_42AF524 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.skinnedMeshList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skinnedMeshList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *skinnedMeshList; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20

  if ( (byte_42AF521 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
    sub_B52984(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF521 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    skinnedMeshList = this->fields.gameObject;
    if ( skinnedMeshList )
    {
      ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                            skinnedMeshList,
                                                                            (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL) )
        return;
      skinnedMeshList = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
      if ( skinnedMeshList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skinnedMeshList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)ComponentInChildren_Dropdown_DropdownItem,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
        return;
      }
    }
    sub_B52A5C(skinnedMeshList, v4);
  }
}


bool __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *v2; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *skinnedMeshList; // x8

  v2 = this;
  if ( (byte_42AF523 & 1) == 0 )
  {
    this = (BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *)sub_B52984(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    byte_42AF523 = 1;
  }
  skinnedMeshList = v2->fields.skinnedMeshList;
  if ( !skinnedMeshList )
    sub_B52A5C(this, method);
  return skinnedMeshList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AF522 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    byte_42AF522 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
          this,
          (const MethodInfo *)flg) )
  {
    gameObject = this->fields.gameObject;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, flg, 0LL);
      return;
    }
LABEL_14:
    sub_B52A5C(gameObject, v5);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
  if ( !gameObject )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B52A5C(0LL, v7);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v8.fields.current, flg, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF520 & 1) == 0 )
  {
    sub_B52984(&BattleModelObjectVisibleControlComponent___c_TypeInfo);
    byte_42AF520 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleModelObjectVisibleControlComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___ctor(
        BattleModelObjectVisibleControlComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___Awake_b__5_0(
        BattleModelObjectVisibleControlComponent___c_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(x, (const MethodInfo *)x);
}


void __fastcall BattleModelObjectVisibleControlComponent___c__DisplayClass9_0___ctor(
        BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent___c__DisplayClass9_0___IsSkinnedMesh_b__0(
        BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  _BOOL4 isSkinned; // w8

  if ( !x )
    sub_B52A5C(this, 0LL);
  isSkinned = this->fields.isSkinned;
  this->fields.isSkinned = isSkinned | BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
                                         x,
                                         (const MethodInfo *)x);
}