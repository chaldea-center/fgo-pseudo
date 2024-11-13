void __fastcall BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12846 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12846 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__CheckAssert(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonConfirmDialog__Close(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BonusSelectSummonConfirmDialog__Close_33602724(this, 0LL, v2);
}


void __fastcall BonusSelectSummonConfirmDialog__Close_33602724(
        BonusSelectSummonConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x20

  if ( (byte_4B1283A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    byte_4B1283A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v18);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 1, 0LL);
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v22, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__CreateList(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  GachaBonusSelectMaster_o *Master_object; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  GachaBonusSelectEntity_array *v24; // x23
  signed int max_length; // w8
  unsigned int v26; // w24
  GachaBonusSelectEntity_o *v27; // x21
  int32_t slot; // w22
  BonusSelectSummonPartyOrganizationListViewItem_o *v29; // x20
  const MethodInfo *v30; // x4
  Il2CppObject *prefab; // x21
  __int64 v32; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v38; // x22
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v50; // x8
  GachaBonusSelectEntity_array *entityArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1283C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog_OnClick__, method, v2);
    sub_1BCA7E0(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__,
      v12,
      v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo, v18, v19);
    byte_4B1283C = 1;
  }
  entityArray = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (GachaBonusSelectMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Master_object = (GachaBonusSelectMaster_o *)GachaBonusSelectMaster__TryGetEntityArray(
                                                Master_object,
                                                &entityArray,
                                                this->fields.gachaId,
                                                0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v24 = entityArray;
    if ( !entityArray )
      goto LABEL_24;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= max_length )
          sub_1BCAA44(Master_object, v21);
        v27 = v24->m_Items[v26];
        if ( !v27 )
          break;
        slot = v27->fields.slot;
        v29 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                                    BonusSelectSummonPartyOrganizationListViewItem_TypeInfo,
                                                                    v21,
                                                                    v22,
                                                                    v23);
        BonusSelectSummonPartyOrganizationListViewItem___ctor(v29, slot, 0LL, v27, v30);
        Master_object = (GachaBonusSelectMaster_o *)this->fields.rootObj;
        if ( !Master_object )
          break;
        prefab = (Il2CppObject *)this->fields.prefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
        Master_object = (GachaBonusSelectMaster_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                      prefab,
                                                      transform,
                                                      (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        if ( !Master_object )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v38 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_1BCAA2C(
                                                                          BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo,
                                                                          v35,
                                                                          v36,
                                                                          v37);
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
          v38,
          (Il2CppObject *)this,
          (intptr_t)Method_BonusSelectSummonConfirmDialog_OnClick__,
          v39);
        if ( !Component_object )
          break;
        BonusSelectSummonPartyOrganizationListViewObject__Init(
          (BonusSelectSummonPartyOrganizationListViewObject_o *)Component_object,
          v29,
          v38,
          v40);
        Master_object = (GachaBonusSelectMaster_o *)this->fields.itemList;
        if ( !Master_object )
          break;
        v47 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v48 = Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v47 )
          break;
        MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v47 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            Component_object,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = v47 + 8 * MasterName_k__BackingField_low;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_QWORD *)(v50 + 32) = Component_object;
          sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 32), (int64_t)Component_object, v41, v42, v43, v44, v45, v46);
        }
        max_length = v24->max_length;
        if ( (int)++v26 >= max_length )
          return;
      }
