void __fastcall BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F8BEB & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F8BEB = 1;
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

  BonusSelectSummonConfirmDialog__Close_32730084(this, 0LL, v2);
}


void __fastcall BonusSelectSummonConfirmDialog__Close_32730084(
        BonusSelectSummonConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20

  if ( (byte_49F8BDF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&AtlasManager_TypeInfo, v6);
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49F8BDF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.isButtonEnable = 0;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 1, 0LL);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
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
  __int64 v13; // x2
  GachaBonusSelectEntity_array *v14; // x23
  signed int max_length; // w8
  unsigned int v16; // w24
  GachaBonusSelectEntity_o *v17; // x21
  int32_t slot; // w22
  BonusSelectSummonPartyOrganizationListViewItem_o *v19; // x20
  const MethodInfo *v20; // x4
  Il2CppObject *prefab; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v26; // x22
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v34; // x8
  GachaBonusSelectEntity_array *entityArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F8BE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog_OnClick__, method);
    sub_1B640C8(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo, v10);
    byte_49F8BE1 = 1;
  }
  entityArray = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaBonusSelectMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Master_object = (GachaBonusSelectMaster_o *)GachaBonusSelectMaster__TryGetEntityArray(
                                                Master_object,
                                                &entityArray,
                                                this->fields.gachaId,
                                                0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v14 = entityArray;
    if ( !entityArray )
      goto LABEL_24;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
          sub_1B6432C(Master_object, v12);
        v17 = v14->m_Items[v16];
        if ( !v17 )
          break;
        slot = v17->fields.slot;
        v19 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_1B64314(
                                                                    BonusSelectSummonPartyOrganizationListViewItem_TypeInfo,
                                                                    v12,
                                                                    v13);
        BonusSelectSummonPartyOrganizationListViewItem___ctor(v19, slot, 0LL, v17, v20);
        Master_object = (GachaBonusSelectMaster_o *)this->fields.rootObj;
        if ( !Master_object )
          break;
        prefab = (Il2CppObject *)this->fields.prefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (GachaBonusSelectMaster_o *)UnityEngine_Object__Instantiate_object__49003980(
                                                      prefab,
                                                      transform,
                                                      (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        if ( !Master_object )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v26 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_1B64314(
                                                                          BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo,
                                                                          v24,
                                                                          v25);
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
          v26,
          (Il2CppObject *)this,
          (intptr_t)Method_BonusSelectSummonConfirmDialog_OnClick__,
          v27);
        if ( !Component_object )
          break;
        BonusSelectSummonPartyOrganizationListViewObject__Init(
          (BonusSelectSummonPartyOrganizationListViewObject_o *)Component_object,
          v19,
          v26,
          v28);
        Master_object = (GachaBonusSelectMaster_o *)this->fields.itemList;
        if ( !Master_object )
          break;
        v31 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v32 = Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v31 )
          break;
        MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v31 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            Component_object,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = v31 + 8 * MasterName_k__BackingField_low;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_QWORD *)(v34 + 32) = Component_object;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 32), (int32_t)Component_object, v29, v30);
        }
        max_length = v14->max_length;
        if ( (int)++v16 >= max_length )
          return;
      }
LABEL_24:
      sub_1B64324(Master_object);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F8BE0 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49F8BE0 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v14.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
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
  if ( (byte_49F8BE3 & 1) == 0 )
  {
    this = (BonusSelectSummonConfirmDialog_o *)sub_1B640C8(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 isDecide);
    byte_49F8BE3 = 1;
  }
  enableBtn = v3->fields.enableBtn;
  if ( !enableBtn
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))enableBtn->fields.m_target)(
          enableBtn->fields.original_method_info,
          1LL,
          *(_QWORD *)&enableBtn->fields.extra_arg),
        BonusSelectSummonConfirmDialog__SetBackBtn(v3, v5),
        (this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(this);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)this, 0LL, 0LL);
}


