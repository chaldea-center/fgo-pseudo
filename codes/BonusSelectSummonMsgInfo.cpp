void BonusSelectSummonMsgInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4C236A1 & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonMsgInfo_TypeInfo);
    byte_4C236A1 = 1;
  }
  LODWORD(BonusSelectSummonMsgInfo_TypeInfo->static_fields->BONUS_SELECT_MESSAGE_LABEL_Y) = (struct BonusSelectSummonMsgInfo_StaticFields)-1029963776;
}


void BonusSelectSummonMsgInfo___ctor(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C236A0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C236A0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.menberList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.menberList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BonusSelectSummonMsgInfo__CheckAssert(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  ;
}


void BonusSelectSummonMsgInfo__Init(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2369C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    byte_4C2369C = 1;
  }
  memset(&v6, 0, sizeof(v6));
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.selectInfoLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v4);
  titleLabel = (UILabel_o *)this->fields.menberList;
  if ( !titleLabel )
    goto LABEL_15;
  if ( SLODWORD(titleLabel->fields.m_CancellationTokenSource) >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_object__o *)titleLabel,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v6,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v6.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
LABEL_15:
    sub_1C2D6EC(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
}


void BonusSelectSummonMsgInfo__InitMsgLabel(BonusSelectSummonMsgInfo_o *this, const MethodInfo *method)
{
  UILabel_o *msgLabelSplitTop; // x0

  if ( (byte_4C2369F & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    byte_4C2369F = 1;
  }
  msgLabelSplitTop = this->fields.msgLabelSplitTop;
  if ( !msgLabelSplitTop
    || (UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0),
        (msgLabelSplitTop = this->fields.msgLabelSplitCenter) == 0)
    || (UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0),
        (msgLabelSplitTop = this->fields.msgLabelSplitLow) == 0)
    || (UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0),
        (msgLabelSplitTop = this->fields.msgLabel) == 0) )
  {
    sub_1C2D6EC(msgLabelSplitTop, method);
  }
  UILabel__set_text(msgLabelSplitTop, string_TypeInfo->static_fields->Empty, 0);
}


void BonusSelectSummonMsgInfo__SetBase(
        BonusSelectSummonMsgInfo_o *this,
        int32_t gachaId,
        System_String_o *title,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v14; // x1
  Il2CppObject *Master_object; // x21
  __int64 v16; // x2
  __int64 v17; // x25
  int v18; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  __int64 v20; // x26
  __int64 v21; // x28
  Il2CppObject *MsgInfoMenberPrefab_k__BackingField; // x23
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v24; // x23
  BonusSelectSummonMsgInfoMenber_o *v25; // x24
  const MethodInfo *v26; // x2
  Il2CppObject *Entity; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  intptr_t v33; // x8
  __int64 v34; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2369E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_3730/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/);
    byte_4C2369E = 1;
  }
  v34 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)gameObject, title, 0);
  selectInfoLabel = this->fields.selectInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3730/*"CONFIRM_BONUS_SELECT_SUMMON_INFO"*/, 0);
  if ( !selectInfoLabel )
    goto LABEL_38;
  UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0);
  if ( !tryGetBonusSelectData )
    goto LABEL_38;
  if ( (((__int64 (__fastcall *)(intptr_t, __int64 *, _QWORD, intptr_t))tryGetBonusSelectData->fields.invoke_impl)(
          tryGetBonusSelectData->fields.method_code,
          &v34,
          (unsigned int)gachaId,
          tryGetBonusSelectData->fields.method)
      & 1) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v34 )
      goto LABEL_38;
    v17 = *(_QWORD *)(v34 + 24);
    if ( v17 )
    {
      v18 = *(_DWORD *)(v17 + 24);
      if ( v18 >= 1 )
      {
        v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
        v20 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v20 >= v18 )
            sub_1C2D6F4(gameObject, v12, v16);
          if ( !assetManager )
            break;
          gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
          if ( !gameObject )
            break;
          v21 = *(_QWORD *)(v17 + 32 + 8 * v20);
          MsgInfoMenberPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoMenberPrefab_k__BackingField;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51752420(
                                                     MsgInfoMenberPrefab_k__BackingField,
                                                     transform,
                                                     (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
          if ( !gameObject )
            break;
          v24 = (Il2CppObject *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfoMenber___);
          if ( !gameObject )
            break;
          v25 = (BonusSelectSummonMsgInfoMenber_o *)gameObject;
          BonusSelectSummonMsgInfoMenber__Init((BonusSelectSummonMsgInfoMenber_o *)gameObject, v12);
          if ( !v21 || !Master_object )
            break;
          gameObject = (UnityEngine_GameObject_o *)GiftMaster__getDataById(
                                                     (GiftMaster_o *)Master_object,
                                                     *(_DWORD *)(v21 + 28),
                                                     0);
          if ( gameObject )
          {
            if ( !v19 )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v19,
                       (int32_t)gameObject[1].klass,
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          }
          else
          {
            Entity = 0;
          }
          BonusSelectSummonMsgInfoMenber__Set(v25, (ServantEntity_o *)Entity, v26);
          gameObject = (UnityEngine_GameObject_o *)this->fields.menberList;
          if ( !gameObject )
            break;
          m_CachedPtr = gameObject->fields.m_CachedPtr;
          v31 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(gameObject[1].klass);
          if ( !m_CachedPtr )
            break;
          klass_low = SLODWORD(gameObject[1].klass);
          if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)gameObject,
              v24,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = m_CachedPtr + 8 * klass_low;
            LODWORD(gameObject[1].klass) = klass_low + 1;
            *(_QWORD *)(v33 + 32) = v24;
            sub_1C2D434((CGThumbnailListItem_o *)(v33 + 32), (int32_t)v24, v28, v29);
          }
          v18 = *(_DWORD *)(v17 + 24);
          if ( (int)++v20 >= v18 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1C2D6EC(gameObject, v12);
      }
    }
