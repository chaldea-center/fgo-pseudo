void __fastcall BattleSelectMainSubServantWindow___ctor(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  this->fields.isSelected = 1;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0LL);
}


bool __fastcall BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21

  if ( (byte_49FF36F & 1) == 0 )
  {
    this = (BattleSelectMainSubServantWindow_o *)sub_1B640C8(
                                                   &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                   servantData);
    byte_49FF36F = 1;
  }
  if ( !servantData
    || (buffData = servantData->fields.buffData,
        v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            servantData,
                                                            method),
        BattleBuffData_CheckIndividualitiesData___ctor(v5, servantData, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData)
    || (this = (BattleSelectMainSubServantWindow_o *)BattleBuffData__getBuffList_42092284(
                                                       buffData,
                                                       84,
                                                       v5,
                                                       1,
                                                       0,
                                                       0LL,
                                                       0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  return this->fields.m_CancellationTokenSource == 0LL;
}


void __fastcall BattleSelectMainSubServantWindow__Close(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  __int64 v6; // x1
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v8; // x21
  int max_length; // w9
  BattleSelectServantComponent_o *v10; // x8
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v12; // x21
  int v13; // w9
  BattleSelectServantComponent_o *v14; // x8

  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
  mainSvtList = this->fields.mainSvtList;
  this->fields.isSelected = 1;
  if ( !mainSvtList )
    goto LABEL_17;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
LABEL_19:
      sub_1B6432C(parentPanel, v6);
    v10 = mainSvtList->m_Items[v8];
    if ( v10 )
    {
      parentPanel = (UnityEngine_GameObject_o *)v10->fields.servantIcon;
      if ( parentPanel )
      {
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0LL);
        mainSvtList = this->fields.mainSvtList;
        ++v8;
        if ( mainSvtList )
          continue;
      }
    }
    goto LABEL_17;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_17:
    sub_1B64324(parentPanel);
  v12 = 0LL;
  while ( 1 )
  {
    v13 = subSvtList->max_length;
    if ( (int)v12 >= v13 )
      break;
    if ( (unsigned int)v12 >= v13 )
      goto LABEL_19;
    v14 = subSvtList->m_Items[v12];
    if ( v14 )
    {
      parentPanel = (UnityEngine_GameObject_o *)v14->fields.servantIcon;
      if ( parentPanel )
      {
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0LL);
        subSvtList = this->fields.subSvtList;
        ++v12;
        if ( subSvtList )
          continue;
      }
    }
    goto LABEL_17;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


// attributes: thunk
void __fastcall BattleSelectMainSubServantWindow__Open(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow__OpenImpl(this, call, method);
}


void __fastcall BattleSelectMainSubServantWindow__OpenImpl(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleData_o *battleData; // x0
  BattleServantData_array *v7; // x21
  BattleServantData_array *SubPlayerServantList; // x0
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  __int64 v11; // x2
  BattleWindowOuterClickComponent_OuterClickCall_o *v12; // x20

  if ( (byte_49FF36B & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleSelectMainSubServantWindow_onCloseButton__, call);
    sub_1B640C8(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_49FF36B = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData )
    goto LABEL_9;
  battleData = (BattleData_o *)BattleData__getFieldPlayerServantList(battleData, 0LL);
  if ( !this->fields.battleData )
    goto LABEL_9;
  v7 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0LL);
  BattleSelectMainSubServantWindow__SetServantData(this, v7, SubPlayerServantList, v9);
  battleData = (BattleData_o *)this->fields.parentPanel;
  if ( !battleData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleData, 1, 0LL),
        (battleData = (BattleData_o *)this->fields.actButton) == 0LL)
    || (((void (__fastcall *)(BattleData_o *, _QWORD, void *))battleData->klass->vtable._5_isAiTarget.method)(
          battleData,
          0LL,
          battleData->klass[1]._1.image),
        (battleData = (BattleData_o *)this->fields.actButton) == 0LL) )
  {
LABEL_9:
    sub_1B64324(battleData);
  }
  ((void (__fastcall *)(BattleData_o *, __int64, __int64, void *))battleData->klass[1]._1.events)(
    battleData,
    3LL,
    1LL,
    battleData->klass[1]._1.properties);
  this->fields.isSelected = 0;
  *(_QWORD *)&this->fields.mainSelect_uniqueId = 0LL;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v12 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1B64314(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v10,
                                                              v11);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleSelectMainSubServantWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v12,
    0LL);
}


