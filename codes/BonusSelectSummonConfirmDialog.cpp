void BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CEA973 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CEA973 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void BonusSelectSummonConfirmDialog__CheckAssert(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


void BonusSelectSummonConfirmDialog__Close(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BonusSelectSummonConfirmDialog__Close_35817932(this, 0, v2);
}


void BonusSelectSummonConfirmDialog__Close_35817932(
        BonusSelectSummonConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_4CEA967 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog__Close_b__25_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA967 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v11);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 1, 0);
  v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__Close_b__25_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void BonusSelectSummonConfirmDialog__CreateList(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  GachaBonusSelectMaster_o *Master_object; // x0
  __int64 v4; // x1
  GachaBonusSelectEntity_array *v5; // x23
  int max_length; // w8
  unsigned int v7; // w24
  GachaBonusSelectEntity_o *v8; // x21
  int32_t slot; // w22
  BonusSelectSummonPartyOrganizationListViewItem_o *v10; // x20
  const MethodInfo *v11; // x4
  Il2CppObject *prefab; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x21
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v27; // x8
  GachaBonusSelectEntity_array *entityArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEA969 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog_OnClick__);
    sub_1C7BAE8(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo);
    byte_4CEA969 = 1;
  }
  entityArray = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaBonusSelectMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Master_object = (GachaBonusSelectMaster_o *)GachaBonusSelectMaster__TryGetEntityArray(
                                                Master_object,
                                                &entityArray,
                                                this->fields.gachaId,
                                                0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v5 = entityArray;
    if ( !entityArray )
      goto LABEL_24;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          sub_1C7BD48(Master_object);
        v8 = v5->m_Items[v7];
        if ( !v8 )
          break;
        slot = v8->fields.slot;
        v10 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1C7BD34(BonusSelectSummonPartyOrganizationListViewItem_TypeInfo);
        BonusSelectSummonPartyOrganizationListViewItem___ctor(v10, slot, 0, v8, v11);
        Master_object = (GachaBonusSelectMaster_o *)this->fields.rootObj;
        if ( !Master_object )
          break;
        prefab = (Il2CppObject *)this->fields.prefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (GachaBonusSelectMaster_o *)UnityEngine_Object__Instantiate_object__52412380(
                                                      prefab,
                                                      transform,
                                                      (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
        if ( !Master_object )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v15 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_1C7BD34(BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo);
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_BonusSelectSummonConfirmDialog_OnClick__,
          v16);
        if ( !Component_object )
          break;
        BonusSelectSummonPartyOrganizationListViewObject__Init(
          (BonusSelectSummonPartyOrganizationListViewObject_o *)Component_object,
          v10,
          v15,
          v17);
        Master_object = (GachaBonusSelectMaster_o *)this->fields.itemList;
        if ( !Master_object )
          break;
        v24 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v25 = Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v24 )
          break;
        MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v24 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            Component_object,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = v24 + 8 * MasterName_k__BackingField_low;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_QWORD *)(v27 + 32) = Component_object;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)(v27 + 32),
            (int32_t)Component_object,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
        }
        max_length = v5->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
LABEL_24:
      sub_1C7BD40(Master_object, v4);
    }
  }
}