SelectBonusData_o *__fastcall BonusSelectSummonConfirmDialog__GetSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  _DWORD *v15; // x28
  _DWORD *v16; // x29
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppClass *klass; // x8
  _DWORD *fields; // x9
  int v22; // w22
  int v23; // w23
  _DWORD *events; // x8
  int v25; // w24
  int v26; // w19
  __int64 v27; // x21
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x21
  System_Object_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  BonusSelectSummonConfirmDialog_o *v42; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49F8BE7 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonus__Add__, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonus__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonus___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_SelectBonus__TypeInfo, v10);
    sub_1B640C8(&SelectBonusData_TypeInfo, v11);
    sub_1B640C8(&SelectBonus_TypeInfo, v12);
    byte_49F8BE7 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SelectBonus__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  v42 = this;
  if ( !itemList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v15 = 0LL;
  v16 = 0LL;
  v44 = v43;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    if ( !v17 )
      break;
    if ( !v44.fields._current )
      sub_1B64324(v17);
    klass = v44.fields._current[8].klass;
    if ( !klass )
      sub_1B64324(v17);
    fields = klass->_1.fields;
    if ( fields )
      v16 = klass->_1.fields;
    if ( fields )
    {
      if ( !v16 )
        sub_1B64324(v17);
      v22 = v16[5];
      v23 = fields[6];
    }
    else
    {
      v22 = -1;
      v23 = -1;
    }
    events = klass->_1.events;
    if ( events )
      v15 = events;
    if ( events )
    {
      if ( !v15 )
        sub_1B64324(v17);
      v25 = v15[5];
      v26 = events[6];
    }
    else
    {
      v25 = -1;
      v26 = -1;
    }
    v27 = sub_1B64314(SelectBonus_TypeInfo, v18, v19);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    *(_DWORD *)(v27 + 16) = v22;
    *(_DWORD *)(v27 + 20) = v23;
    *(_DWORD *)(v27 + 24) = v25;
    *(_DWORD *)(v27 + 28) = v26;
    if ( !v13 )
      sub_1B64324(v28);
    items = v13->fields._items;
    v32 = Method_System_Collections_Generic_List_SelectBonus__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1B64324(v28);
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        (Il2CppObject *)v27,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v27;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), v27, v29, v30);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v37 = sub_1B64314(SelectBonusData_TypeInfo, v35, v36);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 || (*(_DWORD *)(v37 + 16) = v42->fields.gachaId, !v13) )
LABEL_34:
    sub_1B64324(itemList);
  v38 = System_Collections_Generic_List_object___ToArray(
          v13,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v37 + 24) = v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)v38, v39, v40);
  return (SelectBonusData_o *)v37;
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct UnityEngine_GameObject_o *OrganizationListViewItemPrefab_k__BackingField; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o **p_servantSelectMenu; // x21
  UnityEngine_Object_o *servantSelectMenu; // x22
  const MethodInfo *v17; // x1
  Il2CppObject *ServantSelectMenuPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49F8BDD & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___, assetManager);
    sub_1B640C8(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49F8BDD = 1;
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.prefab,
      (int32_t)OrganizationListViewItemPrefab_k__BackingField,
      v12,
      v13);
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
    titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49003980(
                                               ServantSelectMenuPrefab_k__BackingField,
                                               transform,
                                               (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    if ( !titleLabel )
LABEL_25:
      sub_1B64324(titleLabel);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         titleLabel,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (struct BonusSelectSummonPartyServantSelectMenu_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.servantSelectMenu,
      (int32_t)Component_object,
      v21,
      v22);
  }
  titleLabel = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_25;
  BonusSelectSummonPartyServantSelectMenu__Init((BonusSelectSummonPartyServantSelectMenu_o *)titleLabel, v17);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v25, v26, v27);
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
  __int64 v12; // x1
  __int64 v13; // x2
  BonusSelectSummonConfirmDialog___c_c *v14; // x0
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *v16; // x21
  System_Func_object__bool__o *_9__29_0; // x22
  Il2CppObject *v18; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F8BE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v5);
    sub_1B640C8(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v7);
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, v8);
    sub_1B640C8(&BonusSelectSummonConfirmDialog___c_TypeInfo, v9);
    byte_49F8BE4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v23.fields._current )
      sub_1B64324(0LL);
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v23.fields._current,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v14 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  buttonDecide = this->fields.buttonDecide;
  v16 = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v14 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  _9__29_0 = (System_Func_object__bool__o *)v14->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BonusSelectSummonConfirmDialog___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v14->static_fields->__9;
    _9__29_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo,
                                                v12,
                                                v13);
    System_Func_object__bool____ctor(_9__29_0, v18, Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, 0LL);
    static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__29_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v20, v21);
  }
  itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)BasicHelper__Any_object_(v16, (System_Func_T__bool__o *)_9__29_0, (const MethodInfo_2E24870 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_17:
    sub_1B64324(itemList);
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    ((unsigned __int8)itemList & 1) == 0,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  BonusSelectSummonConfirmDialog__SaveSelectBonusData(this, v22);
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
  __int64 v30; // x1
  __int64 v31; // x2
  ServantLeaderInfo_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  ServantStatusDialog_EndDelegate_o *v35; // x22
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *v36; // x8
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_int__o *v41; // x21
  _BOOL8 v42; // x0
  Il2CppClass *klass; // x8
  Il2CppClass *v44; // x8
  const char *namespaze; // x22
  const char *name; // x23
  __int64 v47; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  BonusSelectSummonPartyServantSelectMenu_o *servantSelectMenu; // x22
  System_Int32_array *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  System_Action_o *v55; // x23
  const MethodInfo *v56; // x4
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  v6 = this;
  if ( (byte_49F8BE2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, memberItem);
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__, v7);
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog_OnClick__, v8);
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, v9);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B640C8(&ServantLeaderInfo_TypeInfo, v20);
    this = (BonusSelectSummonConfirmDialog_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    byte_49F8BE2 = 1;
  }
  memset(&v58, 0, sizeof(v58));
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
          v23 = (_QWORD *)sub_1B640E0(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v24 = (System_Reflection_MethodBase_o *)sub_1B640AC(v23, v23[4]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
        this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantEntity = memberItem->fields.servantEntity;
        if ( servantEntity )
        {
          v26 = (CommonUI_o *)this;
          v28 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
          v27 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = v28;
          *(_QWORD *)&v59.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v59, 0LL);
          v32 = (ServantLeaderInfo_o *)sub_1B64314(ServantLeaderInfo_TypeInfo, v30, v31);
          ServantLeaderInfo___ctor_40150640(v32, v29, 0, 1, 0LL);
          v35 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v33, v34);
          ServantStatusDialog_EndDelegate___ctor(
            v35,
            (Il2CppObject *)v6,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0LL);
          if ( v26 )
          {
            CommonUI__OpenServantStatusDialog_30357468(v26, 7, v32, v35, 0LL);
            return;
          }
        }
      }