void __fastcall BattleSelectMainSubServantWindow__SetCallBack(
        BattleSelectMainSubServantWindow_o *this,
        BattleSelectMainSubServantWindow_SelectedCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callBack = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callBack, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall BattleSelectMainSubServantWindow__SetServantData(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_array *mainList,
        BattleServantData_array *subList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *title_label; // x22
  System_String_o *v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v15; // x27
  unsigned __int64 max_length; // x9
  unsigned __int64 v17; // x28
  unsigned __int64 v18; // x9
  BattleSelectServantComponent_o *v19; // x22
  BattleServantData_o *v20; // x23
  BattleSelectServantComponent_CallBack_o *v21; // x24
  const MethodInfo *v22; // x3
  int32_t v23; // w3
  const MethodInfo *v24; // x5
  const MethodInfo *v25; // x2
  struct BattleSelectServantComponent_array *v26; // x8
  BattleSelectServantComponent_o *v27; // x22
  const MethodInfo *v28; // x2
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v30; // x24
  unsigned __int64 v31; // x9
  unsigned __int64 v32; // x27
  unsigned __int64 v33; // x9
  BattleSelectServantComponent_o *v34; // x21
  BattleServantData_o *v35; // x22
  BattleSelectServantComponent_CallBack_o *v36; // x23
  const MethodInfo *v37; // x3
  int32_t v38; // w3
  const MethodInfo *v39; // x5
  const MethodInfo *v40; // x2
  struct BattleSelectServantComponent_array *v41; // x8
  BattleSelectServantComponent_o *v42; // x21
  const MethodInfo *v43; // x2

  if ( (byte_49FF36A & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleSelectMainSubServantWindow_selectSvt__, mainList);
    sub_1B640C8(&BattleSelectServantComponent_CallBack_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_2850/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, v9);
    byte_49FF36A = 1;
  }
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2850/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_39;
  UILabel__set_text(title_label, v11, 0LL);
  mainSvtList = this->fields.mainSvtList;
  if ( !mainSvtList )
    goto LABEL_39;
  v15 = 4LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    v17 = v15 - 4;
    if ( v15 - 4 >= (int)max_length )
      break;
    if ( !mainList )
      goto LABEL_39;
    if ( v17 >= max_length )
LABEL_41:
      sub_1B6432C(v11, v12);
    v18 = mainList->max_length;
    v19 = (BattleSelectServantComponent_o *)*((_QWORD *)&mainSvtList->obj.klass + v15);
    if ( (__int64)v17 >= (int)v18 )
    {
      if ( !v19 )
        goto LABEL_39;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&mainSvtList->obj.klass + v15), v12);
    }
    else
    {
      if ( v17 >= v18 )
        goto LABEL_41;
      v20 = (BattleServantData_o *)*((_QWORD *)&mainList->obj.klass + v15);
      v21 = (BattleSelectServantComponent_CallBack_o *)sub_1B64314(
                                                         BattleSelectServantComponent_CallBack_TypeInfo,
                                                         v12,
                                                         v13);
      BattleSelectServantComponent_CallBack___ctor(
        v21,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        v22);
      if ( !v19 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v19, v20, 1, v23, v21, v24);
      v26 = this->fields.mainSvtList;
      if ( !v26 )
        goto LABEL_39;
      if ( v17 >= v26->max_length || v17 >= mainList->max_length )
        goto LABEL_41;
      v27 = (BattleSelectServantComponent_o *)*((_QWORD *)&v26->obj.klass + v15);
      v11 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                 (BattleSelectMainSubServantWindow_o *)v11,
                                 *((BattleServantData_o **)&mainList->obj.klass + v15),
                                 v25);
      if ( !v27 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v27, (unsigned __int8)v11 & 1, v28);
    }
    mainSvtList = this->fields.mainSvtList;
    ++v15;
    if ( !mainSvtList )
      goto LABEL_39;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_39:
    sub_1B64324(v11);
  v30 = 4LL;
  while ( 1 )
  {
    v31 = subSvtList->max_length;
    v32 = v30 - 4;
    if ( v30 - 4 >= (int)v31 )
      break;
    if ( !subList )
      goto LABEL_39;
    if ( v32 >= v31 )
      goto LABEL_41;
    v33 = subList->max_length;
    v34 = (BattleSelectServantComponent_o *)*((_QWORD *)&subSvtList->obj.klass + v30);
    if ( (__int64)v32 >= (int)v33 )
    {
      if ( !v34 )
        goto LABEL_39;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&subSvtList->obj.klass + v30), v12);
    }
    else
    {
      if ( v32 >= v33 )
        goto LABEL_41;
      v35 = (BattleServantData_o *)*((_QWORD *)&subList->obj.klass + v30);
      v36 = (BattleSelectServantComponent_CallBack_o *)sub_1B64314(
                                                         BattleSelectServantComponent_CallBack_TypeInfo,
                                                         v12,
                                                         v13);
      BattleSelectServantComponent_CallBack___ctor(
        v36,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        v37);
      if ( !v34 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v34, v35, 2, v38, v36, v39);
      v41 = this->fields.subSvtList;
      if ( !v41 )
        goto LABEL_39;
      if ( v32 >= v41->max_length || v32 >= subList->max_length )
        goto LABEL_41;
      v42 = (BattleSelectServantComponent_o *)*((_QWORD *)&v41->obj.klass + v30);
      v11 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                 (BattleSelectMainSubServantWindow_o *)v11,
                                 *((BattleServantData_o **)&subList->obj.klass + v30),
                                 v40);
      if ( !v42 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v42, (unsigned __int8)v11 & 1, v43);
    }
    subSvtList = this->fields.subSvtList;
    ++v30;
    if ( !subSvtList )
      goto LABEL_39;
  }
}