void BonusSelectSummonConfirmDialog__EndClose(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEA968 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA968 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  BaseDialog__Init((BaseDialog_o *)this, 0);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    sub_1C7BD40(0, v3);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    itemList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1C7BD40(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v16.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v14 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


void BonusSelectSummonConfirmDialog__EndOpen(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonConfirmDialog__EndShowServantStatusDialog(
        BonusSelectSummonConfirmDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v3; // x19
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x8
  const MethodInfo *v5; // x1

  v3 = this;
  if ( (byte_4CEA96B & 1) == 0 )
  {
    this = (BonusSelectSummonConfirmDialog_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA96B = 1;
  }
  enableBtn = v3->fields.enableBtn;
  if ( !enableBtn
    || (((void (__fastcall *)(intptr_t, __int64, intptr_t))enableBtn->fields.invoke_impl)(
          enableBtn->fields.method_code,
          1,
          enableBtn->fields.method),
        BonusSelectSummonConfirmDialog__SetBackBtn(v3, v5),
        (this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C7BD40(this, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)this, 0, 0);
}


SelectBonusData_o *BonusSelectSummonConfirmDialog__GetSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  _DWORD *events; // x9
  int32_t v10; // w22
  int32_t v11; // w23
  _DWORD *properties; // x8
  int32_t v13; // w24
  int32_t v14; // w25
  SelectBonus_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  __int64 v28; // x21
  System_Object_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  BonusSelectSummonConfirmDialog_o *v37; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEA96F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SelectBonus__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SelectBonus__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SelectBonus___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SelectBonus__TypeInfo);
    sub_1C7BAE8(&SelectBonusData_TypeInfo);
    sub_1C7BAE8(&SelectBonus_TypeInfo);
    byte_4CEA96F = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SelectBonus__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  v37 = this;
  if ( !itemList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    itemList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v39,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    if ( !v6 )
      break;
    if ( !v39.fields._current )
      sub_1C7BD40(v6, v7);
    klass = v39.fields._current[8].klass;
    if ( !klass )
      sub_1C7BD40(v6, v7);
    events = klass->_1.events;
    if ( events )
    {
      v10 = events[5];
      v11 = events[6];
    }
    else
    {
      v10 = -1;
      v11 = -1;
    }
    properties = klass->_1.properties;
    if ( properties )
    {
      v13 = properties[5];
      v14 = properties[6];
    }
    else
    {
      v13 = -1;
      v14 = -1;
    }
    v15 = (SelectBonus_o *)sub_1C7BD34(SelectBonus_TypeInfo);
    SelectBonus___ctor(v15, v10, v11, v13, v14, 0);
    if ( !v3 )
      sub_1C7BD40(v16, v17);
    items = v3->fields._items;
    v25 = Method_System_Collections_Generic_List_SelectBonus__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C7BD40(v16, v17);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v15,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v15;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v15, v18, v19, v20, v21, v22, v23);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v28 = sub_1C7BD34(SelectBonusData_TypeInfo);
  SelectBonusData___ctor((SelectBonusData_o *)v28, 0);
  if ( !v28 || (*(_DWORD *)(v28 + 16) = v37->fields.gachaId, !v3) )
LABEL_26:
    sub_1C7BD40(itemList, v4);
  v29 = System_Collections_Generic_List_object___ToArray(
          v3,
          (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v28 + 24) = v29;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v28 + 24), (int32_t)v29, v30, v31, v32, v33, v34, v35);
  return (SelectBonusData_o *)v28;
}


void BonusSelectSummonConfirmDialog__Init(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  UnityEngine_Object_o *prefab; // x22
  UnityEngine_GameObject_o *titleLabel; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UnityEngine_GameObject_o *OrganizationListViewItemPrefab_k__BackingField; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o **p_servantSelectMenu; // x21
  UnityEngine_Object_o *servantSelectMenu; // x22
  Il2CppObject *ServantSelectMenuPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4CEA965 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA965 = 1;
  }
  prefab = (UnityEngine_Object_o *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(prefab, 0, 0);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    if ( !assetManager )
      goto LABEL_25;
    OrganizationListViewItemPrefab_k__BackingField = assetManager->fields._OrganizationListViewItemPrefab_k__BackingField;
    this->fields.prefab = OrganizationListViewItemPrefab_k__BackingField;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.prefab,
      (int32_t)OrganizationListViewItemPrefab_k__BackingField,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(servantSelectMenu, 0, 0);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    if ( !assetManager )
      goto LABEL_25;
    ServantSelectMenuPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._ServantSelectMenuPrefab_k__BackingField;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__52412380(
                                               ServantSelectMenuPrefab_k__BackingField,
                                               transform,
                                               (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    if ( !titleLabel )
LABEL_25:
      sub_1C7BD40(titleLabel, v7);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         titleLabel,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (struct BonusSelectSummonPartyServantSelectMenu_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.servantSelectMenu,
      (int32_t)Component_object,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  titleLabel = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_25;
  BonusSelectSummonPartyServantSelectMenu__Init((BonusSelectSummonPartyServantSelectMenu_o *)titleLabel, v7);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v26;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.itemList, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.messageBg;
  if ( !titleLabel )
    goto LABEL_25;
  UISprite__set_spriteName((UISprite_o *)titleLabel, 0, 0);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.buttonDecideLabel;
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.buttonCancelLabel;
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.buttonDecide;
  this->fields.isButtonEnable = 0;
  if ( !titleLabel )
    goto LABEL_25;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))titleLabel->klass[1]._1.name)(
    titleLabel,
    0,
    titleLabel->klass[1]._1.namespaze);
  titleLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(titleLabel, 0, 0);
  this->fields.gachaDetailEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.gachaDetailEntity, 0, v33, v34, v35, v36, v37, v38);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void BonusSelectSummonConfirmDialog__Modify(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  const MethodInfo *v4; // x1
  BonusSelectSummonConfirmDialog___c_c *v5; // x0
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *v7; // x21
  System_Func_object__bool__o *_9__30_0; // x22
  Il2CppObject *v9; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEA96C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_1C7BAE8(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__30_0__);
    sub_1C7BAE8(&BonusSelectSummonConfirmDialog___c_TypeInfo);
    byte_4CEA96C = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v18.fields._current )
      sub_1C7BD40(0, v4);
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v18.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v5 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  buttonDecide = this->fields.buttonDecide;
  v7 = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v5 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__bool__o *)v5->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BonusSelectSummonConfirmDialog___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v5->static_fields->__9;
    _9__30_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__30_0, v9, Method_BonusSelectSummonConfirmDialog___c__Modify_b__30_0__, 0);
    static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__30_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__30_0,
      (int32_t)_9__30_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)BasicHelper__Any_object_(v7, (System_Func_T__bool__o *)_9__30_0, (const MethodInfo_3159728 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_17:
    sub_1C7BD40(itemList, method);
  ((void (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))buttonDecide->klass->vtable._5_set_isEnabled.methodPtr)(
    buttonDecide,
    ((unsigned __int8)itemList & 1) == 0,
    buttonDecide->klass->vtable._5_set_isEnabled.method);
  BonusSelectSummonConfirmDialog__SaveSelectBonusData(this, v17);
}


void BonusSelectSummonConfirmDialog__OnClick(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v6; // x19
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ServantEntity_o *servantEntity; // x8
  CommonUI_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w22
  ServantLeaderInfo_o *v15; // x21
  ServantStatusDialog_EndDelegate_o *v16; // x22
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *v17; // x8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  System_Collections_Generic_List_int__o *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppClass *klass; // x8
  _QWORD *fields; // x8
  __int64 v25; // x22
  __int64 v26; // x23
  __int64 v27; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  BonusSelectSummonPartyServantSelectMenu_o *servantSelectMenu; // x22
  System_Int32_array *v32; // x21
  System_Action_o *v33; // x23
  const MethodInfo *v34; // x5
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v6 = this;
  if ( (byte_4CEA96A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__);
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog_OnClick__);
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog__OnClick_b__28_0__);
    sub_1C7BAE8(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&ServantLeaderInfo_TypeInfo);
    this = (BonusSelectSummonConfirmDialog_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA96A = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( isLongTap )
  {
    if ( !memberItem )
      goto LABEL_42;
    if ( memberItem->fields.servantEntity )
    {
      enableBtn = v6->fields.enableBtn;
      if ( enableBtn )
      {
        ((void (__fastcall *)(intptr_t, _QWORD, intptr_t, const MethodInfo *))enableBtn->fields.invoke_impl)(
          enableBtn->fields.method_code,
          0,
          enableBtn->fields.method,
          method);
        v8 = Method_BonusSelectSummonConfirmDialog_OnClick__;
        if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantEntity = memberItem->fields.servantEntity;
        if ( servantEntity )
        {
          v11 = (CommonUI_o *)this;
          v13 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
          v12 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v37.fields.currentCryptoKey = v13;
          *(_QWORD *)&v37.fields.fakeValue = v12;
          v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v37, 0);
          v15 = (ServantLeaderInfo_o *)sub_1C7BD34(ServantLeaderInfo_TypeInfo);
          ServantLeaderInfo___ctor_44092792(v15, v14, 0, 1, 0);
          v16 = (ServantStatusDialog_EndDelegate_o *)sub_1C7BD34(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v16,
            (Il2CppObject *)v6,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0);
          if ( v11 )
          {
            CommonUI__OpenServantStatusDialog_31494808(v11, 7, v15, v16, 0);
            return;
          }
        }
      }
LABEL_42:
      sub_1C7BD40(this, memberItem);
    }
  }
  else
  {
    v17 = v6->fields.enableBtn;
    if ( !v17 )
      goto LABEL_42;
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t, const MethodInfo *))v17->fields.invoke_impl)(
      v17->fields.method_code,
      0,
      v17->fields.method,
      method);
    v18 = Method_BonusSelectSummonConfirmDialog_OnClick__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    v20 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.itemList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v35,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v36 = v35;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
      if ( !v21 )
        break;
      if ( !v36.fields._current )
        sub_1C7BD40(v21, v22);
      klass = v36.fields._current[8].klass;
      if ( !klass )
        sub_1C7BD40(v21, v22);
      fields = klass->_1.fields;
      if ( fields )
      {
        v26 = fields[2];
        v25 = fields[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v26;
        *(_QWORD *)&v38.fields.fakeValue = v25;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v38, 0);
        if ( !v20 )
          sub_1C7BD40(v27, (unsigned int)v27);
        items = v20->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1C7BD40(v27, (unsigned int)v27);
        size = v20->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v20,
            v27,
            *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          items->m_Items[size] = v27;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.baseWindow;
    if ( !this )
      goto LABEL_42;
    this = (BonusSelectSummonConfirmDialog_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_42;
    this = (BonusSelectSummonConfirmDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    if ( !v20 )
      goto LABEL_42;
    servantSelectMenu = v6->fields.servantSelectMenu;
    v32 = System_Collections_Generic_List_int___ToArray(
            v20,
            (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
    v33 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)v6, Method_BonusSelectSummonConfirmDialog__OnClick_b__28_0__, 0);
    if ( !servantSelectMenu )
      goto LABEL_42;
    BonusSelectSummonPartyServantSelectMenu__Open(
      servantSelectMenu,
      memberItem,
      v32,
      v33,
      v6->fields.gachaDetailEntity,
      v34);
  }
}


void BonusSelectSummonConfirmDialog__OnClickCancel(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CEA971 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    byte_4CEA971 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
    BonusSelectSummonConfirmDialog__Close_35817932(this, 0, v5);
  }
}