LABEL_42:
      sub_1B64324(this);
    }
  }
  else
  {
    v36 = v6->fields.enableBtn;
    if ( !v36 )
      goto LABEL_42;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, const MethodInfo *))v36->fields.m_target)(
      v36->fields.original_method_info,
      0LL,
      *(_QWORD *)&v36->fields.extra_arg,
      method);
    v37 = Method_BonusSelectSummonConfirmDialog_OnClick__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 83) & 2) != 0 )
      v37 = (_QWORD *)sub_1B640E0(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v38 = (System_Reflection_MethodBase_o *)sub_1B640AC(v37, v37[4]);
    OverwriteAssetSoundName__PlaySystemSe(v38, 0, 0LL);
    v41 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v39, v40);
    System_Collections_Generic_List_int____ctor(
      v41,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.itemList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v57,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v58 = v57;
    while ( 1 )
    {
      v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v58,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
      if ( !v42 )
        break;
      if ( !v58.fields._current )
        sub_1B64324(v42);
      klass = v58.fields._current[8].klass;
      if ( !klass )
        sub_1B64324(v42);
      v44 = klass->_1.klass;
      if ( v44 )
      {
        name = v44->_1.name;
        namespaze = v44->_1.namespaze;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v60.fields.currentCryptoKey = name;
        *(_QWORD *)&v60.fields.fakeValue = namespaze;
        v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v60, 0LL);
        if ( !v41 )
          sub_1B64324(v47);
        items = v41->fields._items;
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++v41->fields._version;
        if ( !items )
          sub_1B64324(v47);
        size = v41->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v41,
            v47,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v41->fields._size = size + 1;
          items->m_Items[size + 1] = v47;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v58,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
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
    if ( !v41 )
      goto LABEL_42;
    servantSelectMenu = v6->fields.servantSelectMenu;
    v52 = System_Collections_Generic_List_int___ToArray(
            v41,
            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    v55 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v53, v54);
    System_Action___ctor(v55, (Il2CppObject *)v6, Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, 0LL);
    if ( !servantSelectMenu )
      goto LABEL_42;
    BonusSelectSummonPartyServantSelectMenu__Open(servantSelectMenu, memberItem, v52, v55, v56);
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

  if ( (byte_49F8BE9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__, method);
    byte_49F8BE9 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    BonusSelectSummonConfirmDialog__Close_32730084(this, 0LL, v5);
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

  if ( (byte_49F8BE8 & 1) == 0 )
  {
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__, method);
    byte_49F8BE8 = 1;
  }
  v3 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  isButtonEnable = this->fields.isButtonEnable;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    BonusSelectSummonConfirmDialog__Close_32730084(this, 0LL, v6);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
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
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *buttonDecideLabel; // x21
  UILabel_o *buttonCancelLabel; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x19

  if ( (byte_49F8BDE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&gachaId);
    sub_1B640C8(&AtlasManager_TypeInfo, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__, v15);
    sub_1B640C8(&BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_12270/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, v17);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v18);
    sub_1B640C8(&StringLiteral_3036/*"BONUS_SELECT_SERVANT_SELECT_DECIDE"*/, v19);
    sub_1B640C8(&StringLiteral_12272/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, v20);
    byte_49F8BDE = 1;
  }
  v21 = sub_1B64314(BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&gachaId, enableBtn);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_13;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)this, v23, v24);
  *(_QWORD *)(v21 + 24) = endOpenCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)endOpenCallback, v25, v26);
  this->fields.clickFunc = func;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v27, v28);
  this->fields.enableBtn = enableBtn;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.enableBtn, (int32_t)enableBtn, v29, v30);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.tryGetBonusSelectData,
    (int32_t)tryGetBonusSelectData,
    v31,
    v32);
  this->fields.gachaId = gachaId;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12272/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, v22, 0LL);
  messageLabel = this->fields.messageLabel;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12270/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v22, 0LL),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3036/*"BONUS_SELECT_SERVANT_SELECT_DECIDE"*/, 0LL),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, v22, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !buttonCancelLabel) )
  {
LABEL_13:
    sub_1B64324(v22);
  }
  UILabel__set_text(buttonCancelLabel, v22, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v21,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v39, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SaveSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v18; // x1
  __int64 v19; // x21
  const MethodInfo *v20; // x1
  void *SelectBonusData; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject **v24; // x19
  SummonControl_c *v25; // x0
  Il2CppObject *String_69086012; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Func_object__bool__o *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w21
  Il2CppObject *v37; // x2
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Object_array *v43; // x19
  System_String_o *Empty; // x19
  SummonControl_c *v45; // x0

  if ( (byte_49F8BE6 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_SelectBonusData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_SelectBonusData___, v4);
    sub_1B640C8(&System_Func_SelectBonusData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_SelectBonusData___, v6);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v14);
    sub_1B640C8(&string_TypeInfo, v15);
    sub_1B640C8(&SummonControl_TypeInfo, v16);
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__, v17);
    sub_1B640C8(&BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, v18);
    byte_49F8BE6 = 1;
  }
  v19 = sub_1B64314(BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  SelectBonusData = BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v20);
  if ( !v19 )
    goto LABEL_33;
  *(_QWORD *)(v19 + 16) = SelectBonusData;
  v24 = (Il2CppObject **)(v19 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)SelectBonusData, v22, v23);
  v25 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v25 = SummonControl_TypeInfo;
  }
  String_69086012 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69086012(
                                      v25->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SelectBonusData__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_69086012, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                                 String_69086012,
                                                                 (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v29 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v32,
                                                         (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v33 = (System_Func_object__bool__o *)sub_1B64314(System_Func_SelectBonusData__bool__TypeInfo, v30, v31);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v19,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__,
    0LL);
  SelectBonusData = (void *)BasicHelper__Any_object_(
                              (System_Collections_Generic_List_T__o *)v29,
                              (System_Func_T__bool__o *)v33,
                              (const MethodInfo_2E24870 *)Method_BasicHelper_Any_SelectBonusData___);
  if ( ((unsigned __int8)SelectBonusData & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_33;
    if ( v29->fields._size >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        SelectBonusData = System_Collections_Generic_List_object___get_Item(
                            v29,
                            v36,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SelectBonusData__get_Item__);
        if ( !SelectBonusData )
          break;
        v37 = *v24;
        if ( !*v24 )
          break;
        if ( *((_DWORD *)SelectBonusData + 4) == LODWORD(v37[1].klass) )
          System_Collections_Generic_List_object___set_Item(
            v29,
            v36,
            v37,
            (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        if ( ++v36 >= v29->fields._size )
          goto LABEL_25;
      }
LABEL_33:
      sub_1B64324(SelectBonusData);
    }
  }
  else
  {
    if ( !v29 )
      goto LABEL_33;
    v38 = *v24;
    items = v29->fields._items;
    v40 = Method_System_Collections_Generic_List_SelectBonusData__Add__;
    ++v29->fields._version;
    if ( !items )
      goto LABEL_33;
    size = v29->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        v38,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      v29->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v38;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v38, v34, v35);
    }
  }
LABEL_25:
  if ( v29->fields._size <= 0 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  else
  {
    v43 = System_Collections_Generic_List_object___ToArray(
            v29,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Empty = JsonManager__toJson(&v43->obj, 0, 0, 0LL);
  }
  v45 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v45 = SummonControl_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v45->static_fields->BONUS_SELECTSUMMON_SAVEKEY, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetBackBtn(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49F8BEA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15573/*"Window/CancelButton"*/, method);
    byte_49F8BEA = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_15573/*"Window/CancelButton"*/, 0LL);
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
  const MethodInfo *v7; // x1
  __int64 v8; // x21
  __int64 v9; // x8
  unsigned __int64 v10; // x23
  __int64 v11; // x20
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x4
  BonusSelectSummonPartyOrganizationListViewItem_o *klass; // x8
  struct GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x9
  int32_t slot; // w2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF
  __int64 v19; // [xsp+38h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_49F8BE5 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    this = (BonusSelectSummonConfirmDialog_o *)sub_1B640C8(
                                                 &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
                                                 v5);
    byte_49F8BE5 = 1;
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
    v8 = *(_QWORD *)(v19 + 24);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 24);
      if ( (int)v9 >= 1 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)v9 )
            sub_1B6432C(this, v7);
          this = (BonusSelectSummonConfirmDialog_o *)v2->fields.itemList;
          if ( !this )
            break;
          v11 = *(_QWORD *)(v8 + 8 * v10 + 32);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v17,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v18 = v17;
          while ( 1 )
          {
            v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v18,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
            if ( !v12 )
              break;
            if ( !v18.fields._current )
              sub_1B64324(v12);
            klass = (BonusSelectSummonPartyOrganizationListViewItem_o *)v18.fields._current[8].klass;
            if ( !klass )
              sub_1B64324(v12);
            gachaBonusSelectEntity = klass->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v11 )
                sub_1B64324(v12);
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == *(_DWORD *)(v11 + 20) )
              {
                if ( !v19 )
                  sub_1B64324(v12);
                BonusSelectSummonPartyOrganizationListViewItem__Modify_32736572(
                  klass,
                  *(_DWORD *)(v19 + 16),
                  slot,
                  *(_DWORD *)(v11 + 28),
                  v13);
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v18,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
          LODWORD(v9) = *(_DWORD *)(v8 + 24);
          if ( (__int64)++v10 >= (int)v9 )
            goto LABEL_26;
        }