void __fastcall BattleSelectMainSubServantWindow__atlasLoadEnd(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x0
  BattleServantData_array *v4; // x20
  BattleServantData_array *SubPlayerServantList; // x2
  const MethodInfo *v6; // x3

  battleData = this->fields.battleData;
  if ( !battleData
    || (battleData = (BattleData_o *)BattleData__getFieldPlayerServantList(battleData, 0LL), !this->fields.battleData) )
  {
    sub_1B64324(battleData);
  }
  v4 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0LL);
  BattleSelectMainSubServantWindow__SetServantData(this, v4, SubPlayerServantList, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow__endErrorDialog(
        BattleSelectMainSubServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FF36E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_49FF36E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  this->fields.isSelected = 0;
}


System_String_o *__fastcall BattleSelectMainSubServantWindow__get_closeBtnPath(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF370 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12845/*"Sprite"*/, method);
    byte_49FF370 = 1;
  }
  return (System_String_o *)StringLiteral_12845/*"Sprite"*/;
}


void __fastcall BattleSelectMainSubServantWindow__onActionButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  NotificationDialog_ClickDelegate_o *v15; // x23
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0

  v2 = this;
  if ( (byte_49FF36D & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleSelectMainSubServantWindow_endErrorDialog__, method);
    sub_1B640C8(&Method_BattleSelectMainSubServantWindow_onActionButton__, v3);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_2959/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, v7);
    this = (BattleSelectMainSubServantWindow_o *)sub_1B640C8(&StringLiteral_2960/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, v8);
    byte_49FF36D = 1;
  }
  if ( !v2->fields.isSelected )
  {
    if ( v2->fields.mainSelect_uniqueId < 1 || v2->fields.subSelect_uniqueId < 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, 0LL);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2959/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, 0LL);
      v15 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v13, v14);
      NotificationDialog_ClickDelegate___ctor(
        v15,
        (Il2CppObject *)v2,
        Method_BattleSelectMainSubServantWindow_endErrorDialog__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog_30347532(
          (CommonUI_o *)Instance,
          v11,
          v12,
          v15,
          -1,
          0,
          0,
          0,
          0,
          1,
          0LL,
          0LL,
          0,
          0,
          0LL,
          1,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_12;
      }
    }
    else
    {
      callBack = v2->fields.callBack;
      if ( callBack )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64))callBack->fields.m_target)(
          callBack->fields.original_method_info,
          1LL);
LABEL_12:
        v16 = Method_BattleSelectMainSubServantWindow_onActionButton__;
        if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onActionButton__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1B640E0(Method_BattleSelectMainSubServantWindow_onActionButton__);
        v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 8, 0LL);
        v2->fields.isSelected = 1;
        return;
      }
    }
    sub_1B64324(this);
  }
}


