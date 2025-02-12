void __fastcall BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BC4073 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BC4073 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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

  BonusSelectSummonConfirmDialog__Close_34008916(this, 0LL, v2);
}


void __fastcall BonusSelectSummonConfirmDialog__Close_34008916(
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
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  System_Action_o *v15; // x20

  if ( (byte_4BC4067 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4BC4067 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v14);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 1, 0LL);
  v15 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__CreateList(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  GachaBonusSelectMaster_o *Master_object; // x0
  __int64 v12; // x1
  GachaBonusSelectEntity_array *v13; // x23
  signed int max_length; // w8
  unsigned int v15; // w24
  GachaBonusSelectEntity_o *v16; // x21
  int32_t slot; // w22
  BonusSelectSummonPartyOrganizationListViewItem_o *v18; // x20
  const MethodInfo *v19; // x4
  Il2CppObject *prefab; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x21
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v35; // x8
  GachaBonusSelectEntity_array *entityArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC4069 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog_OnClick__, method);
    sub_1C1ABD4(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v4);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__, v7);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject____77632760, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    sub_1C1ABD4(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo, v10);
    byte_4BC4069 = 1;
  }
  entityArray = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaBonusSelectMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Master_object = (GachaBonusSelectMaster_o *)GachaBonusSelectMaster__TryGetEntityArray(
                                                Master_object,
                                                &entityArray,
                                                this->fields.gachaId,
                                                0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v13 = entityArray;
    if ( !entityArray )
      goto LABEL_24;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
          sub_1C1AE38(Master_object, v12);
        v16 = v13->m_Items[v15];
        if ( !v16 )
          break;
        slot = v16->fields.slot;
        v18 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C1AE20(BonusSelectSummonPartyOrganizationListViewItem_TypeInfo);
        BonusSelectSummonPartyOrganizationListViewItem___ctor(v18, slot, 0LL, v16, v19);
        Master_object = (GachaBonusSelectMaster_o *)this->fields.rootObj;
        if ( !Master_object )
          break;
        prefab = (Il2CppObject *)this->fields.prefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (GachaBonusSelectMaster_o *)UnityEngine_Object__Instantiate_object__50483316(
                                                      prefab,
                                                      transform,
                                                      (const MethodInfo_3025074 *)Method_UnityEngine_Object_Instantiate_GameObject____77632760);
        if ( !Master_object )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v23 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_1C1AE20(BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo);
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
          v23,
          (Il2CppObject *)this,
          (intptr_t)Method_BonusSelectSummonConfirmDialog_OnClick__,
          v24);
        if ( !Component_object )
          break;
        BonusSelectSummonPartyOrganizationListViewObject__Init(
          (BonusSelectSummonPartyOrganizationListViewObject_o *)Component_object,
          v18,
          v23,
          v25);
        Master_object = (GachaBonusSelectMaster_o *)this->fields.itemList;
        if ( !Master_object )
          break;
        v32 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v33 = Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v32 )
          break;
        MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v32 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            Component_object,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = v32 + 8 * MasterName_k__BackingField_low;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_QWORD *)(v35 + 32) = Component_object;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)Component_object, v26, v27, v28, v29, v30, v31);
        }
        max_length = v13->max_length;
        if ( (int)++v15 >= max_length )
          return;
      }
LABEL_24:
      sub_1C1AE30(Master_object, v12);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog__EndClose(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v18; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BC4068 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    byte_4BC4068 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    sub_1C1AE30(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v20.fields._current )
      sub_1C1AE30(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v20.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v18 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C1AB78(p_closeCallbackFunc, 0LL, v11, v12, v13, v14, v15, v16);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v18->fields.m_target)(
      v18->fields.original_method_info,
      *(_QWORD *)&v18->fields.extra_arg);
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
  if ( (byte_4BC406B & 1) == 0 )
  {
    this = (BonusSelectSummonConfirmDialog_o *)sub_1C1ABD4(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 isDecide);
    byte_4BC406B = 1;
  }
  enableBtn = v3->fields.enableBtn;
  if ( !enableBtn
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))enableBtn->fields.m_target)(
          enableBtn->fields.original_method_info,
          1LL,
          *(_QWORD *)&enableBtn->fields.extra_arg),
        BonusSelectSummonConfirmDialog__SetBackBtn(v3, v5),
        (this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C1AE30(this, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)this, 0LL, 0LL);
}


