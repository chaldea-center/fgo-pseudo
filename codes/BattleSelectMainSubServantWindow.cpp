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

  if ( (byte_4211D5A & 1) == 0 )
  {
    this = (BattleSelectMainSubServantWindow_o *)sub_B0D8A4(
                                                   &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                   servantData);
    byte_4211D5A = 1;
  }
  if ( !servantData
    || (buffData = servantData->fields.buffData,
        v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            servantData,
                                                            method),
        BattleBuffData_CheckIndividualitiesData___ctor(v5, servantData, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData)
    || (this = (BattleSelectMainSubServantWindow_o *)BattleBuffData__getBuffList_30806472(
                                                       buffData,
                                                       84,
                                                       v5,
                                                       1,
                                                       0,
                                                       0LL,
                                                       0LL)) == 0LL )
  {
    sub_B0D97C(this);
  }
  return this->fields._closeBtnObject == 0LL;
}


void __fastcall BattleSelectMainSubServantWindow__Close(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v7; // x21
  int max_length; // w9
  BattleSelectServantComponent_o *v9; // x8
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v11; // x21
  int v12; // w9
  BattleSelectServantComponent_o *v13; // x8
  __int64 v14; // x0

  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
  mainSvtList = this->fields.mainSvtList;
  this->fields.isSelected = 1;
  if ( !mainSvtList )
    goto LABEL_17;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
LABEL_19:
      v14 = sub_B0D9A8(parentPanel);
      sub_B0D948(v14, 0LL);
    }
    v9 = mainSvtList->m_Items[v7];
    if ( v9 )
    {
      parentPanel = (UnityEngine_GameObject_o *)v9->fields.servantIcon;
      if ( parentPanel )
      {
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0LL);
        mainSvtList = this->fields.mainSvtList;
        ++v7;
        if ( mainSvtList )
          continue;
      }
    }
    goto LABEL_17;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_17:
    sub_B0D97C(parentPanel);
  v11 = 0LL;
  while ( 1 )
  {
    v12 = subSvtList->max_length;
    if ( (int)v11 >= v12 )
      break;
    if ( (unsigned int)v11 >= v12 )
      goto LABEL_19;
    v13 = subSvtList->m_Items[v11];
    if ( v13 )
    {
      parentPanel = (UnityEngine_GameObject_o *)v13->fields.servantIcon;
      if ( parentPanel )
      {
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0LL);
        subSvtList = this->fields.subSvtList;
        ++v11;
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

  if ( (byte_4211D56 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleSelectMainSubServantWindow_onCloseButton__, call);
    sub_B0D8A4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_4211D56 = 1;
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
    sub_B0D97C(battleData);
  }
  ((void (__fastcall *)(BattleData_o *, __int64, __int64, void *))battleData->klass[1]._1.events)(
    battleData,
    3LL,
    1LL,
    battleData->klass[1]._1.properties);
  this->fields.isSelected = 0;
  *(_QWORD *)&this->fields.mainSelect_uniqueId = 0LL;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v12 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B0D974(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v10,
                                                              v11);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleSelectMainSubServantWindow_onCloseButton__,
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
  this->fields.callBack = callback;
  sub_B0D840(&this->fields.callBack, callback);
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
  int32_t v22; // w3
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x2
  struct BattleSelectServantComponent_array *v25; // x8
  BattleSelectServantComponent_o *v26; // x22
  const MethodInfo *v27; // x2
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v29; // x24
  unsigned __int64 v30; // x9
  unsigned __int64 v31; // x27
  unsigned __int64 v32; // x9
  BattleSelectServantComponent_o *v33; // x21
  BattleServantData_o *v34; // x22
  BattleSelectServantComponent_CallBack_o *v35; // x23
  int32_t v36; // w3
  const MethodInfo *v37; // x5
  const MethodInfo *v38; // x2
  struct BattleSelectServantComponent_array *v39; // x8
  BattleSelectServantComponent_o *v40; // x21
  const MethodInfo *v41; // x2
  __int64 v42; // x0

  if ( (byte_4211D55 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleSelectMainSubServantWindow_selectSvt__, mainList);
    sub_B0D8A4(&BattleSelectServantComponent_CallBack_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_2435/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, v9);
    byte_4211D55 = 1;
  }
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2435/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_40;
  UILabel__set_text(title_label, v11, 0LL);
  mainSvtList = this->fields.mainSvtList;
  if ( !mainSvtList )
    goto LABEL_40;
  v15 = 4LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    v17 = v15 - 4;
    if ( v15 - 4 >= (int)max_length )
      break;
    if ( !mainList )
      goto LABEL_40;
    if ( v17 >= max_length )
    {
LABEL_42:
      v42 = sub_B0D9A8(v11);
      sub_B0D948(v42, 0LL);
    }
    v18 = mainList->max_length;
    v19 = (BattleSelectServantComponent_o *)*((_QWORD *)&mainSvtList->obj.klass + v15);
    if ( (__int64)v17 >= (int)v18 )
    {
      if ( !v19 )
        goto LABEL_40;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&mainSvtList->obj.klass + v15), v12);
    }
    else
    {
      if ( v17 >= v18 )
        goto LABEL_42;
      v20 = (BattleServantData_o *)*((_QWORD *)&mainList->obj.klass + v15);
      v21 = (BattleSelectServantComponent_CallBack_o *)sub_B0D974(
                                                         BattleSelectServantComponent_CallBack_TypeInfo,
                                                         v12,
                                                         v13);
      BattleSelectServantComponent_CallBack___ctor(
        v21,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        0LL);
      if ( !v19 )
        goto LABEL_40;
      BattleSelectServantComponent__setData(v19, v20, 1, v22, v21, v23);
      v25 = this->fields.mainSvtList;
      if ( !v25 )
        goto LABEL_40;
      if ( v17 >= v25->max_length || v17 >= mainList->max_length )
        goto LABEL_42;
      v26 = (BattleSelectServantComponent_o *)*((_QWORD *)&v25->obj.klass + v15);
      v11 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                 (BattleSelectMainSubServantWindow_o *)v11,
                                 *((BattleServantData_o **)&mainList->obj.klass + v15),
                                 v24);
      if ( !v26 )
        goto LABEL_40;
      BattleSelectServantComponent__setSelectMask(v26, (unsigned __int8)v11 & 1, v27);
    }
    mainSvtList = this->fields.mainSvtList;
    ++v15;
    if ( !mainSvtList )
      goto LABEL_40;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_40:
    sub_B0D97C(v11);
  v29 = 4LL;
  while ( 1 )
  {
    v30 = subSvtList->max_length;
    v31 = v29 - 4;
    if ( v29 - 4 >= (int)v30 )
      break;
    if ( !subList )
      goto LABEL_40;
    if ( v31 >= v30 )
      goto LABEL_42;
    v32 = subList->max_length;
    v33 = (BattleSelectServantComponent_o *)*((_QWORD *)&subSvtList->obj.klass + v29);
    if ( (__int64)v31 >= (int)v32 )
    {
      if ( !v33 )
        goto LABEL_40;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&subSvtList->obj.klass + v29), v12);
    }
    else
    {
      if ( v31 >= v32 )
        goto LABEL_42;
      v34 = (BattleServantData_o *)*((_QWORD *)&subList->obj.klass + v29);
      v35 = (BattleSelectServantComponent_CallBack_o *)sub_B0D974(
                                                         BattleSelectServantComponent_CallBack_TypeInfo,
                                                         v12,
                                                         v13);
      BattleSelectServantComponent_CallBack___ctor(
        v35,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        0LL);
      if ( !v33 )
        goto LABEL_40;
      BattleSelectServantComponent__setData(v33, v34, 2, v36, v35, v37);
      v39 = this->fields.subSvtList;
      if ( !v39 )
        goto LABEL_40;
      if ( v31 >= v39->max_length || v31 >= subList->max_length )
        goto LABEL_42;
      v40 = (BattleSelectServantComponent_o *)*((_QWORD *)&v39->obj.klass + v29);
      v11 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                 (BattleSelectMainSubServantWindow_o *)v11,
                                 *((BattleServantData_o **)&subList->obj.klass + v29),
                                 v38);
      if ( !v40 )
        goto LABEL_40;
      BattleSelectServantComponent__setSelectMask(v40, (unsigned __int8)v11 & 1, v41);
    }
    subSvtList = this->fields.subSvtList;
    ++v29;
    if ( !subSvtList )
      goto LABEL_40;
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
    sub_B0D97C(battleData);
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
  CommonUI_o *Instance; // x0

  if ( (byte_4211D59 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_4211D59 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  this->fields.isSelected = 0;
}


System_String_o *__fastcall BattleSelectMainSubServantWindow__get_closeBtnPath(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211D5B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13044/*"Sprite"*/, method);
    byte_4211D5B = 1;
  }
  return (System_String_o *)StringLiteral_13044/*"Sprite"*/;
}