LABEL_28:
        sub_1B64324(this);
      }
LABEL_26:
      BonusSelectSummonConfirmDialog__Modify(v2, v7);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog___Close_b__24_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8BEC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F8BEC = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___OnClick_b__27_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  struct BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x8
  const MethodInfo *v5; // x1

  BonusSelectSummonConfirmDialog__Modify(this, method);
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))enableBtn->fields.m_target)(
          enableBtn->fields.original_method_info,
          1LL,
          *(_QWORD *)&enableBtn->fields.extra_arg),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v5),
        (baseWindow = this->fields.baseWindow) == 0LL)
    || (baseWindow = UnityEngine_GameObject__get_gameObject(baseWindow, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (baseWindow = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL)) == 0LL )
  {
    sub_1B64324(baseWindow);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A7CF8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7CB0;
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
  if ( (byte_49F8BEF & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isDecide);
    byte_49F8BEF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  char v10; // w21
  char v11; // w0
  struct System_Reflection_MethodInfo_o *v12; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 2 )
    {
      v9 = (Il2CppObject *)sub_19A7A5C;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v10 = sub_1B64180(v6);
        v11 = sub_1B6463C(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19A7B80;
          else
            v9 = (Il2CppObject *)sub_19A7B34;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19A7AA8;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19A7A74;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19A7A34;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A79DC;
}


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
  if ( (byte_49F8BED & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, memberItem);
    byte_49F8BED = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19A7C78;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
LABEL_8:
    v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v10;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = (Il2CppObject *)sub_19A7C9C;
LABEL_6:
  this->fields.m_target = v9;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)&loc_19A7C14;
}


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
  if ( (byte_49F8BEE & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, data);
    byte_49F8BEE = 1;
  }
  v12 = 0LL;
  v13 = 0LL;
  v11 = *data;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v11, callback, object);
}


