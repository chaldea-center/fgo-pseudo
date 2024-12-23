void __fastcall SummonListDialog___ctor(SummonListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B63353 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4B63353 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
  UIScrollView_o *bannerListScrollView; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  System_Action_object__o *v11; // x22
  Il2CppObject *v12; // x23
  struct SummonListDialog___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Collections_Generic_List_GameObject__o *v20; // x8
  int32_t size; // w2
  int v22; // w9

  if ( (byte_4B63351 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_GameObject__TypeInfo, callback);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__ForEach__, v6);
    sub_1BE4ACC(&Method_SummonListDialog___c__Close_b__16_0__, v7);
    sub_1BE4ACC(&SummonListDialog___c_TypeInfo, v8);
    byte_4B63351 = 1;
  }
  bannerListScrollView = (UIScrollView_o *)SummonListDialog___c_TypeInfo;
  objectList = this->fields.objectList;
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
    v11 = (System_Action_object__o *)sub_1BE4D18(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v11, v12, Method_SummonListDialog___c__Close_b__16_0__, 0LL);
    static_fields = SummonListDialog___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Action_GameObject__o *)v11;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)v11, v14, v15, v16, v17, v18, v19);
  }
  if ( !objectList )
    goto LABEL_17;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)v11,
    (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  v20 = this->fields.objectList;
  if ( !v20 )
    goto LABEL_17;
  size = v20->fields._size;
  v22 = v20->fields._version + 1;
  v20->fields._size = 0;
  v20->fields._version = v22;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v20->fields._items, 0, size, 0LL);
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
LABEL_17:
    sub_1BE4D28(bannerListScrollView, callback);
  }
  UIScrollView__UpdatePosition(bannerListScrollView, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, callback, 0LL);
  this->fields.isInit = 0;
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
  UnityEngine_Transform_o *transform; // x0
  UILabel_o *titleLabel; // x22
  System_String_o *listRoot; // x0
  const MethodInfo *v28; // x1
  UILabel_o *messageLabel; // x21
  UnityEngine_Transform_o *v30; // x0
  int32_t v31; // w24
  int32_t v32; // w8
  Il2CppObject *summonBannerObject; // x21
  Il2CppObject *v34; // x26
  System_String_o *v35; // x0
  System_String_o *v36; // x27
  __int64 v37; // x1
  UnityEngine_GameObject_o *v38; // x21
  NetworkManager_c *v39; // x0
  int64_t userIdNumber; // x23
  int32_t v41; // w28
  UnityEngine_GameObject_o *v42; // x20
  int32_t num; // w21
  bool v44; // w23
  System_Action_int__o *v45; // x21
  System_Collections_Generic_List_object__o *objectList; // x23
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  int64_t v56; // x1
  Il2CppClass **v57; // x0
  int32_t v58; // [xsp+4h] [xbp-8Ch]
  UserGachaMaster_o *Master_object; // [xsp+8h] [xbp-88h]
  UnityEngine_Transform_o *parent; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v61; // [xsp+18h] [xbp-78h]
  int v62; // [xsp+24h] [xbp-6Ch]
  UserGachaEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B6334D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_int__TypeInfo, *(_QWORD *)&currentIndex);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_1BE4ACC(&DataManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v15);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v16);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v17);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___, v18);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v19);
    sub_1BE4ACC(&Method_SummonListDialog_OnClickBanner__, v20);
    sub_1BE4ACC(&StringLiteral_15850/*"Window/CloseButton"*/, v21);
    sub_1BE4ACC(&StringLiteral_12544/*"SUMMON_LIST_DIALOG_MESSAGE"*/, v22);
    sub_1BE4ACC(&StringLiteral_12546/*"SUMMON_LIST_DIALOG_TITLE"*/, v23);
    sub_1BE4ACC(&StringLiteral_20765/*"img_summon_mini_"*/, v24);
    byte_4B6334D = 1;
  }
  entity = 0LL;
  if ( !dispGachaList )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackKeyTarget_42782352(transform, (System_String_o *)StringLiteral_15850/*"Window/CloseButton"*/, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  listRoot = LocalizationManager__Get((System_String_o *)StringLiteral_12546/*"SUMMON_LIST_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_52;
  UILabel__set_text(titleLabel, listRoot, 0LL);
  messageLabel = this->fields.messageLabel;
  listRoot = LocalizationManager__Get((System_String_o *)StringLiteral_12544/*"SUMMON_LIST_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_52;
  UILabel__set_text(messageLabel, listRoot, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserGachaMaster___);
  if ( dispGachaList->fields._size >= 21 )
  {
    listRoot = (System_String_o *)this->fields.listRoot;
    if ( listRoot )
    {
      v30 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)listRoot, 0LL);
      goto LABEL_15;
    }
LABEL_52:
    sub_1BE4D28(listRoot, v28);
  }
  listRoot = (System_String_o *)this->fields.centerRoot;
  if ( !listRoot )
    goto LABEL_52;
  v30 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)listRoot, 0LL);
LABEL_15:
  parent = v30;
  if ( dispGachaList->fields._size >= 1 )
  {
    v62 = 0;
    v31 = 0;
    if ( currentIndex + 1 <= vaildGachaCount )
      v32 = 0;
    else
      v32 = vaildGachaCount;
    v58 = v32;
    v61 = (System_Collections_Generic_List_object__o *)dispGachaList;
    while ( 1 )
    {
      listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)dispGachaList,
                                      v31,
                                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !listRoot )
        goto LABEL_52;
      if ( LODWORD(listRoot[4].monitor) == currentSummonListGroupId )
        break;
LABEL_49:
      if ( ++v31 >= dispGachaList->fields._size )
        goto LABEL_50;
    }
    summonBannerObject = (Il2CppObject *)this->fields.summonBannerObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v34 = UnityEngine_Object__Instantiate_object__50195216(
            summonBannerObject,
            parent,
            (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
    listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)dispGachaList,
                                    v31,
                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !listRoot )
      goto LABEL_52;
    v35 = System_Int32__ToString((int)listRoot + 40, 0LL);
    listRoot = System_String__Concat_62698808((System_String_o *)StringLiteral_20765/*"img_summon_mini_"*/, v35, 0LL);
    if ( !this->fields.summonControl )
      goto LABEL_52;
    v36 = listRoot;
    v38 = SummonControl__searchBannerImg(this->fields.summonControl, listRoot, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v37);
      byte_4B61717 = 1;
    }
    v39 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v39 = NetworkManager_TypeInfo;
    }
    userIdNumber = v39->static_fields->userIdNumber;
    listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)dispGachaList,
                                    v31,
                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !listRoot || !Master_object )
      goto LABEL_52;
    v41 = v58 + v31 - v62;
    if ( !UserGachaMaster__TryGetEntity(Master_object, &entity, userIdNumber, listRoot->fields._stringLength, 0LL) )
      goto LABEL_41;
    listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)dispGachaList,
                                    v31,
                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !listRoot )
      goto LABEL_52;
    if ( listRoot[4].fields._stringLength >= 1 )
    {
      if ( !entity )
        goto LABEL_52;
      v42 = v38;
      num = entity->fields.num;
      listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                      v61,
                                      v31,
                                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !listRoot )
        goto LABEL_52;
      if ( num >= listRoot[4].fields._stringLength )
      {
        v41 = -1;
        v44 = 1;
        ++v62;
        goto LABEL_43;
      }
    }
    else
    {
LABEL_41:
      v42 = v38;
    }
    v44 = 0;