LABEL_35:
    gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
  }
  BonusSelectSummonMsgInfo__InitMsgLabel(this, v14);
}


void BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
        BonusSelectSummonMsgInfo_o *this,
        int32_t gachaId,
        System_String_o *title,
        System_String_o *msg,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UILabel_o *msgLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BonusSelectSummonMsgInfo_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x19

  if ( (byte_4C2369D & 1) == 0 )
  {
    sub_1C2D490(&BonusSelectSummonMsgInfo_TypeInfo);
    byte_4C2369D = 1;
  }
  BonusSelectSummonMsgInfo__SetBase(
    this,
    gachaId,
    title,
    tryGetBonusSelectData,
    assetManager,
    (const MethodInfo *)assetManager);
  msgLabel = this->fields.msgLabel;
  if ( !msgLabel || (UILabel__set_text(msgLabel, msg, 0), (msgLabel = this->fields.msgLabel) == 0) )
    sub_1C2D6EC(msgLabel, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)msgLabel, 0);
  v16 = BonusSelectSummonMsgInfo_TypeInfo;
  v17 = gameObject;
  if ( !BonusSelectSummonMsgInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonMsgInfo_TypeInfo);
    v16 = BonusSelectSummonMsgInfo_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(v17, v16->static_fields->BONUS_SELECT_MESSAGE_LABEL_Y, 0);
}


void BonusSelectSummonMsgInfo__SetCautionDlg(
        BonusSelectSummonMsgInfo_o *this,
        int32_t gachaId,
        System_String_o *title,
        System_String_o *msg,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UILabel_o *msgLabel; // x0

  BonusSelectSummonMsgInfo__SetBase(
    this,
    gachaId,
    title,
    tryGetBonusSelectData,
    assetManager,
    (const MethodInfo *)assetManager);
  msgLabel = this->fields.msgLabel;
  if ( !msgLabel )
    sub_1C2D6EC(0, v9);
  UILabel__set_text(msgLabel, msg, 0);
}


void BonusSelectSummonMsgInfo__SetConfirmDlg(
        BonusSelectSummonMsgInfo_o *this,
        int32_t gachaId,
        System_String_o *title,
        System_String_o *msgTop,
        System_String_o *msgCenter,
        System_String_o *msgLow,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UILabel_o *msgLabelSplitTop; // x0

  BonusSelectSummonMsgInfo__SetBase(
    this,
    gachaId,
    title,
    tryGetBonusSelectData,
    assetManager,
    (const MethodInfo *)msgLow);
  msgLabelSplitTop = this->fields.msgLabelSplitTop;
  if ( !msgLabelSplitTop
    || (UILabel__set_text(msgLabelSplitTop, msgTop, 0), (msgLabelSplitTop = this->fields.msgLabelSplitCenter) == 0)
    || (UILabel__set_text(msgLabelSplitTop, msgCenter, 0), (msgLabelSplitTop = this->fields.msgLabelSplitLow) == 0) )
  {
    sub_1C2D6EC(msgLabelSplitTop, v13);
  }
  UILabel__set_text(msgLabelSplitTop, msgLow, 0);
}


void BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A6D8A4;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A6D8C8;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A6D840;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BonusSelectSummonMsgInfo_TryGetBonusSelectData__BeginInvoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
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
  if ( (byte_4C236A2 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C236A2 = 1;
  }
  v12 = 0;
  v13 = 0;
  v11 = *data;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v14, *(_QWORD *)&gachaId, callback, object);
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v11, callback, object);
}


bool BonusSelectSummonMsgInfo_TryGetBonusSelectData__EndInvoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  SelectBonusData_o **v6; // [xsp+8h] [xbp-8h] BYREF

  v6 = data;
  if ( !sub_1C2D448(result, &v6, result) )
    sub_1C2D6EC(0, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0();
}


bool BonusSelectSummonMsgInfo_TryGetBonusSelectData__Invoke(
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *this,
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