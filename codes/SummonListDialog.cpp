void SummonListDialog___ctor(SummonListDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3F597 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C3F597 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SummonListDialog__CheckSerializeFieldNotNull(SummonListDialog_o *this, const MethodInfo *method)
{
  ;
}


void SummonListDialog__Close(SummonListDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  UIScrollView_o *bannerListScrollView; // x0
  System_Action_object__o *v7; // x22
  Il2CppObject *v8; // x23
  struct SummonListDialog___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_GameObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9

  if ( (byte_4C3F595 & 1) == 0 )
  {
    sub_1C37058(&System_Action_GameObject__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C37058(&Method_SummonListDialog___c__Close_b__16_0__);
    sub_1C37058(&SummonListDialog___c_TypeInfo);
    byte_4C3F595 = 1;
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
    v7 = *(System_Action_object__o **)(*(_QWORD *)&bannerListScrollView->fields.mLastPos.fields.z + 16LL);
    if ( !v7 )
    {
      if ( !LODWORD(bannerListScrollView->fields.mBounds.fields.m_Extents.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(bannerListScrollView);
        bannerListScrollView = (UIScrollView_o *)SummonListDialog___c_TypeInfo;
      }
      v8 = **(Il2CppObject ***)&bannerListScrollView->fields.mLastPos.fields.z;
      v7 = (System_Action_object__o *)sub_1C372A4(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v7, v8, Method_SummonListDialog___c__Close_b__16_0__, 0);
      static_fields = SummonListDialog___c_TypeInfo->static_fields;
      static_fields->__9__16_0 = (struct System_Action_GameObject__o *)v7;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)v7, v10, v11);
    }
    if ( !objectList )
      goto LABEL_19;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)objectList,
      (System_Action_T__o *)v7,
      (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
    v12 = this->fields.objectList;
    if ( !v12 )
      goto LABEL_19;
    size = v12->fields._size;
    v14 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0);
    bannerListScrollView = this->fields.bannerListScrollView;
    if ( !bannerListScrollView
      || (((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, float, float))bannerListScrollView->klass->vtable._9_SetDragAmount.methodPtr)(
            bannerListScrollView,
            0,
            bannerListScrollView->klass->vtable._9_SetDragAmount.method,
            0.0,
            0.0),
          (bannerListScrollView = this->fields.bannerListScrollView) == 0)
      || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))bannerListScrollView->klass->vtable._8_UpdateScrollbars.methodPtr)(
            bannerListScrollView,
            1,
            bannerListScrollView->klass->vtable._8_UpdateScrollbars.method),
          (bannerListScrollView = this->fields.bannerListScrollView) == 0) )
    {
LABEL_19:
      sub_1C372B4(bannerListScrollView);
    }
    UIScrollView__UpdatePosition(bannerListScrollView, 0);
    BaseDialog__Close((BaseDialog_o *)this, callback, 0);
    this->fields.isInit = 0;
  }
}


