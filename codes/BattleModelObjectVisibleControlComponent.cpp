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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleModelObjectVisibleControlComponent___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  System_Action_object__o *_9__5_0; // x20
  Il2CppObject *v10; // x21
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FB871 & 1) == 0 )
  {
    sub_1B640C8(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      method);
    sub_1B640C8(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v4);
    sub_1B640C8(&Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__, v5);
    sub_1B640C8(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v6);
    byte_49FB871 = 1;
  }
  v7 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  if ( !BattleModelObjectVisibleControlComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleModelObjectVisibleControlComponent___c_TypeInfo);
    v7 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  }
  _9__5_0 = (System_Action_object__o *)v7->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__5_0 = (System_Action_object__o *)sub_1B64314(
                                           System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                           method,
                                           v2);
    System_Action_object____ctor(_9__5_0, v10, Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__, 0LL);
    static_fields = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__o *)_9__5_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)_9__5_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
}


bool __fastcall BattleModelObjectVisibleControlComponent__CheckTiming(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_array *visibleChangeObjects; // x8

  visibleChangeObjects = this->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    sub_1B64324(this);
  return *(_QWORD *)&visibleChangeObjects->max_length && this->fields.executeTiming == timing;
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
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x21
  System_Action_object__o *v8; // x20

  v4 = this;
  if ( (byte_49FB873 & 1) == 0 )
  {
    sub_1B640C8(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      *(_QWORD *)&timing);
    sub_1B640C8(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v5);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_1B640C8(
                                                           &Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
                                                           v6);
    byte_49FB873 = 1;
  }
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)v4->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    sub_1B64324(this);
  if ( !visibleChangeObjects[1].monitor || v4->fields.executeTiming != timing )
    return 0;
  v8 = (System_Action_object__o *)sub_1B64314(
                                    System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                    *(_QWORD *)&timing,
                                    method);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)v4,
    Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
    0LL);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v8,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
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
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x21
  System_Action_object__o *v8; // x20

  v4 = this;
  if ( (byte_49FB872 & 1) == 0 )
  {
    sub_1B640C8(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      *(_QWORD *)&timing);
    sub_1B640C8(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v5);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_1B640C8(
                                                           &Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
                                                           v6);
    byte_49FB872 = 1;
  }
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)v4->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    sub_1B64324(this);
  if ( !visibleChangeObjects[1].monitor || v4->fields.executeTiming != timing )
    return 0;
  v8 = (System_Action_object__o *)sub_1B64314(
                                    System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                    *(_QWORD *)&timing,
                                    method);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)v4,
    Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
    0LL);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v8,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
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
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  System_Action_object__o *v12; // x21

  if ( (byte_49FB874 & 1) == 0 )
  {
    sub_1B640C8(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      method);
    sub_1B640C8(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v4);
    sub_1B640C8(&Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__, v5);
    sub_1B640C8(&BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo, v6);
    byte_49FB874 = 1;
  }
  v7 = sub_1B64314(BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_BYTE *)(v7 + 16) = 0;
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  v12 = (System_Action_object__o *)sub_1B64314(
                                     System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
                                     v9,
                                     v10);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v12,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return *(_BYTE *)(v7 + 16);
}


void __fastcall BattleModelObjectVisibleControlComponent___EndProc_b__8_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, !this->fields.visible, method);
}


void __fastcall BattleModelObjectVisibleControlComponent___ExecuteProc_b__7_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, this->fields.visible, method);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB878 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v4);
    byte_49FB878 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.skinnedMeshList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skinnedMeshList, (int32_t)v5, v6, v7);
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
  Il2CppObject *ComponentInChildren_object; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 klass_low; // x10
  __int64 v13; // x8

  if ( (byte_49FB875 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FB875 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    skinnedMeshList = this->fields.gameObject;
    if ( skinnedMeshList )
    {
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     skinnedMeshList,
                                     (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL) )
        return;
      skinnedMeshList = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
      if ( skinnedMeshList )
      {
        v10 = *(_QWORD *)&skinnedMeshList->fields.m_CachedPtr;
        v11 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++HIDWORD(skinnedMeshList[1].klass);
        if ( v10 )
        {
          klass_low = SLODWORD(skinnedMeshList[1].klass);
          if ( (unsigned int)klass_low >= *(_DWORD *)(v10 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)skinnedMeshList,
              ComponentInChildren_object,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          }
          else
          {
            v13 = v10 + 8 * klass_low;
            LODWORD(skinnedMeshList[1].klass) = klass_low + 1;
            *(_QWORD *)(v13 + 32) = ComponentInChildren_object;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)ComponentInChildren_object, v8, v9);
          }
          return;
        }
      }
    }
    sub_1B64324(skinnedMeshList);
  }
}


bool __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *v2; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *skinnedMeshList; // x8

  v2 = this;
  if ( (byte_49FB877 & 1) == 0 )
  {
    this = (BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *)sub_1B640C8(
                                                                                          &Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__,
                                                                                          method);
    byte_49FB877 = 1;
  }
  skinnedMeshList = v2->fields.skinnedMeshList;
  if ( !skinnedMeshList )
    sub_1B64324(this);
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FB876 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, flg);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v7);
    byte_49FB876 = 1;
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
    sub_1B64324(gameObject);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
  if ( !gameObject )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B64324(0LL);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v9.fields._current, flg, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB879 & 1) == 0 )
  {
    sub_1B640C8(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v1);
    byte_49FB879 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleModelObjectVisibleControlComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields->__9 = (struct BattleModelObjectVisibleControlComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  isSkinned = this->fields.isSkinned;
  this->fields.isSkinned = isSkinned | BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
                                         x,
                                         (const MethodInfo *)x);
}