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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  BattleModelObjectVisibleControlComponent___c_c *v9; // x0
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__5_0; // x20
  Il2CppObject *v12; // x21
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *v13; // x0

  if ( (byte_421118F & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__,
      method);
    sub_B0D8A4(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo, v4);
    sub_B0D8A4(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v5);
    sub_B0D8A4(&Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__, v6);
    sub_B0D8A4(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v7);
    byte_421118F = 1;
  }
  v8 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields.visible;
  v9 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  if ( (BYTE3(BattleModelObjectVisibleControlComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleModelObjectVisibleControlComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleModelObjectVisibleControlComponent___c_TypeInfo);
    v9 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__5_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__5_0,
      v12,
      Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
    v13 = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    v13->__9__5_0 = (struct System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__o *)_9__5_0;
    sub_B0D840(&v13->__9__5_0, _9__5_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v8,
    (System_Action_T__o *)_9__5_0,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
}


bool __fastcall BattleModelObjectVisibleControlComponent__CheckTiming(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)&this->fields.visible;
  if ( !v3 )
    sub_B0D97C(this);
  return *(_QWORD *)(v3 + 24) && LODWORD(this->fields.visibleChangeObjects) == timing;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__EndProc(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x20

  v4 = this;
  if ( (byte_4211191 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__,
      *(_QWORD *)&timing);
    sub_B0D8A4(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo, v5);
    sub_B0D8A4(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v6);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_B0D8A4(
                                                           &Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
                                                           v7);
    byte_4211191 = 1;
  }
  v8 = *(System_Collections_Generic_IEnumerable_T__o **)&v4->fields.visible;
  if ( !v8 )
    sub_B0D97C(this);
  if ( !v8[1].monitor || LODWORD(v4->fields.visibleChangeObjects) != timing )
    return 0;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                                                              *(_QWORD *)&timing,
                                                                              method);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__ExecuteProc(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x20

  v4 = this;
  if ( (byte_4211190 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__,
      *(_QWORD *)&timing);
    sub_B0D8A4(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo, v5);
    sub_B0D8A4(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v6);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_B0D8A4(
                                                           &Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
                                                           v7);
    byte_4211190 = 1;
  }
  v8 = *(System_Collections_Generic_IEnumerable_T__o **)&v4->fields.visible;
  if ( !v8 )
    sub_B0D97C(this);
  if ( !v8[1].monitor || LODWORD(v4->fields.visibleChangeObjects) != timing )
    return 0;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                                                              *(_QWORD *)&timing,
                                                                              method);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return 1;
}


bool __fastcall BattleModelObjectVisibleControlComponent__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x21

  if ( (byte_4211192 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__,
      method);
    sub_B0D8A4(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo, v4);
    sub_B0D8A4(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v5);
    sub_B0D8A4(&Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__, v6);
    sub_B0D8A4(&BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo, v7);
    byte_4211192 = 1;
  }
  v8 = (BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *)sub_B0D974(
                                                                            BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo,
                                                                            method,
                                                                            v2);
  BattleModelObjectVisibleControlComponent___c__DisplayClass9_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  v8->fields.isSkinned = 0;
  v12 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields.visible;
  v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                                                               v10,
                                                                               v11);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v12,
    (System_Action_T__o *)v13,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return v8->fields.isSkinned;
}


void __fastcall BattleModelObjectVisibleControlComponent___EndProc_b__8_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, (bool)this[1].klass, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4213BEB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v4);
    byte_4213BEB = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.skinnedMeshList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skinnedMeshList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *skinnedMeshList; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20

  if ( (byte_4213BE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4213BE8 = 1;
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
                                                                            (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
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
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
        return;
      }
    }
    sub_B0D97C(skinnedMeshList);
  }
}


bool __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *v2; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *skinnedMeshList; // x8

  v2 = this;
  if ( (byte_4213BEA & 1) == 0 )
  {
    this = (BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *)sub_B0D8A4(
                                                                                          &Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__,
                                                                                          method);
    byte_4213BEA = 1;
  }
  skinnedMeshList = v2->fields.skinnedMeshList;
  if ( !skinnedMeshList )
    sub_B0D97C(this);
  return skinnedMeshList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4213BE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, flg);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v7);
    byte_4213BE9 = 1;
  }
  memset(&v9, 0, sizeof(v9));
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
    sub_B0D97C(gameObject);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
  if ( !gameObject )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gameObject,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B0D97C(0LL);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v9.fields.current, flg, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213BE7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v1);
    byte_4213BE7 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleModelObjectVisibleControlComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  isSkinned = this->fields.isSkinned;
  this->fields.isSkinned = isSkinned | BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
                                         x,
                                         (const MethodInfo *)x);
}