void BonusSelectSummonConfirmDialog__OnClickDecide(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isButtonEnable; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CEA970 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
    byte_4CEA970 = 1;
  }
  v3 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  isButtonEnable = this->fields.isButtonEnable;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
    BonusSelectSummonConfirmDialog__Close_35817932(this, 0, v6);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void BonusSelectSummonConfirmDialog__Open(
        BonusSelectSummonConfirmDialog_o *this,
        int32_t gachaId,
        BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn,
        BonusSelectSummonConfirmDialog_ClickDelegate_o *func,
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v13; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *Entity; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *buttonDecideLabel; // x21
  UILabel_o *buttonCancelLabel; // x21
  System_Action_o *v57; // x19

  if ( (byte_4CEA966 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass22_0__Open_b__0__);
    sub_1C7BAE8(&BonusSelectSummonConfirmDialog___c__DisplayClass22_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_2954/*"BONUS_SELECT_SERVANT_SELECT_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_12481/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/);
    byte_4CEA966 = 1;
  }
  v13 = sub_1C7BD34(BonusSelectSummonConfirmDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endOpenCallback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)endOpenCallback, v22, v23, v24, v25, v26, v27);
  this->fields.clickFunc = func;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v28, v29, v30, v31, v32, v33);
  this->fields.enableBtn = enableBtn;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.enableBtn, (int32_t)enableBtn, v34, v35, v36, v37, v38, v39);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.tryGetBonusSelectData,
    (int32_t)tryGetBonusSelectData,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.gachaId = gachaId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GachaDetailMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             gachaId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
  this->fields.gachaDetailEntity = (struct GachaDetailEntity_o *)Entity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.gachaDetailEntity,
    (int32_t)Entity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_12481/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/,
                                                                  0);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaDetailEntity;
  if ( !Master_object )
    goto LABEL_17;
  messageLabel = this->fields.messageLabel;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaDetailEntity__GetSummonBonusSelectDialogMessage(
                                                                  (GachaDetailEntity_o *)Master_object,
                                                                  0);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_2954/*"BONUS_SELECT_SERVANT_SELECT_DECIDE"*/,
                                                                        0),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, (System_String_o *)Master_object, 0),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/,
                                                                        0),
        !buttonCancelLabel) )
  {
LABEL_17:
    sub_1C7BD40(Master_object, v15);
  }
  UILabel__set_text(buttonCancelLabel, (System_String_o *)Master_object, 0);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v57 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v13,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass22_0__Open_b__0__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v57, 1, 0);
}