LABEL_43:
    v45 = (System_Action_int__o *)sub_1BE4D18(System_Action_int__TypeInfo);
    System_Action_int____ctor(v45, (Il2CppObject *)this, (intptr_t)Method_SummonListDialog_OnClickBanner__, 0LL);
    if ( !v34 )
      goto LABEL_52;
    SummonBannerIconComponent__SetInfo((SummonBannerIconComponent_o *)v34, v41, v36, v44, v42, v45, 0LL);
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    listRoot = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
    if ( !objectList )
      goto LABEL_52;
    items = objectList->fields._items;
    dispGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v61;
    v54 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++objectList->fields._version;
    if ( !items )
      goto LABEL_52;
    size = objectList->fields._size;
    v56 = (int64_t)listRoot;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        objectList,
        (Il2CppObject *)listRoot,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &items->obj.klass + size;
      objectList->fields._size = size + 1;
      v57[4] = (Il2CppClass *)v56;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v57 + 4), v56, v47, v48, v49, v50, v51, v52);
    }
    goto LABEL_49;
  }
LABEL_50:
  SummonListDialog__RepositionBanner(this, v28);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.isInit = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonListDialog__OnClickBanner(SummonListDialog_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_Component_o *bannerLoopCtr; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct SummonControl_o *summonControl; // x8
  struct SummonControl_o *v18; // x8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x2
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0

  if ( (byte_4B6334F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_SummonListDialog_OnClickBanner__, v5);
    sub_1BE4ACC(&Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__, v6);
    sub_1BE4ACC(&SummonListDialog___c__DisplayClass14_0_TypeInfo, v7);
    byte_4B6334F = 1;
  }
  v8 = sub_1BE4D18(SummonListDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_17;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v8 + 24) = index;
  if ( (index & 0x80000000) == 0 )
  {
    summonControl = this->fields.summonControl;
    if ( !summonControl )
      goto LABEL_17;
    bannerLoopCtr = (UnityEngine_Component_o *)summonControl->fields.bannerLoopCtr;
    if ( !bannerLoopCtr )
      goto LABEL_17;
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
    if ( !bannerLoopCtr )
      goto LABEL_17;
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)bannerLoopCtr,
                                                 0LL);
    if ( (int)bannerLoopCtr > *(_DWORD *)(v8 + 24) )
    {
      v18 = this->fields.summonControl;
      if ( v18 )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)v18->fields.maskObject;
        if ( bannerLoopCtr )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bannerLoopCtr, 1, 0LL);
          MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
          v19 = Method_SummonListDialog_OnClickBanner__;
          if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
            v19 = (_QWORD *)sub_1BE4AE4(Method_SummonListDialog_OnClickBanner__);
          v20 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v19, v19[4]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
          v21 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(
            v21,
            (Il2CppObject *)v8,
            Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__,
            0LL);
          SummonListDialog__Close(this, v21, v22);
          return;
        }
      }
