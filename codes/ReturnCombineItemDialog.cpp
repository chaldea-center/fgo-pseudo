void ReturnCombineItemDialog___ctor(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2B347 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C2B347 = 1;
  }
  *(_QWORD *)&this->fields.ItemIconScale = 0x743F333333LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ReturnCombineItemDialog__ClearItemList(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  ReturnCombineItemDialog___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__9_0; // x21
  Il2CppObject *v6; // x22
  struct ReturnCombineItemDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_GameObject__o *v10; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_4C2B341 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_GameObject__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C2D490(&Method_ReturnCombineItemDialog___c__ClearItemList_b__9_0__);
    sub_1C2D490(&ReturnCombineItemDialog___c_TypeInfo);
    byte_4C2B341 = 1;
  }
  v3 = ReturnCombineItemDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !ReturnCombineItemDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReturnCombineItemDialog___c_TypeInfo);
    v3 = ReturnCombineItemDialog___c_TypeInfo;
  }
  _9__9_0 = (System_Action_object__o *)v3->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ReturnCombineItemDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__9_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__9_0, v6, Method_ReturnCombineItemDialog___c__ClearItemList_b__9_0__, 0);
    static_fields = ReturnCombineItemDialog___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Action_GameObject__o *)_9__9_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v8, v9);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__9_0,
          (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v10 = this->fields.objectList) == 0) )
  {
    sub_1C2D6EC(v3, method);
  }
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
}


void ReturnCombineItemDialog__Close(
        ReturnCombineItemDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C2B344 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ReturnCombineItemDialog_OnCloseEnd__);
    byte_4C2B344 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ReturnCombineItemDialog_OnCloseEnd__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v6, 0);
}


void ReturnCombineItemDialog__CreateReturnItemList(
        ReturnCombineItemDialog_o *this,
        int64_t qpNum,
        System_Int64_array *svtIds,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  __int64 Entity; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  __int64 v12; // x20
  __int64 v13; // x24
  int32_t v14; // w26
  __int64 v15; // x25
  int32_t monitor; // w27
  int64_t v17; // x28
  UnityEngine_Transform_o *listRoot; // x25
  Il2CppObject *itemIconPrefab; // x29
  UnityEngine_GameObject_o *v20; // x25
  UnityEngine_Transform_o *v21; // x29
  ItemIconComponent_o *v22; // x29
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B342 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B342 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)svtIds, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
    Entity = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !svtIds )
LABEL_40:
      sub_1C2D6EC(Entity, v8);
    max_length = svtIds->max_length;
    if ( (__int64)((max_length << 32) + 0x100000000LL) >= 1 )
    {
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Entity;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v14 = v13 ? 1 : 2;
        if ( !v13 )
          break;
        if ( (int)v13 - 1 >= (unsigned int)max_length )
          sub_1C2D6F4(Entity, v8, v9);
        if ( !v11 )
          goto LABEL_40;
        Entity = (__int64)DataMasterBase_object__object__long___GetEntity(
                            v11,
                            *(&svtIds->max_length + v13),
                            (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v15 = Entity;
        if ( !Entity )
          Entity = v12;
        if ( v15 )
        {
          if ( !Entity )
            goto LABEL_40;
          Entity = UserServantEntity__getSvtId((UserServantEntity_o *)Entity, 0);
          monitor = Entity;
          v17 = -1;
          v12 = v15;
          if ( (Entity & 0x80000000) == 0 )
            goto LABEL_23;
        }
LABEL_38:
        max_length = svtIds->max_length;
        if ( ++v13 >= (int)max_length + 1 )
          return;
      }
      if ( !Master_object )
        goto LABEL_40;
      monitor = (int32_t)Master_object[4].monitor;
      v17 = qpNum;
      if ( monitor < 0 )
        goto LABEL_38;
LABEL_23:
      listRoot = this->fields.listRoot;
      itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Entity = (__int64)UnityEngine_Object__Instantiate_object__51752420(
                          itemIconPrefab,
                          listRoot,
                          (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
      if ( !Entity )
        goto LABEL_40;
      v20 = (UnityEngine_GameObject_o *)Entity;
      Entity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Entity, 0);
      v21 = (UnityEngine_Transform_o *)Entity;
      if ( !byte_4C20DA1 )
      {
        Entity = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v21 )
        goto LABEL_40;
      UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Entity = (__int64)UnityEngine_GameObject__get_transform(v20, 0);
      if ( !Entity )
        goto LABEL_40;
      v31.fields.x = this->fields.ItemIconScale;
      v31.fields.y = v31.fields.x;
      v31.fields.z = v31.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Entity, v31, 0);
      Entity = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                          v20,
                          (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
      if ( !Entity )
        goto LABEL_40;
      v22 = (ItemIconComponent_o *)Entity;
      ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)Entity, v14, monitor, v17, 0, 0);
      ItemIconComponent__SetCondensedScale(v22, this->fields.CounterLabelMaxWidth, 0);
      UnityEngine_GameObject__SetActive(v20, 1, 0);
      Entity = (__int64)this->fields.listRoot;
      if ( !Entity )
        goto LABEL_40;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Entity, 0);
      Entity = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                          gameObject,
                          (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
      if ( !Entity )
        goto LABEL_40;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Entity + 440LL))(
        Entity,
        *(_QWORD *)(*(_QWORD *)Entity + 448LL));
      Entity = (__int64)this->fields.objectList;
      if ( !Entity )
        goto LABEL_40;
      v26 = *(_QWORD *)(Entity + 16);
      v27 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Entity + 28);
      if ( !v26 )
        goto LABEL_40;
      v28 = *(int *)(Entity + 24);
      if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Entity,
          (Il2CppObject *)v20,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = v26 + 8 * v28;
        *(_DWORD *)(Entity + 24) = v28 + 1;
        *(_QWORD *)(v29 + 32) = v20;
        sub_1C2D434((CGThumbnailListItem_o *)(v29 + 32), (int32_t)v20, v24, v25);
      }
      goto LABEL_38;
    }
  }
}