void BonusSelectSummonConfirmDialog__SaveSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  const MethodInfo *v4; // x1
  void *SelectBonusData; // x0
  Il2CppObject *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject **v13; // x19
  SummonControl_c *v14; // x0
  Il2CppObject *String_71828452; // x22
  System_Collections_Generic_List_object__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Func_object__bool__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w21
  Il2CppObject *v26; // x2
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Object_array *v31; // x19
  System_String_o *Empty; // x19
  SummonControl_c *v33; // x0

  if ( (byte_4CEA96E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_SelectBonusData___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_SelectBonusData___);
    sub_1C7BAE8(&System_Func_SelectBonusData__bool__TypeInfo);
    sub_1C7BAE8(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SelectBonusData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_SelectBonusData__TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&SummonControl_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass32_0__SaveSelectBonusData_b__0__);
    sub_1C7BAE8(&BonusSelectSummonConfirmDialog___c__DisplayClass32_0_TypeInfo);
    byte_4CEA96E = 1;
  }
  v3 = sub_1C7BD34(BonusSelectSummonConfirmDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  SelectBonusData = BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v4);
  if ( !v3 )
    goto LABEL_33;
  *(_QWORD *)(v3 + 16) = SelectBonusData;
  v13 = (Il2CppObject **)(v3 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)SelectBonusData, v7, v8, v9, v10, v11, v12);
  v14 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_71828452 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71828452(
                                      v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SelectBonusData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_71828452, 0) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                                 String_71828452,
                                                                 (const MethodInfo_31DEFB4 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v16 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v17,
                                                         (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v18 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_SelectBonusData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v3,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass32_0__SaveSelectBonusData_b__0__,
    0);
  SelectBonusData = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v16,
                              (System_Func_T__bool__o *)v18,
                              (const MethodInfo_3159728 *)Method_BasicHelper_Any_SelectBonusData___);
  if ( ((unsigned __int8)SelectBonusData & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_33;
    if ( v16->fields._size >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        SelectBonusData = System_Collections_Generic_List_object___get_Item(
                            v16,
                            v25,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SelectBonusData__get_Item__);
        if ( !SelectBonusData )
          break;
        v26 = *v13;
        if ( !*v13 )
          break;
        if ( *((_DWORD *)SelectBonusData + 4) == LODWORD(v26[1].klass) )
          System_Collections_Generic_List_object___set_Item(
            v16,
            v25,
            v26,
            (const MethodInfo_383EB80 *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        if ( ++v25 >= v16->fields._size )
          goto LABEL_25;
      }
LABEL_33:
      sub_1C7BD40(SelectBonusData, v6);
    }
  }
  else
  {
    if ( !v16 )
      goto LABEL_33;
    v6 = *v13;
    items = v16->fields._items;
    v28 = Method_System_Collections_Generic_List_SelectBonusData__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_33;
    size = v16->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v6,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v6;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v6, v19, v20, v21, v22, v23, v24);
    }
  }