SelectBonusData_o *__fastcall BonusSelectSummonConfirmDialog__GetSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _DWORD *v15; // x28
  _DWORD *v16; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x8
  _DWORD *fields; // x9
  int32_t v21; // w22
  int32_t v22; // w23
  _DWORD *events; // x8
  int32_t v24; // w24
  int32_t v25; // w25
  SelectBonus_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x21
  System_Object_array *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  BonusSelectSummonConfirmDialog_o *v48; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BC406F & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonus__Add__, v5);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonus__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonus___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SelectBonus__TypeInfo, v9);
    sub_1C1ABD4(&SelectBonusData_TypeInfo, v10);
    sub_1C1ABD4(&SelectBonus_TypeInfo, v11);
    byte_4BC406F = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SelectBonus__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  v48 = this;
  if ( !itemList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v15 = 0LL;
  v16 = 0LL;
  v50 = v49;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    if ( !v17 )
      break;
    if ( !v50.fields._current )
      sub_1C1AE30(v17, v18);
    klass = v50.fields._current[8].klass;
    if ( !klass )
      sub_1C1AE30(v17, v18);
    fields = klass->_1.fields;
    if ( fields )
      v16 = klass->_1.fields;
    if ( fields )
    {
      if ( !v16 )
        sub_1C1AE30(v17, v18);
      v21 = v16[5];
      v22 = fields[6];
    }
    else
    {
      v21 = -1;
      v22 = -1;
    }
    events = klass->_1.events;
    if ( events )
      v15 = events;
    if ( events )
    {
      if ( !v15 )
        sub_1C1AE30(v17, v18);
      v24 = v15[5];
      v25 = events[6];
    }
    else
    {
      v24 = -1;
      v25 = -1;
    }
    v26 = (SelectBonus_o *)sub_1C1AE20(SelectBonus_TypeInfo);
    SelectBonus___ctor(v26, v21, v22, v24, v25, 0LL);
    if ( !v12 )
      sub_1C1AE30(v27, v28);
    items = v12->fields._items;
    v36 = Method_System_Collections_Generic_List_SelectBonus__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1C1AE30(v27, v28);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)v26,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v38[4] = (Il2CppClass *)v26;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v26, v29, v30, v31, v32, v33, v34);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v39 = sub_1C1AE20(SelectBonusData_TypeInfo);
  SelectBonusData___ctor((SelectBonusData_o *)v39, 0LL);
  if ( !v39 || (*(_DWORD *)(v39 + 16) = v48->fields.gachaId, !v12) )
LABEL_34:
    sub_1C1AE30(itemList, v13);
  v40 = System_Collections_Generic_List_object___ToArray(
          v12,
          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v39 + 24) = v40;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v39 + 24), (int64_t)v40, v41, v42, v43, v44, v45, v46);
  return (SelectBonusData_o *)v39;
}


