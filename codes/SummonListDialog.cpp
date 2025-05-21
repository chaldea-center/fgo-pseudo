void __fastcall SummonListDialog___ctor(SummonListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B41097 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4B41097 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonListDialog__CheckSerializeFieldNotNull(SummonListDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonListDialog__Close(SummonListDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  UIScrollView_o *bannerListScrollView; // x0
  System_Action_object__o *v11; // x22
  Il2CppObject *v12; // x23
  struct SummonListDialog___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_GameObject__o *v16; // x8
  int32_t size; // w2
  int v18; // w9

  if ( (byte_4B41095 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_GameObject__TypeInfo, callback);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__ForEach__, v6);
    sub_1BDB878(&Method_SummonListDialog___c__Close_b__16_0__, v7);
    sub_1BDB878(&SummonListDialog___c_TypeInfo, v8);
    byte_4B41095 = 1;
  }
  if ( this->fields.isInit )
  {
    objectList = this->fields.objectList;
    bannerListScrollView = (UIScrollView_o *)SummonListDialog___c_TypeInfo;
    if ( !SummonListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonListDialog___c_TypeInfo);
      bannerListScrollView = (UIScrollView_o *)SummonListDialog___c_TypeInfo;
    }
    v11 = *(System_Action_object__o **)(*(_QWORD *)&bannerListScrollView->fields.mLastPos.fields.z + 16LL);
    if ( !v11 )
    {
      if ( !LODWORD(bannerListScrollView->fields.mBounds.fields.m_Extents.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(bannerListScrollView);
        bannerListScrollView = (UIScrollView_o *)SummonListDialog___c_TypeInfo;
      }
      v12 = **(Il2CppObject ***)&bannerListScrollView->fields.mLastPos.fields.z;
      v11 = (System_Action_object__o *)sub_1BDBAC4(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v11, v12, Method_SummonListDialog___c__Close_b__16_0__, 0LL);
      static_fields = SummonListDialog___c_TypeInfo->static_fields;
      static_fields->__9__16_0 = (struct System_Action_GameObject__o *)v11;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)v11, v14, v15);
    }
    if ( !objectList )
      goto LABEL_19;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)objectList,
      (System_Action_T__o *)v11,
      (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
    v16 = this->fields.objectList;
    if ( !v16 )
      goto LABEL_19;
    size = v16->fields._size;
    v18 = v16->fields._version + 1;
    v16->fields._size = 0;
    v16->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
    bannerListScrollView = this->fields.bannerListScrollView;
    if ( !bannerListScrollView
      || (((void (__fastcall *)(UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))bannerListScrollView->klass->vtable._9_SetDragAmount.method)(
            bannerListScrollView,
            0LL,
            bannerListScrollView->klass->vtable._10_MoveRelative.methodPtr,
            0.0,
            0.0),
          (bannerListScrollView = this->fields.bannerListScrollView) == 0LL)
      || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))bannerListScrollView->klass->vtable._8_UpdateScrollbars.method)(
            bannerListScrollView,
            1LL,
            bannerListScrollView->klass->vtable._9_SetDragAmount.methodPtr),
          (bannerListScrollView = this->fields.bannerListScrollView) == 0LL) )
    {
LABEL_19:
      sub_1BDBAD4(bannerListScrollView, callback);
    }
    UIScrollView__UpdatePosition(bannerListScrollView, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, callback, 0LL);
    this->fields.isInit = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonListDialog__Init(
        SummonListDialog_o *this,
        int32_t currentIndex,
        int32_t currentSummonListGroupId,
        int32_t vaildGachaCount,
        System_Collections_Generic_List_VaildGachaInfo__o *dispGachaList,
        const MethodInfo *method)
{
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x21
  System_String_o *listRoot; // x0
  const MethodInfo *v31; // x1
  UnityEngine_Transform_o *transform; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  System_Func_object__bool__o *v35; // x23
  UnityEngine_Transform_o *v36; // x0
  int32_t v37; // w24
  int32_t v38; // w8
  Il2CppObject *summonBannerObject; // x23
  Il2CppObject *v40; // x26
  System_String_o *v41; // x0
  System_String_o *v42; // x27
  __int64 v43; // x1
  UnityEngine_GameObject_o *v44; // x28
  NetworkManager_c *v45; // x0
  int64_t userIdNumber; // x23
  int32_t v47; // w29
  int32_t num; // w23
  bool v49; // w23
  System_Action_int__o *v50; // x25
  System_Collections_Generic_List_object__o *objectList; // x23
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  System_String_o *v57; // x1
  Il2CppClass **v58; // x0
  int32_t v59; // [xsp+Ch] [xbp-84h]
  UserGachaMaster_o *Master_object; // [xsp+10h] [xbp-80h]
  UnityEngine_Transform_o *parent; // [xsp+18h] [xbp-78h]
  int v62; // [xsp+24h] [xbp-6Ch]
  UserGachaEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B41091 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, *(_QWORD *)&currentIndex);
    sub_1BDB878(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_1BDB878(&DataManager_TypeInfo, v12);
    sub_1BDB878(&Method_System_Linq_Enumerable_Count_VaildGachaInfo___, v13);
    sub_1BDB878(&System_Func_VaildGachaInfo__bool__TypeInfo, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v17);
    sub_1BDB878(&LocalizationManager_TypeInfo, v18);
    sub_1BDB878(&NetworkManager_TypeInfo, v19);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___, v20);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v21);
    sub_1BDB878(&Method_SummonListDialog_OnClickBanner__, v22);
    sub_1BDB878(&Method_SummonListDialog___c__DisplayClass12_0__Init_b__0__, v23);
    sub_1BDB878(&SummonListDialog___c__DisplayClass12_0_TypeInfo, v24);
    sub_1BDB878(&StringLiteral_15618/*"Window/CloseButton"*/, v25);
    sub_1BDB878(&StringLiteral_12417/*"SUMMON_LIST_DIALOG_MESSAGE"*/, v26);
    sub_1BDB878(&StringLiteral_12419/*"SUMMON_LIST_DIALOG_TITLE"*/, v27);
    sub_1BDB878(&StringLiteral_20597/*"img_summon_mini_"*/, v28);
    byte_4B41091 = 1;
  }
  entity = 0LL;
  v29 = sub_1BDBAC4(SummonListDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_53;
  *(_DWORD *)(v29 + 16) = currentSummonListGroupId;
  if ( dispGachaList )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    AndroidBackKeyManager__AddBackKeyTarget_43874548(transform, (System_String_o *)StringLiteral_15618/*"Window/CloseButton"*/, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    listRoot = LocalizationManager__Get((System_String_o *)StringLiteral_12419/*"SUMMON_LIST_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_53;
    UILabel__set_text(titleLabel, listRoot, 0LL);
    messageLabel = this->fields.messageLabel;
    listRoot = LocalizationManager__Get((System_String_o *)StringLiteral_12417/*"SUMMON_LIST_DIALOG_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_53;
    UILabel__set_text(messageLabel, listRoot, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserGachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserGachaMaster___);
    v35 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_VaildGachaInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v35,
      (Il2CppObject *)v29,
      Method_SummonListDialog___c__DisplayClass12_0__Init_b__0__,
      0LL);
    if ( System_Linq_Enumerable__Count_object__50665212(
           (System_Collections_Generic_IEnumerable_TSource__o *)dispGachaList,
           (System_Func_TSource__bool__o *)v35,
           (const MethodInfo_30516FC *)Method_System_Linq_Enumerable_Count_VaildGachaInfo___) >= 21 )
    {
      listRoot = (System_String_o *)this->fields.listRoot;
      if ( !listRoot )
        goto LABEL_53;
      v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)listRoot, 0LL);
    }
    else
    {
      listRoot = (System_String_o *)this->fields.centerRoot;
      if ( !listRoot )
        goto LABEL_53;
      v36 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)listRoot, 0LL);
    }
    parent = v36;
    if ( dispGachaList->fields._size >= 1 )
    {
      v62 = 0;
      v37 = 0;
      if ( currentIndex + 1 <= vaildGachaCount )
        v38 = 0;
      else
        v38 = vaildGachaCount;
      v59 = v38;
      while ( 1 )
      {
        listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)dispGachaList,
                                        v37,
                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot )
          break;
        if ( LODWORD(listRoot[4].monitor) == *(_DWORD *)(v29 + 16) )
        {
          summonBannerObject = (Il2CppObject *)this->fields.summonBannerObject;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v40 = UnityEngine_Object__Instantiate_object__51108816(
                  summonBannerObject,
                  parent,
                  (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v37,
                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot )
            break;
          v41 = System_Int32__ToString((int)listRoot + 40, 0LL);
          listRoot = System_String__Concat_62572260((System_String_o *)StringLiteral_20597/*"img_summon_mini_"*/, v41, 0LL);
          if ( !this->fields.summonControl )
            break;
          v42 = listRoot;
          v44 = SummonControl__searchBannerImg(this->fields.summonControl, listRoot, 0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B3ED56 )
          {
            sub_1BDB878(&NetworkManager_TypeInfo, v43);
            byte_4B3ED56 = 1;
          }
          v45 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v45 = NetworkManager_TypeInfo;
          }
          userIdNumber = v45->static_fields->userIdNumber;
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v37,
                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot || !Master_object )
            break;
          v47 = v59 + v37 - v62;
          if ( !UserGachaMaster__TryGetEntity(Master_object, &entity, userIdNumber, listRoot->fields._stringLength, 0LL) )
            goto LABEL_41;
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v37,
                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot )
            break;
          if ( listRoot[4].fields._stringLength < 1 )
            goto LABEL_41;
          if ( !entity )
            break;
          num = entity->fields.num;
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v37,
                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot )
            break;
          if ( num >= listRoot[4].fields._stringLength )
          {
            v47 = -1;
            v49 = 1;
            ++v62;
          }
          else
          {
LABEL_41:
            v49 = 0;
          }
          v50 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
          System_Action_int____ctor(v50, (Il2CppObject *)this, (intptr_t)Method_SummonListDialog_OnClickBanner__, 0LL);
          if ( !v40 )
            break;
          SummonBannerIconComponent__SetInfo((SummonBannerIconComponent_o *)v40, v47, v42, v49, v44, v50, 0LL);
          objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
          listRoot = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
          if ( !objectList )
            break;
          items = objectList->fields._items;
          v55 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++objectList->fields._version;
          if ( !items )
            break;
          size = objectList->fields._size;
          v57 = listRoot;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              objectList,
              (Il2CppObject *)listRoot,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &items->obj.klass + size;
            objectList->fields._size = size + 1;
            v58[4] = (Il2CppClass *)v57;
            sub_1BDB81C((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v57, v52, v53);
          }
        }
        if ( ++v37 >= dispGachaList->fields._size )
          goto LABEL_51;
      }