bool __fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData__EndInvoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  SelectBonusData_o **v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = data;
  if ( !sub_1B64080(result, &v5, result) )
    sub_1B64324(0LL);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8BF0 & 1) == 0 )
  {
    sub_1B640C8(&BonusSelectSummonConfirmDialog___c_TypeInfo, v1);
    byte_49F8BF0 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BonusSelectSummonConfirmDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields->__9 = (struct BonusSelectSummonConfirmDialog___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return listViewItem->fields.servantEntity == 0LL;
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Open_b__21_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_1B64324(this);
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
  const MethodInfo *v12; // x1
  struct BonusSelectSummonConfirmDialog_o *v13; // x8
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  struct BonusSelectSummonConfirmDialog_o *v17; // x8
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *itemList; // x21
  BonusSelectSummonConfirmDialog___c_c *v20; // x0
  System_Func_object__bool__o *_9__21_1; // x22
  Il2CppObject *v22; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *_9__2; // x21
  BaseDialog_o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3

  v2 = this;
  if ( (byte_49F8BF1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, v4);
    sub_1B640C8(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, v6);
    sub_1B640C8(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__, v7);
    sub_1B640C8(&BonusSelectSummonConfirmDialog___c_TypeInfo, v8);
    this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)sub_1B640C8(&StringLiteral_17104/*"bg_white"*/, v9);
    byte_49F8BF1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  messageBg = _4__this->fields.messageBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_17104/*"bg_white"*/, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  BonusSelectSummonConfirmDialog__CreateList((BonusSelectSummonConfirmDialog_o *)this, v12);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_22;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v13->fields.rootObj;
  if ( !this )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  BonusSelectSummonConfirmDialog__SetLoadSelectBonusData((BonusSelectSummonConfirmDialog_o *)this, v14);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_22;
  buttonDecide = v17->fields.buttonDecide;
  itemList = (System_Collections_Generic_List_T__o *)v17->fields.itemList;
  v20 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v20 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v20->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BonusSelectSummonConfirmDialog___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo,
                                                v15,
                                                v16);
    System_Func_object__bool____ctor(_9__21_1, v22, Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, 0LL);
    static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__21_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v24, v25);
  }
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)BasicHelper__Any_object_(
                                                                     itemList,
                                                                     (System_Func_T__bool__o *)_9__21_1,
                                                                     (const MethodInfo_2E24870 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
    goto LABEL_22;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
                                                                     buttonDecide,
                                                                     ((unsigned __int8)this & 1) == 0,
                                                                     buttonDecide->klass->vtable._6_OnInit.methodPtr);
  _9__2 = v2->fields.__9__2;
  v29 = (BaseDialog_o *)v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v30, v31);
  }
  if ( !v29 )
LABEL_22:
    sub_1B64324(this);
  BaseDialog__Open(v29, _9__2, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.gachaId == data->fields.gachaId;
}