void __fastcall BattleSelectMainSubServantWindow__onActionButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int mainSelect_uniqueId; // w2
  int subSelect_uniqueId; // w3
  BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v13; // x21
  System_String_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  NotificationDialog_ClickDelegate_o *v17; // x23

  if ( (byte_4211D58 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleSelectMainSubServantWindow_endErrorDialog__, method);
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_2525/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, v7);
    sub_B0D8A4(&StringLiteral_2526/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, v8);
    byte_4211D58 = 1;
  }
  if ( !this->fields.isSelected )
  {
    mainSelect_uniqueId = this->fields.mainSelect_uniqueId;
    if ( mainSelect_uniqueId < 1 || (subSelect_uniqueId = this->fields.subSelect_uniqueId, subSelect_uniqueId < 1) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2526/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, 0LL);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2525/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, 0LL);
      v17 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v15, v16);
      NotificationDialog_ClickDelegate___ctor(
        v17,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_endErrorDialog__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog_17019096(
          Instance,
          v13,
          v14,
          v17,
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
        goto LABEL_13;
      }
    }
    else
    {
      callBack = this->fields.callBack;
      if ( callBack )
      {
        BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
          callBack,
          1,
          mainSelect_uniqueId,
          subSelect_uniqueId,
          0LL);
LABEL_13:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
        this->fields.isSelected = 1;
        return;
      }
    }
    sub_B0D97C(callBack);
  }
}