void __fastcall BonusSelectSummonConfirmDialog__Init(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *prefab; // x22
  UnityEngine_GameObject_o *titleLabel; // x0
  const MethodInfo *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct UnityEngine_GameObject_o *OrganizationListViewItemPrefab_k__BackingField; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o **p_servantSelectMenu; // x21
  UnityEngine_Object_o *servantSelectMenu; // x22
  Il2CppObject *ServantSelectMenuPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BC4065 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___, assetManager);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo, v6);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject____77632760, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v9);
    byte_4BC4065 = 1;
  }
  prefab = (UnityEngine_Object_o *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(prefab, 0LL, 0LL);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    if ( !assetManager )
      goto LABEL_25;
    OrganizationListViewItemPrefab_k__BackingField = assetManager->fields._OrganizationListViewItemPrefab_k__BackingField;
    this->fields.prefab = OrganizationListViewItemPrefab_k__BackingField;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.prefab,
      (int64_t)OrganizationListViewItemPrefab_k__BackingField,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(servantSelectMenu, 0LL, 0LL);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    if ( !assetManager )
      goto LABEL_25;
    ServantSelectMenuPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._ServantSelectMenuPrefab_k__BackingField;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__50483316(
                                               ServantSelectMenuPrefab_k__BackingField,
                                               transform,
                                               (const MethodInfo_3025074 *)Method_UnityEngine_Object_Instantiate_GameObject____77632760);
    if ( !titleLabel )
LABEL_25:
      sub_1C1AE30(titleLabel, v12);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         titleLabel,
                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (struct BonusSelectSummonPartyServantSelectMenu_o *)Component_object;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.servantSelectMenu,
      (int64_t)Component_object,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  titleLabel = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_25;
  BonusSelectSummonPartyServantSelectMenu__Init((BonusSelectSummonPartyServantSelectMenu_o *)titleLabel, v12);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v31;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v31, v32, v33, v34, v35, v36, v37);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  const MethodInfo *v11; // x1
  BonusSelectSummonConfirmDialog___c_c *v12; // x0
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *v14; // x21
  System_Func_object__bool__o *_9__29_0; // x22
  Il2CppObject *v16; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BC406C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, method);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v3);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v4);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v5);
    sub_1C1ABD4(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v6);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v7);
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, v8);
    sub_1C1ABD4(&BonusSelectSummonConfirmDialog___c_TypeInfo, v9);
    byte_4BC406C = 1;
  }
  memset(&v25, 0, sizeof(v25));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v25.fields._current )
      sub_1C1AE30(0LL, v11);
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v25.fields._current,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v12 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  buttonDecide = this->fields.buttonDecide;
  v14 = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v12 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  _9__29_0 = (System_Func_object__bool__o *)v12->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BonusSelectSummonConfirmDialog___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v12->static_fields->__9;
    _9__29_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__29_0, v16, Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, 0LL);
    static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__29_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
      (int64_t)_9__29_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)BasicHelper__Any_object_(v14, (System_Func_T__bool__o *)_9__29_0, (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_17:
    sub_1C1AE30(itemList, method);
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    ((unsigned __int8)itemList & 1) == 0,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  BonusSelectSummonConfirmDialog__SaveSelectBonusData(this, v24);
}


void __fastcall BonusSelectSummonConfirmDialog__OnClick(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x8
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  struct ServantEntity_o *servantEntity; // x8
  CommonUI_o *v26; // x20
  __int64 v27; // x21
  __int64 v28; // x22
  int32_t v29; // w22
  ServantLeaderInfo_o *v30; // x21
  ServantStatusDialog_EndDelegate_o *v31; // x22
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *v32; // x8
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  System_Collections_Generic_List_int__o *v35; // x21
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppClass *klass; // x8
  Il2CppClass *v39; // x8
  const char *namespaze; // x22
  const char *name; // x23
  __int64 v42; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  BonusSelectSummonPartyServantSelectMenu_o *servantSelectMenu; // x22
  System_Int32_array *v47; // x21
  System_Action_o *v48; // x23
  const MethodInfo *v49; // x4
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v6 = this;
  if ( (byte_4BC406A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, memberItem);
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__, v7);
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog_OnClick__, v8);
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, v9);
    sub_1C1ABD4(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v11);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v12);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1C1ABD4(&ServantLeaderInfo_TypeInfo, v20);
    this = (BonusSelectSummonConfirmDialog_o *)sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    byte_4BC406A = 1;
  }
  memset(&v51, 0, sizeof(v51));
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
        v23 = Method_BonusSelectSummonConfirmDialog_OnClick__;
        if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1C1ABEC(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v24 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
        this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantEntity = memberItem->fields.servantEntity;
        if ( servantEntity )
        {
          v26 = (CommonUI_o *)this;
          v28 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
          v27 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v52.fields.currentCryptoKey = v28;
          *(_QWORD *)&v52.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v52, 0LL);
          v30 = (ServantLeaderInfo_o *)sub_1C1AE20(ServantLeaderInfo_TypeInfo);
          ServantLeaderInfo___ctor_41717540(v30, v29, 0, 1, 0LL);
          v31 = (ServantStatusDialog_EndDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v31,
            (Il2CppObject *)v6,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0LL);
          if ( v26 )
          {
            CommonUI__OpenServantStatusDialog_31111300(v26, 7, v30, v31, 0LL);
            return;
          }
        }
      }