LABEL_53:
      sub_1BDBAD4(listRoot, v31);
    }
LABEL_51:
    SummonListDialog__RepositionBanner(this, v31);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    this->fields.isInit = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonListDialog__OnClickBanner(SummonListDialog_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_Component_o *bannerLoopCtr; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct SummonControl_o *summonControl; // x8
  struct SummonControl_o *v14; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_4B41093 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_SummonListDialog_OnClickBanner__, v5);
    sub_1BDB878(&Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__, v6);
    sub_1BDB878(&SummonListDialog___c__DisplayClass14_0_TypeInfo, v7);
    byte_4B41093 = 1;
  }
  v8 = sub_1BDBAC4(SummonListDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_19;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_DWORD *)(v8 + 24) = index;
  summonControl = this->fields.summonControl;
  if ( !summonControl )
    goto LABEL_19;
  if ( summonControl->fields.currentMoveIdx == index )
  {
    SummonListDialog__OnClickClose(this, v10);
    return;
  }
  if ( (index & 0x80000000) == 0 )
  {
    bannerLoopCtr = (UnityEngine_Component_o *)summonControl->fields.bannerLoopCtr;
    if ( !bannerLoopCtr )
      goto LABEL_19;
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
    if ( !bannerLoopCtr )
      goto LABEL_19;
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)bannerLoopCtr,
                                                 0LL);
    if ( (int)bannerLoopCtr > *(_DWORD *)(v8 + 24) )
    {
      v14 = this->fields.summonControl;
      if ( v14 )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)v14->fields.maskObject;
        if ( bannerLoopCtr )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bannerLoopCtr, 1, 0LL);
          MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
          v15 = Method_SummonListDialog_OnClickBanner__;
          if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
            v15 = (_QWORD *)sub_1BDB890(Method_SummonListDialog_OnClickBanner__);
          v16 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v15, v15[4]);
          OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
          v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v8,
            Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__,
            0LL);
          SummonListDialog__Close(this, v17, v18);
          return;
        }
      }