void SummonListDialog__Init(
        SummonListDialog_o *this,
        int32_t currentIndex,
        int32_t currentSummonListGroupId,
        int32_t vaildGachaCount,
        System_Collections_Generic_List_VaildGachaInfo__o *dispGachaList,
        const MethodInfo *method)
{
  __int64 v11; // x21
  System_String_o *listRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  System_Func_object__bool__o *v16; // x23
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x1
  int32_t v19; // w24
  int32_t v20; // w8
  Il2CppObject *summonBannerObject; // x23
  Il2CppObject *v22; // x26
  System_String_o *v23; // x0
  System_String_o *v24; // x27
  UnityEngine_GameObject_o *v25; // x28
  NetworkManager_c *v26; // x0
  int64_t userIdNumber; // x23
  int32_t v28; // w29
  int32_t num; // w23
  bool v30; // w23
  System_Action_int__o *v31; // x25
  System_Collections_Generic_List_object__o *objectList; // x23
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  System_String_o *v38; // x1
  Il2CppClass **v39; // x0
  int32_t v40; // [xsp+Ch] [xbp-84h]
  UserGachaMaster_o *Master_object; // [xsp+10h] [xbp-80h]
  UnityEngine_Transform_o *parent; // [xsp+18h] [xbp-78h]
  int v43; // [xsp+24h] [xbp-6Ch]
  UserGachaEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C3F591 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_VaildGachaInfo___);
    sub_1C37058(&System_Func_VaildGachaInfo__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SummonListDialog_OnClickBanner__);
    sub_1C37058(&Method_SummonListDialog___c__DisplayClass12_0__Init_b__0__);
    sub_1C37058(&SummonListDialog___c__DisplayClass12_0_TypeInfo);
    sub_1C37058(&StringLiteral_15643/*"Window/CloseButton"*/);
    sub_1C37058(&StringLiteral_12452/*"SUMMON_LIST_DIALOG_MESSAGE"*/);
    sub_1C37058(&StringLiteral_12454/*"SUMMON_LIST_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_20589/*"img_summon_mini_"*/);
    byte_4C3F591 = 1;
  }
  entity = 0;
  v11 = sub_1C372A4(SummonListDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_53;
  *(_DWORD *)(v11 + 16) = currentSummonListGroupId;
  if ( dispGachaList )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    AndroidBackKeyManager__AddBackKeyTarget_44961036(transform, (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/, 0);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    listRoot = LocalizationManager__Get((System_String_o *)StringLiteral_12454/*"SUMMON_LIST_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_53;
    UILabel__set_text(titleLabel, listRoot, 0);
    messageLabel = this->fields.messageLabel;
    listRoot = LocalizationManager__Get((System_String_o *)StringLiteral_12452/*"SUMMON_LIST_DIALOG_MESSAGE"*/, 0);
    if ( !messageLabel )
      goto LABEL_53;
    UILabel__set_text(messageLabel, listRoot, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserGachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserGachaMaster___);
    v16 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_VaildGachaInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)v11,
      Method_SummonListDialog___c__DisplayClass12_0__Init_b__0__,
      0);
    if ( System_Linq_Enumerable__Count_object__51419316(
           (System_Collections_Generic_IEnumerable_TSource__o *)dispGachaList,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_31098B4 *)Method_System_Linq_Enumerable_Count_VaildGachaInfo___) >= 21 )
    {
      listRoot = (System_String_o *)this->fields.listRoot;
      if ( !listRoot )
        goto LABEL_53;
      v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)listRoot, 0);
    }
    else
    {
      listRoot = (System_String_o *)this->fields.centerRoot;
      if ( !listRoot )
        goto LABEL_53;
      v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)listRoot, 0);
    }
    parent = v17;
    if ( dispGachaList->fields._size >= 1 )
    {
      v43 = 0;
      v19 = 0;
      if ( currentIndex + 1 <= vaildGachaCount )
        v20 = 0;
      else
        v20 = vaildGachaCount;
      v40 = v20;
      while ( 1 )
      {
        listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)dispGachaList,
                                        v19,
                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot )
          break;
        if ( LODWORD(listRoot[4].monitor) == *(_DWORD *)(v11 + 16) )
        {
          summonBannerObject = (Il2CppObject *)this->fields.summonBannerObject;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v22 = UnityEngine_Object__Instantiate_object__51855596(
                  summonBannerObject,
                  parent,
                  (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v19,
                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot )
            break;
          v23 = System_Int32__ToString((int)listRoot + 40, 0);
          listRoot = System_String__Concat_63561656((System_String_o *)StringLiteral_20589/*"img_summon_mini_"*/, v23, 0);
          if ( !this->fields.summonControl )
            break;
          v24 = listRoot;
          v25 = SummonControl__searchBannerImg(this->fields.summonControl, listRoot, 0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          v26 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v26 = NetworkManager_TypeInfo;
          }
          userIdNumber = v26->static_fields->userIdNumber;
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v19,
                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot || !Master_object )
            break;
          v28 = v40 + v19 - v43;
          if ( !UserGachaMaster__TryGetEntity(Master_object, &entity, userIdNumber, listRoot->fields._stringLength, 0) )
            goto LABEL_41;
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v19,
                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot )
            break;
          if ( listRoot[4].fields._stringLength < 1 )
            goto LABEL_41;
          if ( !entity )
            break;
          num = entity->fields.num;
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v19,
                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot )
            break;
          if ( num >= listRoot[4].fields._stringLength )
          {
            v28 = -1;
            v30 = 1;
            ++v43;
          }
          else
          {
LABEL_41:
            v30 = 0;
          }
          v31 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
          System_Action_int____ctor(v31, (Il2CppObject *)this, (intptr_t)Method_SummonListDialog_OnClickBanner__, 0);
          if ( !v22 )
            break;
          SummonBannerIconComponent__SetInfo((SummonBannerIconComponent_o *)v22, v28, v24, v30, v25, v31, 0);
          objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
          listRoot = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
          if ( !objectList )
            break;
          items = objectList->fields._items;
          v36 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++objectList->fields._version;
          if ( !items )
            break;
          size = objectList->fields._size;
          v38 = listRoot;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              objectList,
              (Il2CppObject *)listRoot,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + size;
            objectList->fields._size = size + 1;
            v39[4] = (Il2CppClass *)v38;
            sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v38, v33, v34);
          }
        }
        if ( ++v19 >= dispGachaList->fields._size )
          goto LABEL_51;
      }