LABEL_24:
      sub_1BCAA3C(Master_object, v21);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog__EndClose(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v24; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1283B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v8,
      v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1283B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v26.fields._current )
      sub_1BCAA3C(0LL, v14);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v26.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v24 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v17, v18, v19, v20, v21, v22);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v24->fields.m_target)(
      v24->fields.original_method_info,
      *(_QWORD *)&v24->fields.extra_arg);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__EndOpen(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog__EndShowServantStatusDialog(
        BonusSelectSummonConfirmDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v3; // x19
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x8
  const MethodInfo *v5; // x1

  v3 = this;
  if ( (byte_4B1283E & 1) == 0 )
  {
    this = (BonusSelectSummonConfirmDialog_o *)sub_1BCA7E0(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 isDecide,
                                                 method);
    byte_4B1283E = 1;
  }
  enableBtn = v3->fields.enableBtn;
  if ( !enableBtn
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))enableBtn->fields.m_target)(
          enableBtn->fields.original_method_info,
          1LL,
          *(_QWORD *)&enableBtn->fields.extra_arg),
        BonusSelectSummonConfirmDialog__SetBackBtn(v3, v5),
        (this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(this, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)this, 0LL, 0LL);
}


SelectBonusData_o *__fastcall BonusSelectSummonConfirmDialog__GetSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _DWORD *v26; // x28
  _DWORD *v27; // x29
  _BOOL8 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  Il2CppClass *klass; // x8
  _DWORD *fields; // x9
  int v34; // w22
  int v35; // w23
  _DWORD *events; // x8
  int v37; // w24
  int v38; // w19
  int64_t v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x21
  System_Object_array *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  BonusSelectSummonConfirmDialog_o *v64; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12842 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonus__Add__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonus__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonus___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SelectBonus__TypeInfo, v17, v18);
    sub_1BCA7E0(&SelectBonusData_TypeInfo, v19, v20);
    sub_1BCA7E0(&SelectBonus_TypeInfo, v21, v22);
    byte_4B12842 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SelectBonus__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  v64 = this;
  if ( !itemList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v26 = 0LL;
  v27 = 0LL;
  v66 = v65;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    if ( !v28 )
      break;
    if ( !v66.fields._current )
      sub_1BCAA3C(v28, v29);
    klass = v66.fields._current[8].klass;
    if ( !klass )
      sub_1BCAA3C(v28, v29);
    fields = klass->_1.fields;
    if ( fields )
      v27 = klass->_1.fields;
    if ( fields )
    {
      if ( !v27 )
        sub_1BCAA3C(v28, v29);
      v34 = v27[5];
      v35 = fields[6];
    }
    else
    {
      v34 = -1;
      v35 = -1;
    }
    events = klass->_1.events;
    if ( events )
      v26 = events;
    if ( events )
    {
      if ( !v26 )
        sub_1BCAA3C(v28, v29);
      v37 = v26[5];
      v38 = events[6];
    }
    else
    {
      v37 = -1;
      v38 = -1;
    }
    v39 = sub_1BCAA2C(SelectBonus_TypeInfo, v29, v30, v31);
    System_Object___ctor((Il2CppObject *)v39, 0LL);
    *(_DWORD *)(v39 + 16) = v34;
    *(_DWORD *)(v39 + 20) = v35;
    *(_DWORD *)(v39 + 24) = v37;
    *(_DWORD *)(v39 + 28) = v38;
    if ( !v23 )
      sub_1BCAA3C(v40, v41);
    items = v23->fields._items;
    v49 = Method_System_Collections_Generic_List_SelectBonus__Add__;
    ++v23->fields._version;
    if ( !items )
      sub_1BCAA3C(v40, v41);
    size = v23->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        (Il2CppObject *)v39,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      v23->fields._size = size + 1;
      v51[4] = (Il2CppClass *)v39;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), v39, v42, v43, v44, v45, v46, v47);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v55 = sub_1BCAA2C(SelectBonusData_TypeInfo, v52, v53, v54);
  System_Object___ctor((Il2CppObject *)v55, 0LL);
  if ( !v55 || (*(_DWORD *)(v55 + 16) = v64->fields.gachaId, !v23) )
LABEL_34:
    sub_1BCAA3C(itemList, v24);
  v56 = System_Collections_Generic_List_object___ToArray(
          v23,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v55 + 24) = v56;
  sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 24), (int64_t)v56, v57, v58, v59, v60, v61, v62);
  return (SelectBonusData_o *)v55;
}