LABEL_19:
      sub_1BDBAD4(bannerLoopCtr, v10);
    }
  }
  v19 = Method_SummonListDialog_OnClickBanner__;
  if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BDB890(Method_SummonListDialog_OnClickBanner__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0LL);
}


void __fastcall SummonListDialog__OnClickClose(SummonListDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B41096 & 1) == 0 )
  {
    sub_1BDB878(&Method_SummonListDialog_OnClickClose__, method);
    byte_4B41096 = 1;
  }
  if ( this->fields.isInit )
  {
    v3 = Method_SummonListDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonListDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_SummonListDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    SummonListDialog__Close(this, 0LL, v5);
  }
}


void __fastcall SummonListDialog__Open(SummonListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B41094 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SummonListDialog__Open_b__15_0__, v3);
    byte_4B41094 = 1;
  }
  if ( this->fields.isInit )
  {
    v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonListDialog__Open_b__15_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
  }
}


void __fastcall SummonListDialog__RepositionBanner(SummonListDialog_o *this, const MethodInfo *method)
{
  SummonListDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  struct UIGrid_o *listRoot; // x9
  float size; // s8
  float maxPerLine; // s9
  float v9; // s8
  struct UIGrid_o *v10; // x8
  unsigned int v11; // w10
  signed int v12; // w22
  struct UIGrid_o *v13; // x8
  float v14; // s0
  bool v15; // nf
  float v16; // s0
  int v17; // w23
  float v18; // s9
  struct UIGrid_o *v19; // x8
  int v20; // w8
  int32_t v21; // w2
  struct UIGrid_o *v22; // x8
  int m_CancellationTokenSource; // w9
  System_Collections_Generic_List_object__o *v24; // x20
  bool v25; // vf
  int v26; // w9
  int32_t v27; // w21
  float v28; // s10
  struct UIGrid_o *v29; // x8
  float cellWidth; // s12
  float cellHeight; // s13
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B41092 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetRange__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    this = (SummonListDialog_o *)sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    byte_4B41092 = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  listRoot = v2->fields.listRoot;
  if ( !listRoot )
    goto LABEL_33;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, method);
    byte_4B3EFD1 = 1;
  }
  v9 = size / maxPerLine;
  this = (SummonListDialog_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = v2->fields.listRoot;
  v11 = vcvtps_s32_f32(v9);
  v12 = ceilf(v9) == INFINITY ? 0x80000000 : v11;
  if ( !v10 )
    goto LABEL_33;
  GameObjectExtensions__SetLocalPositionY(
    v2->fields.centerRoot,
    (float)(v10->fields.cellHeight * 0.5) * (float)(v12 - 1),
    0LL);
  v13 = v2->fields.listRoot;
  if ( !v13 )
    goto LABEL_33;
  LODWORD(v14) = *(_QWORD *)&NGUIMath__GetPivotOffset(v13->fields.pivot, 0LL);
  if ( v12 >= 1 )
  {
    v15 = v14 < 0.0;
    v16 = fminf(v14, 1.0);
    v17 = 0;
    if ( v15 )
      v18 = 0.0;
    else
      v18 = v16;
    while ( 1 )
    {
      v19 = v2->fields.listRoot;
      if ( !v19 )
        goto LABEL_33;
      this = (SummonListDialog_o *)v2->fields.objectList;
      if ( !this )
        goto LABEL_33;
      v20 = v19->fields.maxPerLine;
      v21 = LODWORD(this->fields.m_CancellationTokenSource) - v20 * v17 >= v20
          ? v20
          : LODWORD(this->fields.m_CancellationTokenSource) - v20 * v17;
      this = (SummonListDialog_o *)System_Collections_Generic_List_object___GetRange(
                                     (System_Collections_Generic_List_object__o *)this,
                                     v20 * v17,
                                     v21,
                                     (const MethodInfo_36D6994 *)Method_System_Collections_Generic_List_GameObject__GetRange__);
      if ( !this )
        goto LABEL_33;
      v22 = v2->fields.listRoot;
      if ( !v22 )
        goto LABEL_33;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v24 = (System_Collections_Generic_List_object__o *)this;
      v25 = __OFSUB__(m_CancellationTokenSource, 1);
      v26 = m_CancellationTokenSource - 1;
      if ( v26 < 0 == v25 )
        break;
LABEL_31:
      if ( ++v17 == v12 )
        return;
    }
    v27 = 0;
    v28 = (float)(v18 * (float)(v22->fields.cellWidth * (float)v26)) + 0.0;
    while ( 1 )
    {
      this = (SummonListDialog_o *)System_Collections_Generic_List_object___get_Item(
                                     v24,
                                     v27,
                                     (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      v29 = v2->fields.listRoot;
      if ( !v29 )
        break;
      if ( !this )
        break;
      cellWidth = v29->fields.cellWidth;
      cellHeight = v29->fields.cellHeight;
      this = (SummonListDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        break;
      v32.fields.x = (float)(cellWidth * (float)v27) - v28;
      v32.fields.y = (float)v17 * (float)-cellHeight;
      v32.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v32, 0LL);
      if ( ++v27 >= v24->fields._size )
        goto LABEL_31;
    }
LABEL_33:
    sub_1BDBAD4(this, method);
  }
}


void __fastcall SummonListDialog___Open_b__15_0(SummonListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SummonListDialog___c_c *v6; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__15_1; // x20
  Il2CppObject *v9; // x21
  struct SummonListDialog___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B41098 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_GameObject__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1BDB878(&Method_SummonListDialog___c__Open_b__15_1__, v4);
    sub_1BDB878(&SummonListDialog___c_TypeInfo, v5);
    byte_4B41098 = 1;
  }
  v6 = SummonListDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !SummonListDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonListDialog___c_TypeInfo);
    v6 = SummonListDialog___c_TypeInfo;
  }
  _9__15_1 = (System_Action_object__o *)v6->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = SummonListDialog___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__15_1 = (System_Action_object__o *)sub_1BDBAC4(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_1, v9, Method_SummonListDialog___c__Open_b__15_1__, 0LL);
    static_fields = SummonListDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Action_GameObject__o *)_9__15_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__15_1, (int32_t)_9__15_1, v11, v12);
  }
  if ( !objectList )
    sub_1BDBAD4(v6, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__15_1,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall SummonListDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B41099 & 1) == 0 )
  {
    sub_1BDB878(&SummonListDialog___c_TypeInfo, v1);
    byte_4B41099 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(SummonListDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonListDialog___c_TypeInfo->static_fields->__9 = (struct SummonListDialog___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)SummonListDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SummonListDialog___c___ctor(SummonListDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonListDialog___c___Close_b__16_0(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4B4109B & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, obj);
    byte_4B4109B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall SummonListDialog___c___Open_b__15_1(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B4109A & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, obj);
    byte_4B4109A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1BDBAD4(v4, v5);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
  }
}


void __fastcall SummonListDialog___c__DisplayClass12_0___ctor(
        SummonListDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonListDialog___c__DisplayClass12_0___Init_b__0(
        SummonListDialog___c__DisplayClass12_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.summonListGroupId == this->fields.currentSummonListGroupId;
}


void __fastcall SummonListDialog___c__DisplayClass14_0___ctor(
        SummonListDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonListDialog___c__DisplayClass14_0___OnClickBanner_b__0(
        SummonListDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct SummonListDialog_o *_4__this; // x8
  SummonControl_o *summonControl; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (summonControl = _4__this->fields.summonControl) == 0LL )
    sub_1BDBAD4(this, method);
  SummonControl__OnClickMiniBanner(summonControl, this->fields.index, 0, 0LL);
}