LABEL_53:
      sub_1C372B4(listRoot);
    }
LABEL_51:
    SummonListDialog__RepositionBanner(this, v18);
    BaseDialog__Init((BaseDialog_o *)this, 0);
    this->fields.isInit = 1;
  }
}


void SummonListDialog__OnClickBanner(SummonListDialog_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  struct SummonControl_o *summonControl; // x8
  struct SummonControl_o *v11; // x8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_4C3F593 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SummonListDialog_OnClickBanner__);
    sub_1C37058(&Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__);
    sub_1C37058(&SummonListDialog___c__DisplayClass14_0_TypeInfo);
    byte_4C3F593 = 1;
  }
  v5 = sub_1C372A4(SummonListDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 24) = index;
  summonControl = this->fields.summonControl;
  if ( !summonControl )
    goto LABEL_19;
  if ( summonControl->fields.currentMoveIdx == index )
  {
    SummonListDialog__OnClickClose(this, v9);
    return;
  }
  if ( (index & 0x80000000) == 0 )
  {
    bannerLoopCtr = (UnityEngine_Component_o *)summonControl->fields.bannerLoopCtr;
    if ( !bannerLoopCtr )
      goto LABEL_19;
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
    if ( !bannerLoopCtr )
      goto LABEL_19;
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)bannerLoopCtr,
                                                 0);
    if ( (int)bannerLoopCtr > *(_DWORD *)(v5 + 24) )
    {
      v11 = this->fields.summonControl;
      if ( v11 )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)v11->fields.maskObject;
        if ( bannerLoopCtr )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bannerLoopCtr, 1, 0);
          MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
          v12 = Method_SummonListDialog_OnClickBanner__;
          if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1C37070(Method_SummonListDialog_OnClickBanner__);
          v13 = (System_Reflection_MethodBase_o *)sub_1C3703C(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
          v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v14,
            (Il2CppObject *)v5,
            Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__,
            0);
          SummonListDialog__Close(this, v14, v15);
          return;
        }
      }
LABEL_19:
      sub_1C372B4(bannerLoopCtr);
    }
  }
  v16 = Method_SummonListDialog_OnClickBanner__;
  if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1C37070(Method_SummonListDialog_OnClickBanner__);
  v17 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0, 0);
}


void SummonListDialog__OnClickClose(SummonListDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3F596 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonListDialog_OnClickClose__);
    byte_4C3F596 = 1;
  }
  if ( this->fields.isInit )
  {
    v3 = Method_SummonListDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonListDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SummonListDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SummonListDialog__Close(this, 0, v5);
  }
}


void SummonListDialog__Open(SummonListDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C3F594 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SummonListDialog__Open_b__15_0__);
    byte_4C3F594 = 1;
  }
  if ( this->fields.isInit )
  {
    v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_SummonListDialog__Open_b__15_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0, 0);
  }
}