void __fastcall BonusSelectSummonConfirmDialog__Init(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *prefab; // x22
  UnityEngine_GameObject_o *titleLabel; // x0
  const MethodInfo *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UnityEngine_GameObject_o *OrganizationListViewItemPrefab_k__BackingField; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o **p_servantSelectMenu; // x21
  UnityEngine_Object_o *servantSelectMenu; // x22
  Il2CppObject *ServantSelectMenuPrefab_k__BackingField; // x20
  __int64 v28; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_object__o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B12838 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___,
      assetManager,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__,
      v5,
      v6);
    sub_1BCA7E0(&System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B12838 = 1;
  }
  prefab = (UnityEngine_Object_o *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, assetManager);
  titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(prefab, 0LL, 0LL);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    if ( !assetManager )
      goto LABEL_25;
    OrganizationListViewItemPrefab_k__BackingField = assetManager->fields._OrganizationListViewItemPrefab_k__BackingField;
    this->fields.prefab = OrganizationListViewItemPrefab_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.prefab,
      (int64_t)OrganizationListViewItemPrefab_k__BackingField,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(servantSelectMenu, 0LL, 0LL);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    if ( !assetManager )
      goto LABEL_25;
    ServantSelectMenuPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._ServantSelectMenuPrefab_k__BackingField;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49903816(
                                               ServantSelectMenuPrefab_k__BackingField,
                                               transform,
                                               (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    if ( !titleLabel )
LABEL_25:
      sub_1BCAA3C(titleLabel, v17);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         titleLabel,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (struct BonusSelectSummonPartyServantSelectMenu_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.servantSelectMenu,
      (int64_t)Component_object,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  titleLabel = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_25;
  BonusSelectSummonPartyServantSelectMenu__Init((BonusSelectSummonPartyServantSelectMenu_o *)titleLabel, v17);
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.messageBg;
  if ( !titleLabel )
    goto LABEL_25;
  UISprite__set_spriteName((UISprite_o *)titleLabel, 0LL, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.buttonDecideLabel;
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.buttonCancelLabel;
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.buttonDecide;
  this->fields.isButtonEnable = 0;
  if ( !titleLabel )
    goto LABEL_25;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))titleLabel->klass[1]._1.namespaze)(
    titleLabel,
    0LL,
    titleLabel->klass[1]._1.byval_arg.data);
  titleLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__Modify(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  BonusSelectSummonConfirmDialog___c_c *v23; // x0
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *v25; // x21
  System_Func_object__bool__o *_9__29_0; // x22
  Il2CppObject *v27; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1283F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v12,
      v13);
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, v14, v15);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog___c_TypeInfo, v16, v17);
    byte_4B1283F = 1;
  }
  memset(&v36, 0, sizeof(v36));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v36.fields._current )
      sub_1BCAA3C(0LL, v19);
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v36.fields._current,
      v19);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v23 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  buttonDecide = this->fields.buttonDecide;
  v25 = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo, v20);
    v23 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  _9__29_0 = (System_Func_object__bool__o *)v23->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, v20);
      v23 = BonusSelectSummonConfirmDialog___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v23->static_fields->__9;
    _9__29_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo,
                                                v20,
                                                v21,
                                                v22);
    System_Func_object__bool____ctor(_9__29_0, v27, Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, 0LL);
    static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__29_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
      (int64_t)_9__29_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)BasicHelper__Any_object_(v25, (System_Func_T__bool__o *)_9__29_0, (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_17:
    sub_1BCAA3C(itemList, method);
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    ((unsigned __int8)itemList & 1) == 0,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  BonusSelectSummonConfirmDialog__SaveSelectBonusData(this, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog__OnClick(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x8
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  struct ServantEntity_o *servantEntity; // x8
  CommonUI_o *v41; // x20
  __int64 v42; // x21
  __int64 v43; // x22
  int32_t v44; // w22
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  ServantLeaderInfo_o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  ServantStatusDialog_EndDelegate_o *v52; // x22
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *v53; // x8
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_List_int__o *v59; // x21
  _BOOL8 v60; // x0
  __int64 v61; // x1
  Il2CppClass *klass; // x8
  Il2CppClass *v63; // x8
  const char *namespaze; // x22
  const char *name; // x23
  __int64 v66; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  BonusSelectSummonPartyServantSelectMenu_o *servantSelectMenu; // x22
  System_Int32_array *v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Action_o *v75; // x23
  const MethodInfo *v76; // x4
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  v6 = this;
  if ( (byte_4B1283D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, memberItem, isLongTap);
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__, v7, v8);
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog_OnClick__, v9, v10);
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, v11, v12);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v17,
      v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v19,
      v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v21, v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v23,
      v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
    sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, v33, v34);
    this = (BonusSelectSummonConfirmDialog_o *)sub_1BCA7E0(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 v35,
                                                 v36);
    byte_4B1283D = 1;
  }
  memset(&v78, 0, sizeof(v78));
  if ( isLongTap )
  {
    if ( !memberItem )
      goto LABEL_42;
    if ( memberItem->fields.servantEntity )
    {
      enableBtn = v6->fields.enableBtn;
      if ( enableBtn )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, const MethodInfo *))enableBtn->fields.m_target)(
          enableBtn->fields.original_method_info,
          0LL,
          *(_QWORD *)&enableBtn->fields.extra_arg,
          method);
        v38 = Method_BonusSelectSummonConfirmDialog_OnClick__;
        if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 83) & 2) != 0 )
          v38 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v39 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v38, v38[4]);
        OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
        this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantEntity = memberItem->fields.servantEntity;
        if ( servantEntity )
        {
          v41 = (CommonUI_o *)this;
          v43 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
          v42 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, memberItem);
          *(_QWORD *)&v79.fields.currentCryptoKey = v43;
          *(_QWORD *)&v79.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v79, 0LL);
          v48 = (ServantLeaderInfo_o *)sub_1BCAA2C(ServantLeaderInfo_TypeInfo, v45, v46, v47);
          ServantLeaderInfo___ctor_41224104(v48, v44, 0, 1, 0LL);
          v52 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
          ServantStatusDialog_EndDelegate___ctor(
            v52,
            (Il2CppObject *)v6,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0LL);
          if ( v41 )
          {
            CommonUI__OpenServantStatusDialog_30778732(v41, 7, v48, v52, 0LL);
            return;
          }
        }
      }
