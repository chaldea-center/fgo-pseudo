void AchievementExchangeConditionsDialog___ctor(AchievementExchangeConditionsDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x2

  if ( (byte_5969E33 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_5969E33 = 1;
  }
  v3 = System_Collections_Generic_List_GameObject__TypeInfo;
  *(_OWORD *)&this->fields.scrollViewPosShopListNum1.fields.x = xmmword_E9BC20;
  *(_OWORD *)&this->fields.scrollViewPosShopListNum2.fields.y = xmmword_E9CFD0;
  *(_OWORD *)&this->fields.scrollViewPosShopListNum3.fields.z = xmmword_E9C300;
  *(_OWORD *)&this->fields.scrollViewPosShopListNum5.fields.x = xmmword_E9C900;
  *(_QWORD *)&this->fields.scrollViewPosDefault.fields.y = 1118306304;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shopNameList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_2213A04(&this->fields.shopNameList, v4);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v5, v6);
  BaseDialog___ctor((BaseDialog_o *)this, v5);
}


void AchievementExchangeConditionsDialog__Callback(
        AchievementExchangeConditionsDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *p_callbackFunc = 0;
  sub_2213A04(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
}


void AchievementExchangeConditionsDialog__Close(
        AchievementExchangeConditionsDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_5969E30 & 1) == 0 )
  {
    sub_2213A60(&Method_AchievementExchangeConditionsDialog_EndClose__);
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969E30 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(&this->fields.closeCallbackFunc, callback);
  v5 = System_Action_TypeInfo;
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_2213CCC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AchievementExchangeConditionsDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
}


void AchievementExchangeConditionsDialog__EndClose(
        AchievementExchangeConditionsDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AchievementExchangeConditionsDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_2213A04(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void AchievementExchangeConditionsDialog__EndOpen(
        AchievementExchangeConditionsDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void AchievementExchangeConditionsDialog__Init(AchievementExchangeConditionsDialog_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_5969E2D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969E2D = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel )
    sub_2213CDC(0, method);
  UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  AchievementExchangeConditionsDialog__InitShopNameList(this, v4);
  BaseDialog__Init((BaseDialog_o *)this, v5);
}


void AchievementExchangeConditionsDialog__InitShopNameList(
        AchievementExchangeConditionsDialog_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *shopNameList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5969E2E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E2E = 1;
  }
  shopNameList = this->fields.shopNameList;
  memset(&v7, 0, sizeof(v7));
  if ( !shopNameList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)shopNameList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void AchievementExchangeConditionsDialog__OnClickCancel(
        AchievementExchangeConditionsDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo_47A29F8 *v5; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_5969E31 & 1) == 0 )
  {
    sub_2213A60(&Method_AchievementExchangeConditionsDialog_Callback__);
    sub_2213A60(&Method_AchievementExchangeConditionsDialog_OnClickCancel__);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5969E31 = 1;
  }
  if ( this->fields.state == 2 )
  {
    AchievementExchangeConditionsDialog__InitShopNameList(this, method);
    v3 = Method_AchievementExchangeConditionsDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AchievementExchangeConditionsDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78();
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    this->fields.state = 3;
    Instance = SingletonMonoBehaviour_object___get_Instance(v5);
    v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_AchievementExchangeConditionsDialog_Callback__, 0);
    if ( !Instance )
      sub_2213CDC(v8, v9);
    CommonUI__CloseAchievementExchangeConditionsDialog((CommonUI_o *)Instance, v7, 0);
  }
}