LABEL_25:
  if ( v16->fields._size <= 0 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  else
  {
    v31 = System_Collections_Generic_List_object___ToArray(
            v16,
            (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Empty = JsonManager__toJson(&v31->obj, 0, 0, 0);
  }
  v33 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v33 = SummonControl_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v33->static_fields->BONUS_SELECTSUMMON_SAVEKEY, Empty, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void BonusSelectSummonConfirmDialog__SetBackBtn(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CEA972 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15699/*"Window/CancelButton"*/);
    byte_4CEA972 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_15699/*"Window/CancelButton"*/, 0);
}


void BonusSelectSummonConfirmDialog__SetLoadSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v2; // x19
  struct BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData; // x8
  __int64 v4; // x21
  __int64 v5; // x8
  unsigned __int64 v6; // x23
  __int64 v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  BonusSelectSummonPartyOrganizationListViewItem_o *klass; // x8
  struct GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x9
  int32_t slot; // w2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF
  __int64 v16; // [xsp+38h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4CEA96D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    this = (BonusSelectSummonConfirmDialog_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    byte_4CEA96D = 1;
  }
  v16 = 0;
  memset(&v15, 0, sizeof(v15));
  tryGetBonusSelectData = v2->fields.tryGetBonusSelectData;
  if ( !tryGetBonusSelectData )
    goto LABEL_28;
  this = (BonusSelectSummonConfirmDialog_o *)((__int64 (__fastcall *)(intptr_t, __int64 *, _QWORD, intptr_t))tryGetBonusSelectData->fields.invoke_impl)(
                                               tryGetBonusSelectData->fields.method_code,
                                               &v16,
                                               (unsigned int)v2->fields.gachaId,
                                               tryGetBonusSelectData->fields.method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_28;
    v4 = *(_QWORD *)(v16 + 24);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 24);
      if ( (int)v5 >= 1 )
      {
        v6 = 0;
        while ( 1 )
        {
          if ( v6 >= (unsigned int)v5 )
            sub_1C7BD48(this);
          this = (BonusSelectSummonConfirmDialog_o *)v2->fields.itemList;
          if ( !this )
            break;
          v7 = *(_QWORD *)(v4 + 8 * v6 + 32);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v14,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v15 = v14;
          while ( 1 )
          {
            v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v15,
                   (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
            if ( !v8 )
              break;
            if ( !v15.fields._current )
              sub_1C7BD40(v8, v9);
            klass = (BonusSelectSummonPartyOrganizationListViewItem_o *)v15.fields._current[8].klass;
            if ( !klass )
              sub_1C7BD40(v8, v9);
            gachaBonusSelectEntity = klass->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v7 )
                sub_1C7BD40(v8, v9);
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == *(_DWORD *)(v7 + 20) )
              {
                if ( !v16 )
                  sub_1C7BD40(v8, v9);
                BonusSelectSummonPartyOrganizationListViewItem__Modify_35824396(
                  klass,
                  *(_DWORD *)(v16 + 16),
                  slot,
                  *(_DWORD *)(v7 + 28),
                  v10);
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v15,
            (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
          LODWORD(v5) = *(_DWORD *)(v4 + 24);
          if ( (__int64)++v6 >= (int)v5 )
            goto LABEL_26;
        }
LABEL_28:
        sub_1C7BD40(this, method);
      }
LABEL_26:
      BonusSelectSummonConfirmDialog__Modify(v2, method);
    }
  }
}