LABEL_42:
      sub_1BCAA3C(this, memberItem);
    }
  }
  else
  {
    v53 = v6->fields.enableBtn;
    if ( !v53 )
      goto LABEL_42;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, const MethodInfo *))v53->fields.m_target)(
      v53->fields.original_method_info,
      0LL,
      *(_QWORD *)&v53->fields.extra_arg,
      method);
    v54 = Method_BonusSelectSummonConfirmDialog_OnClick__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 83) & 2) != 0 )
      v54 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v55 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v54, v54[4]);
    OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
    v59 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v56,
                                                      v57,
                                                      v58);
    System_Collections_Generic_List_int____ctor(
      v59,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.itemList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v78 = v77;
    while ( 1 )
    {
      v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v78,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
      if ( !v60 )
        break;
      if ( !v78.fields._current )
        sub_1BCAA3C(v60, v61);
      klass = v78.fields._current[8].klass;
      if ( !klass )
        sub_1BCAA3C(v60, v61);
      v63 = klass->_1.klass;
      if ( v63 )
      {
        name = v63->_1.name;
        namespaze = v63->_1.namespaze;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61);
        *(_QWORD *)&v80.fields.currentCryptoKey = name;
        *(_QWORD *)&v80.fields.fakeValue = namespaze;
        v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v80, 0LL);
        if ( !v59 )
          sub_1BCAA3C(v66, (unsigned int)v66);
        items = v59->fields._items;
        v68 = Method_System_Collections_Generic_List_int__Add__;
        ++v59->fields._version;
        if ( !items )
          sub_1BCAA3C(v66, (unsigned int)v66);
        size = v59->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v59,
            v66,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v59->fields._size = size + 1;
          items->m_Items[size + 1] = v66;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v78,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.baseWindow;
    if ( !this )
      goto LABEL_42;
    this = (BonusSelectSummonConfirmDialog_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_42;
    this = (BonusSelectSummonConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( !v59 )
      goto LABEL_42;
    servantSelectMenu = v6->fields.servantSelectMenu;
    v71 = System_Collections_Generic_List_int___ToArray(
            v59,
            (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    v75 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v72, v73, v74);
    System_Action___ctor(v75, (Il2CppObject *)v6, Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, 0LL);
    if ( !servantSelectMenu )
      goto LABEL_42;
    BonusSelectSummonPartyServantSelectMenu__Open(servantSelectMenu, memberItem, v71, v75, v76);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__OnClickCancel(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B12844 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__, method, v2);
    byte_4B12844 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    BonusSelectSummonConfirmDialog__Close_33602724(this, 0LL, v6);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__OnClickDecide(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  _BOOL4 isButtonEnable; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B12843 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__, method, v2);
    byte_4B12843 = 1;
  }
  v4 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  isButtonEnable = this->fields.isButtonEnable;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    BonusSelectSummonConfirmDialog__Close_33602724(this, 0LL, v7);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog__Open(
        BonusSelectSummonConfirmDialog_o *this,
        int32_t gachaId,
        BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn,
        BonusSelectSummonConfirmDialog_ClickDelegate_o *func,
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x20
  System_String_o *v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *buttonDecideLabel; // x21
  UILabel_o *buttonCancelLabel; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Action_o *v70; // x19
  __int64 v71; // x1

  if ( (byte_4B12839 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&gachaId, enableBtn);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__, v17, v18);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_12481/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3078/*"BONUS_SELECT_SERVANT_SELECT_DECIDE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12483/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, v27, v28);
    byte_4B12839 = 1;
  }
  v29 = sub_1BCAA2C(BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&gachaId, enableBtn, func);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_13;
  *(_QWORD *)(v29 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)this, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v29 + 24) = endOpenCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 24), (int64_t)endOpenCallback, v38, v39, v40, v41, v42, v43);
  this->fields.clickFunc = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v44, v45, v46, v47, v48, v49);
  this->fields.enableBtn = enableBtn;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enableBtn, (int64_t)enableBtn, v50, v51, v52, v53, v54, v55);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tryGetBonusSelectData,
    (int64_t)tryGetBonusSelectData,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.gachaId = gachaId;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, v30, 0LL);
  messageLabel = this->fields.messageLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12481/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v30, 0LL),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3078/*"BONUS_SELECT_SERVANT_SELECT_DECIDE"*/, 0LL),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, v30, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !buttonCancelLabel) )
  {
LABEL_13:
    sub_1BCAA3C(v30, v31);
  }
  UILabel__set_text(buttonCancelLabel, v30, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v67, v68, v69);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v29,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71);
  AtlasManager__LoadPartyOrganizationAtlas(v70, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SaveSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x21
  const MethodInfo *v36; // x1
  int64_t SelectBonusData; // x0
  Il2CppObject *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject **v45; // x19
  __int64 v46; // x1
  SummonControl_c *v47; // x0
  Il2CppObject *String_70112520; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Func_object__bool__o *v57; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int32_t v64; // w21
  Il2CppObject *v65; // x2
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  __int64 v70; // x1
  System_Object_array *v71; // x19
  System_String_o *Empty; // x19
  SummonControl_c *v73; // x0

  if ( (byte_4B12841 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_SelectBonusData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_SelectBonusData___, v5, v6);
    sub_1BCA7E0(&System_Func_SelectBonusData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_SelectBonusData___, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v25, v26);
    sub_1BCA7E0(&string_TypeInfo, v27, v28);
    sub_1BCA7E0(&SummonControl_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__, v31, v32);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, v33, v34);
    byte_4B12841 = 1;
  }
  v35 = sub_1BCAA2C(BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  SelectBonusData = (int64_t)BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v36);
  if ( !v35 )
    goto LABEL_33;
  *(_QWORD *)(v35 + 16) = SelectBonusData;
  v45 = (Il2CppObject **)(v35 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), SelectBonusData, v39, v40, v41, v42, v43, v44);
  v47 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, v46);
    v47 = SummonControl_TypeInfo;
  }
  String_70112520 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(
                                      v47->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SelectBonusData__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_70112520, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v53);
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                                 String_70112520,
                                                                 (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v52 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v56,
                                                         (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v57 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SelectBonusData__bool__TypeInfo, v53, v54, v55);
  System_Func_object__bool____ctor(
    v57,
    (Il2CppObject *)v35,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__,
    0LL);
  SelectBonusData = BasicHelper__Any_object_(
                      (System_Collections_Generic_List_T__o *)v52,
                      (System_Func_T__bool__o *)v57,
                      (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_SelectBonusData___);
  if ( (SelectBonusData & 1) != 0 )
  {
    if ( !v52 )
      goto LABEL_33;
    if ( v52->fields._size >= 1 )
    {
      v64 = 0;
      while ( 1 )
      {
        SelectBonusData = (int64_t)System_Collections_Generic_List_object___get_Item(
                                     v52,
                                     v64,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SelectBonusData__get_Item__);
        if ( !SelectBonusData )
          break;
        v65 = *v45;
        if ( !*v45 )
          break;
        if ( *(_DWORD *)(SelectBonusData + 16) == LODWORD(v65[1].klass) )
          System_Collections_Generic_List_object___set_Item(
            v52,
            v64,
            v65,
            (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        if ( ++v64 >= v52->fields._size )
          goto LABEL_25;
      }
LABEL_33:
      sub_1BCAA3C(SelectBonusData, v38);
    }
  }
  else
  {
    if ( !v52 )
      goto LABEL_33;
    v38 = *v45;
    items = v52->fields._items;
    v67 = Method_System_Collections_Generic_List_SelectBonusData__Add__;
    ++v52->fields._version;
    if ( !items )
      goto LABEL_33;
    size = v52->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v52,
        v38,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &items->obj.klass + size;
      v52->fields._size = size + 1;
      v69[4] = (Il2CppClass *)v38;
      sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v38, v58, v59, v60, v61, v62, v63);
    }
  }
LABEL_25:
  if ( v52->fields._size <= 0 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  else
  {
    v71 = System_Collections_Generic_List_object___ToArray(
            v52,
            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v70);
    Empty = JsonManager__toJson(&v71->obj, 0, 0, 0LL);
  }
  v73 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, v38);
    v73 = SummonControl_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v73->static_fields->BONUS_SELECTSUMMON_SAVEKEY, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetBackBtn(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B12845 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B12845 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetLoadSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BonusSelectSummonConfirmDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData; // x8
  __int64 v11; // x21
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  __int64 v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  BonusSelectSummonPartyOrganizationListViewItem_o *klass; // x8
  struct GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x9
  int32_t slot; // w2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF
  __int64 v23; // [xsp+38h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4B12840 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v6,
      v7);
    this = (BonusSelectSummonConfirmDialog_o *)sub_1BCA7E0(
                                                 &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
                                                 v8,
                                                 v9);
    byte_4B12840 = 1;
  }
  v23 = 0LL;
  memset(&v22, 0, sizeof(v22));
  tryGetBonusSelectData = v3->fields.tryGetBonusSelectData;
  if ( !tryGetBonusSelectData )
    goto LABEL_28;
  this = (BonusSelectSummonConfirmDialog_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64 *, _QWORD, _QWORD))tryGetBonusSelectData->fields.m_target)(
                                               tryGetBonusSelectData->fields.original_method_info,
                                               &v23,
                                               (unsigned int)v3->fields.gachaId,
                                               *(_QWORD *)&tryGetBonusSelectData->fields.extra_arg);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_28;
    v11 = *(_QWORD *)(v23 + 24);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 24);
      if ( (int)v12 >= 1 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)v12 )
            sub_1BCAA44(this, method);
          this = (BonusSelectSummonConfirmDialog_o *)v3->fields.itemList;
          if ( !this )
            break;
          v14 = *(_QWORD *)(v11 + 8 * v13 + 32);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v21,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v22 = v21;
          while ( 1 )
          {
            v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v22,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
            if ( !v15 )
              break;
            if ( !v22.fields._current )
              sub_1BCAA3C(v15, v16);
            klass = (BonusSelectSummonPartyOrganizationListViewItem_o *)v22.fields._current[8].klass;
            if ( !klass )
              sub_1BCAA3C(v15, v16);
            gachaBonusSelectEntity = klass->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v14 )
                sub_1BCAA3C(v15, v16);
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == *(_DWORD *)(v14 + 20) )
              {
                if ( !v23 )
                  sub_1BCAA3C(v15, v16);
                BonusSelectSummonPartyOrganizationListViewItem__Modify_33609212(
                  klass,
                  *(_DWORD *)(v23 + 16),
                  slot,
                  *(_DWORD *)(v14 + 28),
                  v17);
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v22,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
          LODWORD(v12) = *(_DWORD *)(v11 + 24);
          if ( (__int64)++v13 >= (int)v12 )
            goto LABEL_26;
        }