void ReturnCombineItemDialog__Init(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C2B340 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B340 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        ReturnCombineItemDialog__ClearItemList(this, v4),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ReturnCombineItemDialog__OnClickClose(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C2B345 & 1) == 0 )
  {
    sub_1C2D490(&Method_ReturnCombineItemDialog_OnClickClose__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B345 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_ReturnCombineItemDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ReturnCombineItemDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ReturnCombineItemDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v6);
    CommonUI__CloseReturnCombineItemDialog((CommonUI_o *)Instance, 0);
  }
}


void ReturnCombineItemDialog__OnCloseEnd(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0;
  sub_1C2D434(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0);
}


void ReturnCombineItemDialog__OnEnable(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C2B346 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3073/*"BaseWindow/CloseButton"*/);
    byte_4C2B346 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_3073/*"BaseWindow/CloseButton"*/, 0);
}


void ReturnCombineItemDialog__Open(
        ReturnCombineItemDialog_o *this,
        int64_t qpNum,
        System_Int64_array *svtIds,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *closeButtonLabel; // x22
  const MethodInfo *v11; // x3

  if ( (byte_4C2B343 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11135/*"RETURN_COMBINE_ITEM_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_11134/*"RETURN_COMBINE_ITEM_DIALOG_BUTTON_TEXT"*/);
    byte_4C2B343 = 1;
  }
  ReturnCombineItemDialog__Init(this, (const MethodInfo *)qpNum);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11135/*"RETURN_COMBINE_ITEM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v8, 0),
        closeButtonLabel = this->fields.closeButtonLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11134/*"RETURN_COMBINE_ITEM_DIALOG_BUTTON_TEXT"*/, 0),
        !closeButtonLabel) )
  {
    sub_1C2D6EC(v8, v9);
  }
  UILabel__set_text(closeButtonLabel, v8, 0);
  ReturnCombineItemDialog__CreateReturnItemList(this, qpNum, svtIds, v11);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void ReturnCombineItemDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2B348 & 1) == 0 )
  {
    sub_1C2D490(&ReturnCombineItemDialog___c_TypeInfo);
    byte_4C2B348 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ReturnCombineItemDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ReturnCombineItemDialog___c_TypeInfo->static_fields->__9 = (struct ReturnCombineItemDialog___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ReturnCombineItemDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ReturnCombineItemDialog___c___ctor(ReturnCombineItemDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ReturnCombineItemDialog___c___ClearItemList_b__9_0(
        ReturnCombineItemDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4C2B349 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B349 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)obj, 0);
  }
}