LABEL_17:
      sub_1BE4D28(bannerLoopCtr, v10);
    }
  }
  v23 = Method_SummonListDialog_OnClickBanner__;
  if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1BE4AE4(Method_SummonListDialog_OnClickBanner__);
  v24 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0LL);
}


void __fastcall SummonListDialog__OnClickClose(SummonListDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B63352 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonListDialog_OnClickClose__, method);
    byte_4B63352 = 1;
  }
  v3 = Method_SummonListDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_SummonListDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_SummonListDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  SummonListDialog__Close(this, 0LL, v5);
}


void __fastcall SummonListDialog__Open(SummonListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B63350 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SummonListDialog__Open_b__15_0__, v3);
    byte_4B63350 = 1;
  }
  if ( this->fields.isInit )
  {
    v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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
  if ( (byte_4B6334E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetRange__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    this = (SummonListDialog_o *)sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    byte_4B6334E = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  listRoot = v2->fields.listRoot;
  if ( !listRoot )
    goto LABEL_33;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_4B6195E )
  {
    sub_1BE4ACC(&System_Math_TypeInfo, method);
    byte_4B6195E = 1;
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
                                     (const MethodInfo_35ECDF4 *)Method_System_Collections_Generic_List_GameObject__GetRange__);
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
                                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
    sub_1BE4D28(this, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B63354 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_GameObject__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1BE4ACC(&Method_SummonListDialog___c__Open_b__15_1__, v4);
    sub_1BE4ACC(&SummonListDialog___c_TypeInfo, v5);
    byte_4B63354 = 1;
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
    _9__15_1 = (System_Action_object__o *)sub_1BE4D18(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_1, v9, Method_SummonListDialog___c__Open_b__15_1__, 0LL);
    static_fields = SummonListDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Action_GameObject__o *)_9__15_1;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__15_1,
      (int64_t)_9__15_1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !objectList )
    sub_1BE4D28(v6, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__15_1,
    (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall SummonListDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B63355 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonListDialog___c_TypeInfo, v1);
    byte_4B63355 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(SummonListDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonListDialog___c_TypeInfo->static_fields->__9 = (struct SummonListDialog___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)SummonListDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  if ( (byte_4B63357 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, obj);
    byte_4B63357 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall SummonListDialog___c___Open_b__15_1(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B63356 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, obj);
    byte_4B63356 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1BE4D28(v4, v5);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
  }
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
    sub_1BE4D28(this, method);
  SummonControl__OnClickMiniBanner(summonControl, this->fields.index, 0, 0LL);
}