LABEL_28:
        sub_1BCAA3C(this, method);
      }
LABEL_26:
      BonusSelectSummonConfirmDialog__Modify(v3, method);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog___Close_b__24_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B12847 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B12847 = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___OnClick_b__27_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  __int64 v4; // x1
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x8
  const MethodInfo *v6; // x1

  BonusSelectSummonConfirmDialog__Modify(this, method);
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))enableBtn->fields.m_target)(
          enableBtn->fields.original_method_info,
          1LL,
          *(_QWORD *)&enableBtn->fields.extra_arg),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v6),
        (baseWindow = this->fields.baseWindow) == 0LL)
    || (baseWindow = UnityEngine_GameObject__get_gameObject(baseWindow, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (baseWindow = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL)) == 0LL )
  {
    sub_1BCAA3C(baseWindow, v4);
  }
  UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A08808;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A087C0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BonusSelectSummonConfirmDialog_ClickDelegate__BeginInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B1284A & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B1284A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  char v14; // w21
  char v15; // w0
  struct System_Reflection_MethodInfo_o *v16; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = (Il2CppObject *)sub_1A0856C;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v14 = sub_1BCA898(v10);
        v15 = sub_1BCAD54(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A08690;
          else
            v13 = (Il2CppObject *)sub_1A08644;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A085B8;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A08584;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A08544;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A084EC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__BeginInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = isLongTap;
  if ( (byte_4B12848 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, memberItem, isLongTap);
    byte_4B12848 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__Invoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    memberItem,
    isLongTap,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A08788;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
LABEL_8:
    v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v14;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = (Il2CppObject *)sub_1A087AC;
LABEL_6:
  this->fields.m_target = v13;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08724;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData__BeginInvoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        int32_t gachaId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  SelectBonusData_o *v11; // [xsp+8h] [xbp-58h] BYREF
  __int64 v12; // [xsp+10h] [xbp-50h]
  __int64 v13; // [xsp+18h] [xbp-48h]
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = gachaId;
  if ( (byte_4B12849 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, data, *(_QWORD *)&gachaId);
    byte_4B12849 = 1;
  }
  v12 = 0LL;
  v13 = 0LL;
  v11 = *data;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v11, callback, object);
}