void __fastcall BattleSelectMainSubServantWindow__onCloseButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x0

  if ( (byte_4211D57 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    byte_4211D57 = 1;
  }
  if ( !this->fields.isSelected )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(10, 0LL);
    callBack = this->fields.callBack;
    if ( !callBack )
      sub_B0D97C(0LL);
    BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
      callBack,
      0,
      this->fields.mainSelect_uniqueId,
      this->fields.subSelect_uniqueId,
      0LL);
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
  __int64 v14; // x0

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
      {
LABEL_35:
        v14 = sub_B0D9A8(this);
        sub_B0D948(v14, 0LL);
      }
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
    sub_B0D97C(this);
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
  this->fields.battleData = data;
  sub_B0D840(&this->fields.battleData, data);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow__setInitialPos(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_zero(0LL),
        !transform) )
  {
    sub_B0D97C(gameObject);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v15[0] = flg;
  v13 = subUniqueId;
  v14 = mainUniqueId;
  if ( (byte_4211EED & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, flg);
    sub_B0D8A4(&int_TypeInfo, v10);
    byte_4211EED = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B0D848(this, v12, callback, object);
}


void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__EndInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v10; // x26
  BattleSelectMainSubServantWindow_SelectedCallBack_o **v11; // x27
  __int64 v12; // x28
  unsigned int v13; // w25
  __int64 class_0; // x0
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, bool, _QWORD, _QWORD, _QWORD); // x0
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(bool, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v33; // [xsp+8h] [xbp-58h] BYREF

  v33 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v33;
    v10 = 1LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v5 + 24);
  if ( v10 )
  {
    v11 = (BattleSelectMainSubServantWindow_SelectedCallBack_o **)(v5 + 32);
LABEL_5:
    v12 = 0LL;
    while ( 1 )
    {
      v22 = v11[v12];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(bool, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v22->fields.extra_arg, flg, *(_QWORD *)&mainUniqueId, *(_QWORD *)&subUniqueId);
      if ( (sub_B0D8D4(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25(flg, (unsigned int)mainUniqueId, (unsigned int)subUniqueId, v24);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v23 && *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B0D8CC(v24);
      v27 = sub_B0DCD0(v24);
      if ( (v26 & 1) != 0 )
      {
        if ( (v27 & 1) != 0 )
        {
          v28 = *v23;
          v29 = *(_QWORD *)(v24 + 24);
          v30 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AA67A0(v23, v29, v30);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD, _QWORD))sub_B0D954(v19, v24);
        (*v21)(v23, flg, (unsigned int)mainUniqueId, (unsigned int)subUniqueId, v21);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v15 = *v23;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v15 + 16LL * (int)(*v17 + v13) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AA67A0(v23, class_0, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            flg,
            (unsigned int)mainUniqueId,
            (unsigned int)subUniqueId,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD, _QWORD))(*v23
                                                                          + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                          + 312))(
            v23,
            flg,
            (unsigned int)mainUniqueId,
            (unsigned int)subUniqueId,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, _QWORD, _QWORD, __int64))v25)(
      v23,
      flg,
      (unsigned int)mainUniqueId,
      (unsigned int)subUniqueId,
      v24);
    goto LABEL_37;
  }
}