void BonusSelectSummonConfirmDialog___Close_b__25_0(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEA974 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA974 = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
}


void BonusSelectSummonConfirmDialog___OnClick_b__28_0(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  __int64 v4; // x1
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x8
  const MethodInfo *v6; // x1

  BonusSelectSummonConfirmDialog__Modify(this, method);
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (((void (__fastcall *)(intptr_t, __int64, intptr_t))enableBtn->fields.invoke_impl)(
          enableBtn->fields.method_code,
          1,
          enableBtn->fields.method),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v6),
        (baseWindow = this->fields.baseWindow) == 0)
    || (baseWindow = UnityEngine_GameObject__get_gameObject(baseWindow, 0)) == 0
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0),
        (baseWindow = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0)
    || (baseWindow = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0)) == 0 )
  {
    sub_1C7BD40(baseWindow, v4);
  }
  UnityEngine_GameObject__SetActive(baseWindow, 1, 0);
}


void BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAD170;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAD128;
}


System_IAsyncResult_o *BonusSelectSummonConfirmDialog_ClickDelegate__BeginInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CEA977 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CEA977 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  char v14; // w21
  char v15; // w0
  Il2CppObject *m_target; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_1AACED4;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 1 )
    {
      if ( this->fields.method_is_virtual )
      {
        v14 = sub_1C7BBA0(method);
        v15 = sub_1C7C134(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_1AACFF8;
          else
            v13 = sub_1AACFAC;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_1AACF20;
        }
        else
        {
          v13 = sub_1AACEEC;
        }
      }
      else
      {
        v13 = sub_1AACEAC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AACE54;
}


System_IAsyncResult_o *BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__BeginInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = isLongTap;
  if ( (byte_4CEA975 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CEA975 = 1;
  }
  v11[2] = 0;
  v11[0] = memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v11, callback, object);
}


void BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__Invoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    memberItem,
    isLongTap,
    this->fields.method);
}


void BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AAD0F0;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AAD114;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AAD08C;
}


System_IAsyncResult_o *BonusSelectSummonConfirmDialog_TryGetBonusSelectData__BeginInvoke(
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
  if ( (byte_4CEA976 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CEA976 = 1;
  }
  v12 = 0;
  v13 = 0;
  v11 = *data;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v11, callback, object);
}


bool BonusSelectSummonConfirmDialog_TryGetBonusSelectData__EndInvoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  SelectBonusData_o **v6; // [xsp+8h] [xbp-8h] BYREF

  v6 = data;
  if ( !sub_1C7BAA0(result, &v6, result) )
    sub_1C7BD40(0, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0();
}


bool BonusSelectSummonConfirmDialog_TryGetBonusSelectData__Invoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        int32_t gachaId,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, SelectBonusData_o **, int32_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           data,
           gachaId,
           this->fields.method);
}


void BonusSelectSummonConfirmDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA978 & 1) == 0 )
  {
    sub_1C7BAE8(&BonusSelectSummonConfirmDialog___c_TypeInfo);
    byte_4CEA978 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BonusSelectSummonConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonConfirmDialog___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BonusSelectSummonConfirmDialog___c___ctor(BonusSelectSummonConfirmDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BonusSelectSummonConfirmDialog___c___Modify_b__30_0(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0 )
    sub_1C7BD40(this, itemObj);
  return listViewItem->fields.servantEntity == 0;
}


bool BonusSelectSummonConfirmDialog___c___Open_b__22_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0 )
    sub_1C7BD40(this, itemObj);
  return listViewItem->fields.servantEntity == 0;
}