void AchievementExchangeConditionsDialog__Open(
        AchievementExchangeConditionsDialog_o *this,
        System_Int32_array *shopIds,
        System_String_o *title,
        System_String_o *detail,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UILabel_o *titleLabel; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *closeLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x2
  il2cpp_array_size_t max_length; // x1
  unsigned __int64 v19; // x25
  UnityEngine_GameObject_o *grid; // x21
  UnityEngine_GameObject_o *shopListLabel; // x22
  UnityEngine_GameObject_o *v22; // x21
  UILabel_o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *Component_object; // x22
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8
  System_Action_c *v31; // x0
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x4

  if ( (byte_5969E2F & 1) == 0 )
  {
    sub_2213A60(&Method_AchievementExchangeConditionsDialog_EndOpen__);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1992/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_SHOP_NAME"*/);
    byte_5969E2F = 1;
  }
  this->fields.callbackFunc = callback;
  sub_2213A04(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, title, 0);
  titleLabel = this->fields.detailLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, detail, 0);
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_29;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  titleLabel = (UILabel_o *)this->fields.closeBtn;
  if ( !titleLabel )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
  if ( !shopIds )
    goto LABEL_29;
  max_length = shopIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      grid = this->fields.grid;
      shopListLabel = this->fields.shopListLabel;
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, max_length, v17);
      v22 = NGUITools__AddChild_56415424(grid, shopListLabel, 0);
      titleLabel = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)titleLabel,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
      if ( v19 >= LODWORD(shopIds->max_length) )
        sub_2213CE4(titleLabel);
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)titleLabel,
                                  shopIds->m_Items[v19],
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !v22 )
        break;
      v23 = titleLabel;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v22,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
      titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1992/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_SHOP_NAME"*/, 0);
      if ( !v23 )
        break;
      titleLabel = (UILabel_o *)System_String__Format(
                                  (System_String_o *)titleLabel,
                                  *(Il2CppObject **)&v23->fields.mAnchorsCached,
                                  0);
      if ( !Component_object )
        break;
      UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)titleLabel, 0);
      UnityEngine_GameObject__SetActive(v22, 1, 0);
      titleLabel = (UILabel_o *)this->fields.shopNameList;
      if ( !titleLabel )
        break;
      m_CachedPtr = titleLabel->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(titleLabel->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(titleLabel->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)titleLabel,
          (Il2CppObject *)v22,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(titleLabel->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v30 + 32) = v22;
        sub_2213A04(v30 + 32, v22);
      }
      max_length = shopIds->max_length;
      if ( (__int64)++v19 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_29:
    sub_2213CDC(titleLabel, v11);
  }
LABEL_28:
  AchievementExchangeConditionsDialog__ScrollViewPositionAdjustment(this, max_length, v17);
  v31 = System_Action_TypeInfo;
  this->fields.state = 1;
  v32 = (System_Action_o *)sub_2213CCC(v31);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_AchievementExchangeConditionsDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0, v33);
}


// local variable allocation has failed, the output may be wrong!
void AchievementExchangeConditionsDialog__ScrollViewPositionAdjustment(
        AchievementExchangeConditionsDialog_o *this,
        int32_t num,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_o *p_scrollViewPosShopListNum1; // x8
  float *p_y; // x9
  UIPanel_o *scrollView; // x0
  UnityEngine_Vector4_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( num <= 2 )
  {
    if ( num == 1 )
    {
      p_scrollViewPosShopListNum1 = &this->fields.scrollViewPosShopListNum1;
      p_y = &this->fields.scrollViewPosShopListNum1.fields.y;
      goto LABEL_13;
    }
    if ( num == 2 )
    {
      p_scrollViewPosShopListNum1 = &this->fields.scrollViewPosShopListNum2;
      p_y = &this->fields.scrollViewPosShopListNum2.fields.y;
      goto LABEL_13;
    }
  }
  else
  {
    switch ( num )
    {
      case 3:
        p_scrollViewPosShopListNum1 = &this->fields.scrollViewPosShopListNum3;
        p_y = &this->fields.scrollViewPosShopListNum3.fields.y;
        goto LABEL_13;
      case 4:
        p_scrollViewPosShopListNum1 = &this->fields.scrollViewPosShopListNum4;
        p_y = &this->fields.scrollViewPosShopListNum4.fields.y;
        goto LABEL_13;
      case 5:
        p_scrollViewPosShopListNum1 = &this->fields.scrollViewPosShopListNum5;
        p_y = &this->fields.scrollViewPosShopListNum5.fields.y;
        goto LABEL_13;
    }
  }
  p_scrollViewPosShopListNum1 = &this->fields.scrollViewPosDefault;
  p_y = &this->fields.scrollViewPosDefault.fields.y;
LABEL_13:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_2213CDC(0, *(_QWORD *)&num);
  v6.fields.y = *p_y;
  v6.fields.x = p_scrollViewPosShopListNum1->fields.x;
  v6.fields.z = 680.0;
  v6.fields.w = 170.0;
  UIPanel__set_baseClipRegion(scrollView, v6, 0);
}


void AchievementExchangeConditionsDialog__add_callbackFunc(
        AchievementExchangeConditionsDialog_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  AchievementExchangeConditionsDialog_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5969E2B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969E2B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (AchievementExchangeConditionsDialog_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  AchievementExchangeConditionsDialog__remove_callbackFunc(v13, v14, v15);
}


UnityEngine_GameObject_o *AchievementExchangeConditionsDialog__get_closeBtnObject(
        AchievementExchangeConditionsDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5969E32 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E32 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void AchievementExchangeConditionsDialog__remove_callbackFunc(
        AchievementExchangeConditionsDialog_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  AchievementExchangeConditionsDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5969E2C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969E2C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (AchievementExchangeConditionsDialog_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  AchievementExchangeConditionsDialog__Init(v13, v14);
}