LABEL_42:
      sub_1C1AE30(this, memberItem);
    }
  }
  else
  {
    v32 = v6->fields.enableBtn;
    if ( !v32 )
      goto LABEL_42;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, const MethodInfo *))v32->fields.m_target)(
      v32->fields.original_method_info,
      0LL,
      *(_QWORD *)&v32->fields.extra_arg,
      method);
    v33 = Method_BonusSelectSummonConfirmDialog_OnClick__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_1C1ABEC(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v34 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v33, v33[4]);
    OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0, 0LL);
    v35 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v35,
      (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.itemList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v51 = v50;
    while ( 1 )
    {
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
      if ( !v36 )
        break;
      if ( !v51.fields._current )
        sub_1C1AE30(v36, v37);
      klass = v51.fields._current[8].klass;
      if ( !klass )
        sub_1C1AE30(v36, v37);
      v39 = klass->_1.klass;
      if ( v39 )
      {
        name = v39->_1.name;
        namespaze = v39->_1.namespaze;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v53.fields.currentCryptoKey = name;
        *(_QWORD *)&v53.fields.fakeValue = namespaze;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v53, 0LL);
        if ( !v35 )
          sub_1C1AE30(v42, (unsigned int)v42);
        items = v35->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++v35->fields._version;
        if ( !items )
          sub_1C1AE30(v42, (unsigned int)v42);
        size = v35->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v35,
            v42,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v35->fields._size = size + 1;
          items->m_Items[size + 1] = v42;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
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
    if ( !v35 )
      goto LABEL_42;
    servantSelectMenu = v6->fields.servantSelectMenu;
    v47 = System_Collections_Generic_List_int___ToArray(
            v35,
            (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
    v48 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)v6, Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, 0LL);
    if ( !servantSelectMenu )
      goto LABEL_42;
    BonusSelectSummonPartyServantSelectMenu__Open(servantSelectMenu, memberItem, v47, v48, v49);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__OnClickCancel(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4BC4071 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__, method);
    byte_4BC4071 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    BonusSelectSummonConfirmDialog__Close_34008916(this, 0LL, v5);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__OnClickDecide(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isButtonEnable; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4BC4070 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__, method);
    byte_4BC4070 = 1;
  }
  v3 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  isButtonEnable = this->fields.isButtonEnable;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    BonusSelectSummonConfirmDialog__Close_34008916(this, 0LL, v6);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x20
  System_String_o *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *buttonDecideLabel; // x21
  UILabel_o *buttonCancelLabel; // x21
  System_Action_o *v58; // x19

  if ( (byte_4BC4066 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&gachaId);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v13);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v14);
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__, v15);
    sub_1C1ABD4(&BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, v16);
    sub_1C1ABD4(&StringLiteral_12556/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, v17);
    sub_1C1ABD4(&StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, v18);
    sub_1C1ABD4(&StringLiteral_3092/*"BONUS_SELECT_SERVANT_SELECT_DECIDE"*/, v19);
    sub_1C1ABD4(&StringLiteral_12558/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, v20);
    byte_4BC4066 = 1;
  }
  v21 = sub_1C1AE20(BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_13;
  *(_QWORD *)(v21 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = endOpenCallback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)endOpenCallback, v30, v31, v32, v33, v34, v35);
  this->fields.clickFunc = func;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v36, v37, v38, v39, v40, v41);
  this->fields.enableBtn = enableBtn;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.enableBtn, (int64_t)enableBtn, v42, v43, v44, v45, v46, v47);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.tryGetBonusSelectData,
    (int64_t)tryGetBonusSelectData,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.gachaId = gachaId;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, v22, 0LL);
  messageLabel = this->fields.messageLabel;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12556/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v22, 0LL),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3092/*"BONUS_SELECT_SERVANT_SELECT_DECIDE"*/, 0LL),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, v22, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !buttonCancelLabel) )
  {
LABEL_13:
    sub_1C1AE30(v22, v23);
  }
  UILabel__set_text(buttonCancelLabel, v22, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v58 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v21,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v58, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SaveSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x21
  const MethodInfo *v19; // x1
  int64_t SelectBonusData; // x0
  Il2CppObject *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject **v28; // x19
  SummonControl_c *v29; // x0
  Il2CppObject *String_70752688; // x22
  System_Collections_Generic_List_object__o *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Func_object__bool__o *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t v40; // w21
  Il2CppObject *v41; // x2
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Object_array *v46; // x19
  System_String_o *Empty; // x19
  SummonControl_c *v48; // x0

  if ( (byte_4BC406E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_SelectBonusData___, method);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToList_SelectBonusData___, v3);
    sub_1C1ABD4(&System_Func_SelectBonusData__bool__TypeInfo, v4);
    sub_1C1ABD4(&Method_JsonManager_DeserializeArray_SelectBonusData___, v5);
    sub_1C1ABD4(&JsonManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v13);
    sub_1C1ABD4(&string_TypeInfo, v14);
    sub_1C1ABD4(&SummonControl_TypeInfo, v15);
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__, v16);
    sub_1C1ABD4(&BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, v17);
    byte_4BC406E = 1;
  }
  v18 = sub_1C1AE20(BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  SelectBonusData = (int64_t)BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v19);
  if ( !v18 )
    goto LABEL_33;
  *(_QWORD *)(v18 + 16) = SelectBonusData;
  v28 = (Il2CppObject **)(v18 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 16), SelectBonusData, v22, v23, v24, v25, v26, v27);
  v29 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v29 = SummonControl_TypeInfo;
  }
  String_70752688 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70752688(
                                      v29->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SelectBonusData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_70752688, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                                 String_70752688,
                                                                 (const MethodInfo_3006E90 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v31 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v32,
                                                         (const MethodInfo_2FDCC54 *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v33 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_SelectBonusData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v18,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__,
    0LL);
  SelectBonusData = BasicHelper__Any_object_(
                      (System_Collections_Generic_List_T__o *)v31,
                      (System_Func_T__bool__o *)v33,
                      (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_SelectBonusData___);
  if ( (SelectBonusData & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_33;
    if ( v31->fields._size >= 1 )
    {
      v40 = 0;
      while ( 1 )
      {
        SelectBonusData = (int64_t)System_Collections_Generic_List_object___get_Item(
                                     v31,
                                     v40,
                                     (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SelectBonusData__get_Item__);
        if ( !SelectBonusData )
          break;
        v41 = *v28;
        if ( !*v28 )
          break;
        if ( *(_DWORD *)(SelectBonusData + 16) == LODWORD(v41[1].klass) )
          System_Collections_Generic_List_object___set_Item(
            v31,
            v40,
            v41,
            (const MethodInfo_363C614 *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        if ( ++v40 >= v31->fields._size )
          goto LABEL_25;
      }
LABEL_33:
      sub_1C1AE30(SelectBonusData, v21);
    }
  }
  else
  {
    if ( !v31 )
      goto LABEL_33;
    v21 = *v28;
    items = v31->fields._items;
    v43 = Method_System_Collections_Generic_List_SelectBonusData__Add__;
    ++v31->fields._version;
    if ( !items )
      goto LABEL_33;
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        v21,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + size;
      v31->fields._size = size + 1;
      v45[4] = (Il2CppClass *)v21;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v21, v34, v35, v36, v37, v38, v39);
    }
  }
LABEL_25:
  if ( v31->fields._size <= 0 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  else
  {
    v46 = System_Collections_Generic_List_object___ToArray(
            v31,
            (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Empty = JsonManager__toJson(&v46->obj, 0, 0, 0LL);
  }
  v48 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v48 = SummonControl_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v48->static_fields->BONUS_SELECTSUMMON_SAVEKEY, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetBackBtn(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4BC4072 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_15898/*"Window/CancelButton"*/, method);
    byte_4BC4072 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43042988(transform, (System_String_o *)StringLiteral_15898/*"Window/CancelButton"*/, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetLoadSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData; // x8
  __int64 v7; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x23
  __int64 v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  BonusSelectSummonPartyOrganizationListViewItem_o *klass; // x8
  struct GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x9
  int32_t slot; // w2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF
  __int64 v19; // [xsp+38h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BC406D & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    this = (BonusSelectSummonConfirmDialog_o *)sub_1C1ABD4(
                                                 &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
                                                 v5);
    byte_4BC406D = 1;
  }
  v19 = 0LL;
  memset(&v18, 0, sizeof(v18));
  tryGetBonusSelectData = v2->fields.tryGetBonusSelectData;
  if ( !tryGetBonusSelectData )
    goto LABEL_28;
  this = (BonusSelectSummonConfirmDialog_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64 *, _QWORD, _QWORD))tryGetBonusSelectData->fields.m_target)(
                                               tryGetBonusSelectData->fields.original_method_info,
                                               &v19,
                                               (unsigned int)v2->fields.gachaId,
                                               *(_QWORD *)&tryGetBonusSelectData->fields.extra_arg);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_28;
    v7 = *(_QWORD *)(v19 + 24);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 24);
      if ( (int)v8 >= 1 )
      {
        v9 = 0LL;
        while ( 1 )
        {
          if ( v9 >= (unsigned int)v8 )
            sub_1C1AE38(this, method);
          this = (BonusSelectSummonConfirmDialog_o *)v2->fields.itemList;
          if ( !this )
            break;
          v10 = *(_QWORD *)(v7 + 8 * v9 + 32);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v17,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v18 = v17;
          while ( 1 )
          {
            v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v18,
                    (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
            if ( !v11 )
              break;
            if ( !v18.fields._current )
              sub_1C1AE30(v11, v12);
            klass = (BonusSelectSummonPartyOrganizationListViewItem_o *)v18.fields._current[8].klass;
            if ( !klass )
              sub_1C1AE30(v11, v12);
            gachaBonusSelectEntity = klass->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v10 )
                sub_1C1AE30(v11, v12);
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == *(_DWORD *)(v10 + 20) )
              {
                if ( !v19 )
                  sub_1C1AE30(v11, v12);
                BonusSelectSummonPartyOrganizationListViewItem__Modify_34015412(
                  klass,
                  *(_DWORD *)(v19 + 16),
                  slot,
                  *(_DWORD *)(v10 + 28),
                  v13);
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v18,
            (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
          LODWORD(v8) = *(_DWORD *)(v7 + 24);
          if ( (__int64)++v9 >= (int)v8 )
            goto LABEL_26;
        }
LABEL_28:
        sub_1C1AE30(this, method);
      }
LABEL_26:
      BonusSelectSummonConfirmDialog__Modify(v2, method);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog___Close_b__24_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC4074 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BC4074 = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
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
    sub_1C1AE30(baseWindow, v4);
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A57C34;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A57BEC;
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
  if ( (byte_4BC4077 & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, isDecide);
    byte_4BC4077 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = (Il2CppObject *)sub_1A57998;
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
        v14 = sub_1C1AC8C(v10);
        v15 = sub_1C1B148(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A57ABC;
          else
            v13 = (Il2CppObject *)sub_1A57A70;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A579E4;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A579B0;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A57970;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A57918;
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
  if ( (byte_4BC4075 & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, memberItem);
    byte_4BC4075 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12, isLongTap, callback, object);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v11, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A57BB4;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v15, 0LL);
    }
LABEL_8:
    v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v14;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = (Il2CppObject *)sub_1A57BD8;
LABEL_6:
  this->fields.m_target = v13;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A57B50;
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
  if ( (byte_4BC4076 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, data);
    byte_4BC4076 = 1;
  }
  v12 = 0LL;
  v13 = 0LL;
  v11 = *data;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v14, *(_QWORD *)&gachaId, callback, object);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, &v11, callback, object);
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
  if ( !sub_1C1AB8C(result, &v6, result) )
    sub_1C1AE30(0LL, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC4078 & 1) == 0 )
  {
    sub_1C1ABD4(&BonusSelectSummonConfirmDialog___c_TypeInfo, v1);
    byte_4BC4078 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BonusSelectSummonConfirmDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonConfirmDialog___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, itemObj);
  return listViewItem->fields.servantEntity == 0LL;
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Open_b__21_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_1C1AE30(this, itemObj);
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
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8
  UISprite_o *messageBg; // x20
  struct BonusSelectSummonConfirmDialog_o *v12; // x8
  struct BonusSelectSummonConfirmDialog_o *v13; // x8
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *itemList; // x21
  BonusSelectSummonConfirmDialog___c_c *v16; // x0
  System_Func_object__bool__o *_9__21_1; // x22
  Il2CppObject *v18; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Action_o *_9__2; // x21
  BaseDialog_o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  v2 = this;
  if ( (byte_4BC4079 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, v4);
    sub_1C1ABD4(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, v6);
    sub_1C1ABD4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__, v7);
    sub_1C1ABD4(&BonusSelectSummonConfirmDialog___c_TypeInfo, v8);
    this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)sub_1C1ABD4(&StringLiteral_17449/*"bg_white"*/, v9);
    byte_4BC4079 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  messageBg = _4__this->fields.messageBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_17449/*"bg_white"*/, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  BonusSelectSummonConfirmDialog__CreateList((BonusSelectSummonConfirmDialog_o *)this, method);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_22;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v12->fields.rootObj;
  if ( !this )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  BonusSelectSummonConfirmDialog__SetLoadSelectBonusData((BonusSelectSummonConfirmDialog_o *)this, method);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_22;
  buttonDecide = v13->fields.buttonDecide;
  itemList = (System_Collections_Generic_List_T__o *)v13->fields.itemList;
  v16 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v16 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v16->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BonusSelectSummonConfirmDialog___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__21_1, v18, Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, 0LL);
    static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__21_1;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_1,
      (int64_t)_9__21_1,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)BasicHelper__Any_object_(
                                                                     itemList,
                                                                     (System_Func_T__bool__o *)_9__21_1,
                                                                     (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
    goto LABEL_22;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
                                                                     buttonDecide,
                                                                     ((unsigned __int8)this & 1) == 0,
                                                                     buttonDecide->klass->vtable._6_OnInit.methodPtr);
  _9__2 = v2->fields.__9__2;
  v27 = (BaseDialog_o *)v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v2->fields.__9__2, (int64_t)_9__2, v28, v29, v30, v31, v32, v33);
  }
  if ( !v27 )
LABEL_22:
    sub_1C1AE30(this, method);
  BaseDialog__Open(v27, _9__2, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, x);
  return x->fields.gachaId == data->fields.gachaId;
}