void BonusSelectSummonConfirmDialog___c__DisplayClass22_0___ctor(
        BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BonusSelectSummonConfirmDialog___c__DisplayClass22_0___Open_b__0(
        BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *v2; // x19
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8
  UISprite_o *messageBg; // x20
  struct BonusSelectSummonConfirmDialog_o *v5; // x8
  struct BonusSelectSummonConfirmDialog_o *v6; // x8
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *itemList; // x21
  BonusSelectSummonConfirmDialog___c_c *v9; // x0
  System_Func_object__bool__o *_9__22_1; // x22
  Il2CppObject *v11; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Action_o *_9__2; // x21
  BaseDialog_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  v2 = this;
  if ( (byte_4CEA979 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
    sub_1C7BAE8(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog___c__Open_b__22_1__);
    sub_1C7BAE8(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass22_0__Open_b__2__);
    sub_1C7BAE8(&BonusSelectSummonConfirmDialog___c_TypeInfo);
    this = (BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *)sub_1C7BAE8(&StringLiteral_17229/*"bg_white"*/);
    byte_4CEA979 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  messageBg = _4__this->fields.messageBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_17229/*"bg_white"*/, 0);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  BonusSelectSummonConfirmDialog__CreateList((BonusSelectSummonConfirmDialog_o *)this, method);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_22;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *)v5->fields.rootObj;
  if ( !this )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  BonusSelectSummonConfirmDialog__SetLoadSelectBonusData((BonusSelectSummonConfirmDialog_o *)this, method);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_22;
  buttonDecide = v6->fields.buttonDecide;
  itemList = (System_Collections_Generic_List_T__o *)v6->fields.itemList;
  v9 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v9 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  _9__22_1 = (System_Func_object__bool__o *)v9->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BonusSelectSummonConfirmDialog___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__22_1 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__22_1, v11, Method_BonusSelectSummonConfirmDialog___c__Open_b__22_1__, 0);
    static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__22_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__22_1,
      (int32_t)_9__22_1,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *)BasicHelper__Any_object_(
                                                                     itemList,
                                                                     (System_Func_T__bool__o *)_9__22_1,
                                                                     (const MethodInfo_3159728 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
    goto LABEL_22;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))buttonDecide->klass->vtable._5_set_isEnabled.methodPtr)(
                                                                     buttonDecide,
                                                                     ((unsigned __int8)this & 1) == 0,
                                                                     buttonDecide->klass->vtable._5_set_isEnabled.method);
  _9__2 = v2->fields.__9__2;
  v20 = (BaseDialog_o *)v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass22_0__Open_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v21, v22, v23, v24, v25, v26);
  }
  if ( !v20 )
LABEL_22:
    sub_1C7BD40(this, method);
  BaseDialog__Open(v20, _9__2, 1, 0, 0);
}


void BonusSelectSummonConfirmDialog___c__DisplayClass22_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(this, method);
  _4__this->fields.isButtonEnable = 1;
  ActionExtensions__Call(this->fields.endOpenCallback, 0);
}


void BonusSelectSummonConfirmDialog___c__DisplayClass32_0___ctor(
        BonusSelectSummonConfirmDialog___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BonusSelectSummonConfirmDialog___c__DisplayClass32_0___SaveSelectBonusData_b__0(
        BonusSelectSummonConfirmDialog___c__DisplayClass32_0_o *this,
        SelectBonusData_o *x,
        const MethodInfo *method)
{
  struct SelectBonusData_o *data; // x8

  if ( !x || (data = this->fields.data) == 0 )
    sub_1C7BD40(this, x);
  return x->fields.gachaId == data->fields.gachaId;
}