void __fastcall ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A01751 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__, v3);
    sub_1B64870(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo, v4);
    byte_4A01751 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v5;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.iconList, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Close(
        ClassBoardAddClassDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A0174E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, closeCallback);
    sub_1B64870(&Method_ClassBoardAddClassDialog_OnCloseEnd__, v6);
    byte_4A0174E = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (int32_t)method,
    v3);
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__CreateServantClassIconComponents(
        ClassBoardAddClassDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ClassBoardAddClassDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ServantClassIconComponent__o *iconList; // x8
  int32_t size; // w8
  int v11; // w22
  Il2CppObject *iconPrefab; // x20
  Il2CppObject *v13; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  ClassBoardAddClassDialog_o *v20; // x1
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_4A01750 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, *(_QWORD *)&count);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v6);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ClassBoardAddClassDialog_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    byte_4A01750 = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1B64ACC(this, *(_QWORD *)&count);
  size = iconList->fields._size;
  if ( size < count )
  {
    v11 = count - size;
    if ( count - size >= 1 )
    {
      do
      {
        iconPrefab = (Il2CppObject *)v4->fields.iconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__Instantiate_object_(
                iconPrefab,
                (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v13,
            (UnityEngine_Component_o *)v4->fields.iconListParent,
            0LL);
          if ( !v13 )
            goto LABEL_17;
          v14 = (System_Collections_Generic_List_object__o *)v4->fields.iconList;
          this = (ClassBoardAddClassDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v13,
                                                 (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
          if ( !v14 )
            goto LABEL_17;
          items = v14->fields._items;
          v18 = Method_System_Collections_Generic_List_ServantClassIconComponent__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_17;
          v19 = v14->fields._size;
          v20 = this;
          if ( (unsigned int)v19 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)this,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + v19;
            v14->fields._size = v19 + 1;
            v21[4] = (Il2CppClass *)v20;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
          }
        }
        --v11;
      }
      while ( v11 );
    }
  }
}


void __fastcall ClassBoardAddClassDialog__Init(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ClassBoardAddClassDialog__SetupText(this, v3);
}


void __fastcall ClassBoardAddClassDialog__OnClickCloseButton(
        ClassBoardAddClassDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A0174D & 1) == 0 )
  {
    sub_1B64870(&Method_ClassBoardAddClassDialog_OnClickCloseButton__, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4A0174D = 1;
  }
  v3 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64888(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v6);
  CommonUI__CloseClassBoardAddClassDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ClassBoardAddClassDialog__OnCloseEnd(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0LL;
  sub_1B64814(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__Open(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *iconList; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  __int64 v24; // x8
  unsigned __int64 v25; // x22
  UILabel_o *contentLabel; // x21
  int v27; // w8
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4A0174C & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIGrid___, *(_QWORD *)&classBaseId);
    sub_1B64870(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1B64870(&DataManager_TypeInfo, v8);
    sub_1B64870(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__, v15);
    sub_1B64870(&LocalizationManager_TypeInfo, v16);
    sub_1B64870(&StringLiteral_3450/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/, v17);
    byte_4A0174C = 1;
  }
  entity = 0LL;
  memset(&v29, 0, sizeof(v29));
  if ( classIds )
  {
    v18 = *(_QWORD *)&classIds->max_length;
    if ( v18 )
    {
      ClassBoardAddClassDialog__CreateServantClassIconComponents(this, v18, (const MethodInfo *)classIds);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_39;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        iconList,
        (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
      v29 = v28;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v29,
                (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
      {
        if ( !v29.fields._current )
          sub_1B64ACC(0LL, v21);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29.fields._current, 0LL);
        if ( !gameObject )
          sub_1B64ACC(0LL, v23);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
      v24 = *(_QWORD *)&classIds->max_length;
      if ( (int)v24 >= 1 )
      {
        v25 = 0LL;
        while ( 1 )
        {
          iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
          if ( !iconList )
            break;
          if ( (__int64)v25 < iconList->fields._size )
          {
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v25,
                                                                      (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
            if ( v25 >= classIds->max_length )
              sub_1B64AD4(iconList, v19);
            if ( !iconList )
              break;
            ServantClassIconComponent__Set_37899704(
              (ServantClassIconComponent_o *)iconList,
              classIds->m_Items[v25 + 1],
              3,
              0LL);
            iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v25,
                                                                      (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)iconList,
                                                                      0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            v24 = *(_QWORD *)&classIds->max_length;
          }
          if ( (__int64)++v25 >= (int)v24 )
            goto LABEL_22;
        }
LABEL_39:
        sub_1B64ACC(iconList, v19);
      }
LABEL_22:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !iconList )
        goto LABEL_39;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)iconList,
             &entity,
             classBaseId,
             (const MethodInfo_30D61D4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      {
        contentLabel = this->fields.contentLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        iconList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3450/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/,
                                                                  0LL);
        if ( !entity )
          goto LABEL_39;
        iconList = (System_Collections_Generic_List_object__o *)System_String__Format(
                                                                  (System_String_o *)iconList,
                                                                  (Il2CppObject *)entity[1].monitor,
                                                                  0LL);
        if ( !contentLabel )
          goto LABEL_39;
        UILabel__set_text(contentLabel, (System_String_o *)iconList, 0LL);
      }
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_39;
      iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)iconList,
                                                                (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_39;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
        iconList,
        iconList->klass->vtable._9_unknown.methodPtr);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_39;
      if ( (int)classIds->max_length > 4 )
        v27 = 1;
      else
        v27 = 4;
      HIDWORD(iconList[2].klass) = v27;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


void __fastcall ClassBoardAddClassDialog__SetupText(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4A0174F & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_3451/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, v3);
    sub_1B64870(&StringLiteral_3733/*"COMMON_CONFIRM_CLOSE"*/, v4);
    byte_4A0174F = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3451/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_1B64ACC(v6, v7);
  }
  UILabel__set_text(closeButtonLabel, v6, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Validation(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *__fastcall ClassBoardAddClassDialog__get_closeBtnObject(
        ClassBoardAddClassDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonObj;
}