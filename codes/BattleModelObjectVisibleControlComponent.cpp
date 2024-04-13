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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_T__o *v17; // x19
  BattleModelObjectVisibleControlComponent___c_c *v18; // x0
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__5_0; // x20
  Il2CppObject *v21; // x21
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *v22; // x0

  if ( (byte_42E5071 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__, v11, v12, v13);
    sub_B5D5C4(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v14, v15, v16);
    byte_42E5071 = 1;
  }
  v17 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields.visible;
  v18 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  if ( (BYTE3(BattleModelObjectVisibleControlComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleModelObjectVisibleControlComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleModelObjectVisibleControlComponent___c_TypeInfo);
    v18 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__5_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__5_0,
      v21,
      Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
    v22 = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    v22->__9__5_0 = (struct System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__o *)_9__5_0;
    sub_B5D560(&v22->__9__5_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v17,
    (System_Action_T__o *)_9__5_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
}


bool __fastcall BattleModelObjectVisibleControlComponent__CheckTiming(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)&this->fields.visible;
  if ( !v3 )
    sub_B5D69C(this, timing);
  return *(_QWORD *)(v3 + 24) && LODWORD(this->fields.visibleChangeObjects) == timing;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__EndProc(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleModelObjectVisibleControlComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x20

  v5 = this;
  if ( (byte_42E5073 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__,
      timing,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v9,
      v10,
      v11);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_B5D5C4(
                                                           &Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
                                                           v12,
                                                           v13,
                                                           v14);
    byte_42E5073 = 1;
  }
  v15 = *(System_Collections_Generic_IEnumerable_T__o **)&v5->fields.visible;
  if ( !v15 )
    sub_B5D69C(this, *(_QWORD *)&timing);
  if ( !v15[1].monitor || LODWORD(v5->fields.visibleChangeObjects) != timing )
    return 0;
  v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v15,
    (System_Action_T__o *)v16,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__ExecuteProc(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleModelObjectVisibleControlComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x20

  v5 = this;
  if ( (byte_42E5072 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__,
      timing,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v9,
      v10,
      v11);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_B5D5C4(
                                                           &Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
                                                           v12,
                                                           v13,
                                                           v14);
    byte_42E5072 = 1;
  }
  v15 = *(System_Collections_Generic_IEnumerable_T__o **)&v5->fields.visible;
  if ( !v15 )
    sub_B5D69C(this, *(_QWORD *)&timing);
  if ( !v15[1].monitor || LODWORD(v5->fields.visibleChangeObjects) != timing )
    return 0;
  v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v15,
    (System_Action_T__o *)v16,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return 1;
}


bool __fastcall BattleModelObjectVisibleControlComponent__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_T__o *v20; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x21

  if ( (byte_42E5074 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo, v14, v15, v16);
    byte_42E5074 = 1;
  }
  v17 = (BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *)sub_B5D694(BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo);
  BattleModelObjectVisibleControlComponent___c__DisplayClass9_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  v17->fields.isSkinned = 0;
  v20 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields.visible;
  v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v21,
    (Il2CppObject *)v17,
    Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v20,
    (System_Action_T__o *)v21,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return v17->fields.isSkinned;
}


void __fastcall BattleModelObjectVisibleControlComponent___EndProc_b__8_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, (bool)this[1].klass, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7CC0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v5, v6, v7);
    byte_42E7CC0 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.skinnedMeshList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skinnedMeshList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *gameObject; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o *skinnedMeshList; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20

  if ( (byte_42E7CBD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E7CBD = 1;
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
                                                                            (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
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
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
        return;
      }
    }
    sub_B5D69C(skinnedMeshList, v12);
  }
}


bool __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *v4; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *skinnedMeshList; // x8

  v4 = this;
  if ( (byte_42E7CBF & 1) == 0 )
  {
    this = (BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *)sub_B5D5C4(
                                                                                          &Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__,
                                                                                          (_DWORD)method,
                                                                                          v2,
                                                                                          v3);
    byte_42E7CBF = 1;
  }
  skinnedMeshList = v4->fields.skinnedMeshList;
  if ( !skinnedMeshList )
    sub_B5D69C(this, method);
  return skinnedMeshList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7CBE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__,
      flg,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v12, v13, v14);
    byte_42E7CBE = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
    sub_B5D69C(gameObject, v15);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
  if ( !gameObject )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B5D69C(0LL, v17);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v18.fields.current, flg, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7CBC & 1) == 0 )
  {
    sub_B5D5C4(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v1, v2, v3);
    byte_42E7CBC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleModelObjectVisibleControlComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  isSkinned = this->fields.isSkinned;
  this->fields.isSkinned = isSkinned | BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
                                         x,
                                         (const MethodInfo *)x);
}