void __fastcall BattleSelectMainSubServantWindow__onCloseButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x8

  if ( (byte_49FF36C & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleSelectMainSubServantWindow_onCloseButton__, method);
    byte_49FF36C = 1;
  }
  if ( !this->fields.isSelected )
  {
    v3 = Method_BattleSelectMainSubServantWindow_onCloseButton__;
    if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_BattleSelectMainSubServantWindow_onCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0LL);
    callBack = this->fields.callBack;
    if ( !callBack )
      sub_1B64324(v5);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callBack->fields.m_target)(
      callBack->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.mainSelect_uniqueId,
      (unsigned int)this->fields.subSelect_uniqueId,
      *(_QWORD *)&callBack->fields.extra_arg);
    this->fields.isSelected = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow__selectSvt(
        BattleSelectMainSubServantWindow_o *this,
        int32_t position,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow_o *v4; // x19
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  int32_t v6; // w20
  __int64 v7; // x21
  int v8; // w9
  struct BattleSelectServantComponent_array *subSvtList; // x8
  int32_t v10; // w20
  __int64 v11; // x21
  int max_length; // w9
  BattleSelectMainSubServantWindow_c *klass; // x8

  v4 = this;
  if ( position == 2 )
  {
    subSvtList = this->fields.subSvtList;
    if ( this->fields.subSelect_uniqueId == uniqueId )
      v10 = 0;
    else
      v10 = uniqueId;
    if ( !subSvtList )
      goto LABEL_34;
    v11 = 0LL;
    while ( 1 )
    {
      max_length = subSvtList->max_length;
      if ( (int)v11 >= max_length )
        break;
      if ( (unsigned int)v11 >= max_length )
LABEL_35:
        sub_1B6432C(this, *(_QWORD *)&position);
      this = (BattleSelectMainSubServantWindow_o *)subSvtList->m_Items[v11];
      if ( this )
      {
        BattleSelectServantComponent__setTarget(
          (BattleSelectServantComponent_o *)this,
          v10,
          *(const MethodInfo **)&uniqueId);
        subSvtList = v4->fields.subSvtList;
        ++v11;
        if ( subSvtList )
          continue;
      }
      goto LABEL_34;
    }
    v4->fields.subSelect_uniqueId = v10;
  }
  else if ( position == 1 )
  {
    mainSvtList = this->fields.mainSvtList;
    if ( this->fields.mainSelect_uniqueId == uniqueId )
      v6 = 0;
    else
      v6 = uniqueId;
    if ( !mainSvtList )
      goto LABEL_34;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = mainSvtList->max_length;
      if ( (int)v7 >= v8 )
        break;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_35;
      this = (BattleSelectMainSubServantWindow_o *)mainSvtList->m_Items[v7];
      if ( this )
      {
        BattleSelectServantComponent__setTarget(
          (BattleSelectServantComponent_o *)this,
          v6,
          *(const MethodInfo **)&uniqueId);
        mainSvtList = v4->fields.mainSvtList;
        ++v7;
        if ( mainSvtList )
          continue;
      }
      goto LABEL_34;
    }
    v4->fields.mainSelect_uniqueId = v6;
  }
  if ( v4->fields.mainSelect_uniqueId < 1 || v4->fields.subSelect_uniqueId < 1 )
  {
    this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
    if ( this )
    {
      ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, _QWORD, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.method)(
        this,
        0LL,
        this->klass->vtable._6_get_closeBtnPath.methodPtr,
        method);
      this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
      if ( this )
      {
        klass = this->klass;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1B64324(this);
  }
  this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
  if ( !this )
    goto LABEL_34;
  ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, __int64, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    1LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr,
    method);
  this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
  if ( !this )
    goto LABEL_34;
  klass = this->klass;
LABEL_33:
  ((void (*)(void))klass[1]._1.gc_desc)();
}


void __fastcall BattleSelectMainSubServantWindow__setBattleData(
        BattleSelectMainSubServantWindow_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.battleData = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleData, (int32_t)data, (int32_t)method, v3);
}


void __fastcall BattleSelectMainSubServantWindow__setInitialPos(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F7111 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v4);
    byte_49F7111 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1B64324(gameObject);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
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
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AF6B0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AF650;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleSelectMainSubServantWindow_SelectedCallBack__BeginInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  _QWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v13; // [xsp+10h] [xbp-60h]
  int32_t v14; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v15; // [xsp+38h] [xbp-38h] BYREF
  char v16[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v16[0] = flg;
  v15 = mainUniqueId;
  v14 = subUniqueId;
  if ( (byte_49FF371 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, flg);
    sub_1B640C8(&int_TypeInfo, v10);
    byte_49FF371 = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v12, callback, object);
}


void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__EndInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    flg,
    mainUniqueId,
    subUniqueId,
    *(_QWORD *)&this->fields.extra_arg);
}