void SummonListDialog__RepositionBanner(SummonListDialog_o *this, const MethodInfo *method)
{
  SummonListDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  struct UIGrid_o *listRoot; // x9
  float size; // s8
  float maxPerLine; // s9
  float v7; // s8
  struct UIGrid_o *v8; // x8
  unsigned int v9; // w10
  signed int v10; // w22
  struct UIGrid_o *v11; // x8
  float v12; // s0
  bool v13; // nf
  float v14; // s0
  int v15; // w23
  float v16; // s9
  struct UIGrid_o *v17; // x8
  int v18; // w8
  int32_t v19; // w2
  struct UIGrid_o *v20; // x8
  int m_CancellationTokenSource; // w9
  System_Collections_Generic_List_object__o *v22; // x20
  bool v23; // vf
  int v24; // w9
  int32_t v25; // w21
  float v26; // s10
  struct UIGrid_o *v27; // x8
  float cellWidth; // s12
  float cellHeight; // s13
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C3F592 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (SummonListDialog_o *)sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4C3F592 = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  listRoot = v2->fields.listRoot;
  if ( !listRoot )
    goto LABEL_33;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_4C3CFE8 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3CFE8 = 1;
  }
  v7 = size / maxPerLine;
  this = (SummonListDialog_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = v2->fields.listRoot;
  v9 = vcvtps_s32_f32(v7);
  v10 = ceilf(v7) == INFINITY ? 0x80000000 : v9;
  if ( !v8 )
    goto LABEL_33;
  GameObjectExtensions__SetLocalPositionY(
    v2->fields.centerRoot,
    (float)(v8->fields.cellHeight * 0.5) * (float)(v10 - 1),
    0);
  v11 = v2->fields.listRoot;
  if ( !v11 )
    goto LABEL_33;
  LODWORD(v12) = *(_QWORD *)&NGUIMath__GetPivotOffset(v11->fields.pivot, 0);
  if ( v10 >= 1 )
  {
    v13 = v12 < 0.0;
    v14 = fminf(v12, 1.0);
    v15 = 0;
    if ( v13 )
      v16 = 0.0;
    else
      v16 = v14;
    while ( 1 )
    {
      v17 = v2->fields.listRoot;
      if ( !v17 )
        goto LABEL_33;
      this = (SummonListDialog_o *)v2->fields.objectList;
      if ( !this )
        goto LABEL_33;
      v18 = v17->fields.maxPerLine;
      v19 = LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15 >= v18
          ? v18
          : LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15;
      this = (SummonListDialog_o *)System_Collections_Generic_List_object___GetRange(
                                     (System_Collections_Generic_List_object__o *)this,
                                     v18 * v15,
                                     v19,
                                     (const MethodInfo_37A3BF4 *)Method_System_Collections_Generic_List_GameObject__GetRange__);
      if ( !this )
        goto LABEL_33;
      v20 = v2->fields.listRoot;
      if ( !v20 )
        goto LABEL_33;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v22 = (System_Collections_Generic_List_object__o *)this;
      v23 = __OFSUB__(m_CancellationTokenSource, 1);
      v24 = m_CancellationTokenSource - 1;
      if ( v24 < 0 == v23 )
        break;
LABEL_31:
      if ( ++v15 == v10 )
        return;
    }
    v25 = 0;
    v26 = (float)(v16 * (float)(v20->fields.cellWidth * (float)v24)) + 0.0;
    while ( 1 )
    {
      this = (SummonListDialog_o *)System_Collections_Generic_List_object___get_Item(
                                     v22,
                                     v25,
                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      v27 = v2->fields.listRoot;
      if ( !v27 )
        break;
      if ( !this )
        break;
      cellWidth = v27->fields.cellWidth;
      cellHeight = v27->fields.cellHeight;
      this = (SummonListDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        break;
      v30.fields.x = (float)(cellWidth * (float)v25) - v26;
      v30.fields.y = (float)v15 * (float)-cellHeight;
      v30.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0);
      if ( ++v25 >= v22->fields._size )
        goto LABEL_31;
    }
LABEL_33:
    sub_1C372B4(this);
  }
}


void SummonListDialog___Open_b__15_0(SummonListDialog_o *this, const MethodInfo *method)
{
  SummonListDialog___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__15_1; // x20
  Il2CppObject *v6; // x21
  struct SummonListDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3F598 & 1) == 0 )
  {
    sub_1C37058(&System_Action_GameObject__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C37058(&Method_SummonListDialog___c__Open_b__15_1__);
    sub_1C37058(&SummonListDialog___c_TypeInfo);
    byte_4C3F598 = 1;
  }
  v3 = SummonListDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !SummonListDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonListDialog___c_TypeInfo);
    v3 = SummonListDialog___c_TypeInfo;
  }
  _9__15_1 = (System_Action_object__o *)v3->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SummonListDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__15_1 = (System_Action_object__o *)sub_1C372A4(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_1, v6, Method_SummonListDialog___c__Open_b__15_1__, 0);
    static_fields = SummonListDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Action_GameObject__o *)_9__15_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__15_1, (int32_t)_9__15_1, v8, v9);
  }
  if ( !objectList )
    sub_1C372B4(v3);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__15_1,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void SummonListDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3F599 & 1) == 0 )
  {
    sub_1C37058(&SummonListDialog___c_TypeInfo);
    byte_4C3F599 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SummonListDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonListDialog___c_TypeInfo->static_fields->__9 = (struct SummonListDialog___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SummonListDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SummonListDialog___c___ctor(SummonListDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonListDialog___c___Close_b__16_0(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4C3F59B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F59B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)obj, 0);
  }
}


void SummonListDialog___c___Open_b__15_1(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0

  if ( (byte_4C3F59A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F59A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v4 )
  {
    if ( !obj )
      sub_1C372B4(v4);
    UnityEngine_GameObject__SetActive(obj, 1, 0);
  }
}


void SummonListDialog___c__DisplayClass12_0___ctor(
        SummonListDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonListDialog___c__DisplayClass12_0___Init_b__0(
        SummonListDialog___c__DisplayClass12_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.summonListGroupId == this->fields.currentSummonListGroupId;
}


void SummonListDialog___c__DisplayClass14_0___ctor(
        SummonListDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonListDialog___c__DisplayClass14_0___OnClickBanner_b__0(
        SummonListDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct SummonListDialog_o *_4__this; // x8
  SummonControl_o *summonControl; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (summonControl = _4__this->fields.summonControl) == 0 )
    sub_1C372B4(this);
  SummonControl__OnClickMiniBanner(summonControl, this->fields.index, 0, 0);
}