bool __fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData__EndInvoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  SelectBonusData_o **v6; // [xsp+8h] [xbp-8h] BYREF

  v6 = data;
  if ( !sub_1BCA798(result, &v6, result) )
    sub_1BCAA3C(0LL, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0();
}


bool __fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData__Invoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        int32_t gachaId,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, SelectBonusData_o **, int32_t, _QWORD))this->fields.m_target)(
           this->fields.original_method_info,
           data,
           gachaId,
           *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall BonusSelectSummonConfirmDialog___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1284B & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog___c_TypeInfo, v1, v2);
    byte_4B1284B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BonusSelectSummonConfirmDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonConfirmDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BonusSelectSummonConfirmDialog___c___ctor(
        BonusSelectSummonConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Modify_b__29_0(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_1BCAA3C(this, itemObj);
  return listViewItem->fields.servantEntity == 0LL;
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Open_b__21_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_1BCAA3C(this, itemObj);
  return listViewItem->fields.servantEntity == 0LL;
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___ctor(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__0(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8
  UISprite_o *messageBg; // x20
  struct BonusSelectSummonConfirmDialog_o *v20; // x8
  __int64 v21; // x2
  __int64 v22; // x3
  struct BonusSelectSummonConfirmDialog_o *v23; // x8
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *itemList; // x21
  BonusSelectSummonConfirmDialog___c_c *v26; // x0
  System_Func_object__bool__o *_9__21_1; // x22
  Il2CppObject *v28; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *_9__2; // x21
  BaseDialog_o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  v3 = this;
  if ( (byte_4B1284C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, v6, v7);
    sub_1BCA7E0(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, v10, v11);
    sub_1BCA7E0(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__, v12, v13);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog___c_TypeInfo, v14, v15);
    this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)sub_1BCA7E0(&StringLiteral_17345/*"bg_white"*/, v16, v17);
    byte_4B1284C = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  messageBg = _4__this->fields.messageBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_17345/*"bg_white"*/, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  BonusSelectSummonConfirmDialog__CreateList((BonusSelectSummonConfirmDialog_o *)this, method);
  v20 = v3->fields.__4__this;
  if ( !v20 )
    goto LABEL_22;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v20->fields.rootObj;
  if ( !this )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  BonusSelectSummonConfirmDialog__SetLoadSelectBonusData((BonusSelectSummonConfirmDialog_o *)this, method);
  v23 = v3->fields.__4__this;
  if ( !v23 )
    goto LABEL_22;
  buttonDecide = v23->fields.buttonDecide;
  itemList = (System_Collections_Generic_List_T__o *)v23->fields.itemList;
  v26 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo, method);
    v26 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v26->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, method);
      v26 = BonusSelectSummonConfirmDialog___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo,
                                                method,
                                                v21,
                                                v22);
    System_Func_object__bool____ctor(_9__21_1, v28, Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, 0LL);
    static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__21_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_1,
      (int64_t)_9__21_1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)BasicHelper__Any_object_(
                                                                     itemList,
                                                                     (System_Func_T__bool__o *)_9__21_1,
                                                                     (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
    goto LABEL_22;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
                                                                     buttonDecide,
                                                                     ((unsigned __int8)this & 1) == 0,
                                                                     buttonDecide->klass->vtable._6_OnInit.methodPtr);
  _9__2 = v3->fields.__9__2;
  v39 = (BaseDialog_o *)v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v36, v37);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)_9__2, v40, v41, v42, v43, v44, v45);
  }
  if ( !v39 )
LABEL_22:
    sub_1BCAA3C(this, method);
  BaseDialog__Open(v39, _9__2, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  _4__this->fields.isButtonEnable = 1;
  ActionExtensions__Call(this->fields.endOpenCallback, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass31_0___ctor(
        BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass31_0___SaveSelectBonusData_b__0(
        BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *this,
        SelectBonusData_o *x,
        const MethodInfo *method)
{
  struct SelectBonusData_o *data; // x8

  if ( !x || (data = this->fields.data) == 0LL )
    sub_1BCAA3C(this, x);
  return x->fields.gachaId == data->fields.gachaId;
}