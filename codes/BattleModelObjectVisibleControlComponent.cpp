void __fastcall BattleModelObjectVisibleControlComponent___ctor(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  this->fields.executeTiming = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent__Awake(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleModelObjectVisibleControlComponent___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  System_Action_object__o *_9__5_0; // x20
  Il2CppObject *v14; // x21
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B15613 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      method,
      v2);
    sub_1BCA7E0(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v5,
      v6);
    sub_1BCA7E0(&Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__, v7, v8);
    sub_1BCA7E0(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v9, v10);
    byte_4B15613 = 1;
  }
  v11 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  if ( !BattleModelObjectVisibleControlComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleModelObjectVisibleControlComponent___c_TypeInfo, method);
    v11 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  }
  _9__5_0 = (System_Action_object__o *)v11->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__5_0 = (System_Action_object__o *)sub_1BCAA2C(
                                           System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                           method,
                                           v2,
                                           v3);
    System_Action_object____ctor(_9__5_0, v14, Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__, 0LL);
    static_fields = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__o *)_9__5_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v16, v17, v18, v19, v20, v21);
  }
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)_9__5_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__CheckTiming(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_array *visibleChangeObjects; // x8

  visibleChangeObjects = this->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    sub_1BCAA3C(this, *(_QWORD *)&timing);
  return *(_QWORD *)&visibleChangeObjects->max_length && this->fields.executeTiming == timing;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__EndProc(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleModelObjectVisibleControlComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x21
  System_Action_object__o *v11; // x20

  v5 = this;
  if ( (byte_4B15615 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      *(_QWORD *)&timing,
      method);
    sub_1BCA7E0(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v6,
      v7);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_1BCA7E0(
                                                           &Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
                                                           v8,
                                                           v9);
    byte_4B15615 = 1;
  }
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    sub_1BCAA3C(this, *(_QWORD *)&timing);
  if ( !visibleChangeObjects[1].monitor || v5->fields.executeTiming != timing )
    return 0;
  v11 = (System_Action_object__o *)sub_1BCAA2C(
                                     System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                     *(_QWORD *)&timing,
                                     method,
                                     v3);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
    0LL);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v11,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x21
  System_Action_object__o *v11; // x20

  v5 = this;
  if ( (byte_4B15614 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      *(_QWORD *)&timing,
      method);
    sub_1BCA7E0(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v6,
      v7);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_1BCA7E0(
                                                           &Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
                                                           v8,
                                                           v9);
    byte_4B15614 = 1;
  }
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)v5->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    sub_1BCAA3C(this, *(_QWORD *)&timing);
  if ( !visibleChangeObjects[1].monitor || v5->fields.executeTiming != timing )
    return 0;
  v11 = (System_Action_object__o *)sub_1BCAA2C(
                                     System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                     *(_QWORD *)&timing,
                                     method,
                                     v3);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
    0LL);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v11,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return 1;
}


bool __fastcall BattleModelObjectVisibleControlComponent__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  System_Action_object__o *v17; // x21

  if ( (byte_4B15616 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      method,
      v2);
    sub_1BCA7E0(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v5,
      v6);
    sub_1BCA7E0(&Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__, v7, v8);
    sub_1BCA7E0(&BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo, v9, v10);
    byte_4B15616 = 1;
  }
  v11 = sub_1BCAA2C(BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  *(_BYTE *)(v11 + 16) = 0;
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  v17 = (System_Action_object__o *)sub_1BCAA2C(
                                     System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                     v13,
                                     v14,
                                     v15);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v17,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return *(_BYTE *)(v11 + 16);
}


void __fastcall BattleModelObjectVisibleControlComponent___EndProc_b__8_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, !this->fields.visible, method);
}


void __fastcall BattleModelObjectVisibleControlComponent___ExecuteProc_b__7_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, this->fields.visible, method);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1561A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v5, v6);
    byte_4B1561A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.skinnedMeshList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skinnedMeshList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *skinnedMeshList; // x0
  __int64 v11; // x1
  Il2CppObject *ComponentInChildren_object; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 klass_low; // x10
  __int64 v22; // x8

  if ( (byte_4B15617 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B15617 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    skinnedMeshList = this->fields.gameObject;
    if ( skinnedMeshList )
    {
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     skinnedMeshList,
                                     (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL) )
        return;
      skinnedMeshList = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
      if ( skinnedMeshList )
      {
        v19 = *(_QWORD *)&skinnedMeshList->fields.m_CachedPtr;
        v20 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++HIDWORD(skinnedMeshList[1].klass);
        if ( v19 )
        {
          klass_low = SLODWORD(skinnedMeshList[1].klass);
          if ( (unsigned int)klass_low >= *(_DWORD *)(v19 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)skinnedMeshList,
              ComponentInChildren_object,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = v19 + 8 * klass_low;
            LODWORD(skinnedMeshList[1].klass) = klass_low + 1;
            *(_QWORD *)(v22 + 32) = ComponentInChildren_object;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)(v22 + 32),
              (int64_t)ComponentInChildren_object,
              v13,
              v14,
              v15,
              v16,
              v17,
              v18);
          }
          return;
        }
      }
    }
    sub_1BCAA3C(skinnedMeshList, v9);
  }
}


bool __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *v3; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *skinnedMeshList; // x8

  v3 = this;
  if ( (byte_4B15619 & 1) == 0 )
  {
    this = (BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *)sub_1BCA7E0(
                                                                                          &Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__,
                                                                                          method,
                                                                                          v2);
    byte_4B15619 = 1;
  }
  skinnedMeshList = v3->fields.skinnedMeshList;
  if ( !skinnedMeshList )
    sub_1BCAA3C(this, method);
  return skinnedMeshList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B15618 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, flg, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v9, v10);
    byte_4B15618 = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
    sub_1BCAA3C(gameObject, v11);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
  if ( !gameObject )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1BCAA3C(0LL, v13);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v14.fields._current, flg, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1561B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v1, v2);
    byte_4B1561B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleModelObjectVisibleControlComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields->__9 = (struct BattleModelObjectVisibleControlComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  bool isSkinned; // w20

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  isSkinned = this->fields.isSkinned;
  this->fields.isSkinned = isSkinned | BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
                                         x,
                                         (const MethodInfo *)x);
}