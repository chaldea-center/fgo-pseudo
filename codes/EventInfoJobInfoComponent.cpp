void EventInfoJobInfoComponent___ctor(EventInfoJobInfoComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_UIAtlas__c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5939975 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_21FFC50(&StringLiteral_935/*"---"*/);
    sub_21FFC50(&StringLiteral_6661/*"FFFF00"*/);
    byte_5939975 = 1;
  }
  v9 = StringLiteral_6661/*"FFFF00"*/;
  this->fields.maxLevelColor = (struct System_String_o *)StringLiteral_6661/*"FFFF00"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.maxLevelColor, v9, v2, v3, v4, v5, v6, v7);
  v10 = (int)StringLiteral_935/*"---"*/;
  this->fields.unknownValueText = (struct System_String_o *)StringLiteral_935/*"---"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.unknownValueText, v10, v11, v12, v13, v14, v15, v16);
  v17 = System_Collections_Generic_List_UIAtlas__TypeInfo;
  this->fields.dimmedIconColor = (struct UnityEngine_Color_o)xmmword_E93FD0;
  v18 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.atlasList, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoJobInfoComponent__Awake(EventInfoJobInfoComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  struct UISprite_o *jobIconSprite; // x8
  struct UnityEngine_Color_o mColor; // q0
  struct UILabel_o *levelLabel; // x8
  struct UnityEngine_Color_o v15; // q0
  struct UISprite_o *calcSprite; // x8
  struct UnityEngine_Color_o v17; // q0
  struct UILabel_o *efficacyLabel; // x8

  if ( (byte_593996C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventJobPointBonusMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593996C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventJobPointBonusMaster___);
  this->fields.eventJobPointBonusMaster = (struct EventJobPointBonusMaster_o *)Master_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventJobPointBonusMaster,
    (int32_t)Master_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  jobIconSprite = this->fields.jobIconSprite;
  if ( !jobIconSprite )
    goto LABEL_10;
  mColor = jobIconSprite->fields.mColor;
  levelLabel = this->fields.levelLabel;
  this->fields.defaultJobIconColor = mColor;
  if ( !levelLabel
    || (v15 = levelLabel->fields.mColor,
        calcSprite = this->fields.calcSprite,
        this->fields.defaultLevelLabelColor = v15,
        !calcSprite)
    || (v17 = calcSprite->fields.mColor,
        efficacyLabel = this->fields.efficacyLabel,
        this->fields.defaultCalcSpriteColor = v17,
        !efficacyLabel) )
  {
LABEL_10:
    sub_21FFECC(v10, v11);
  }
  this->fields.defaultEfficacyLabelColor = efficacyLabel->fields.mColor;
}


void EventInfoJobInfoComponent__CheckSerializeFieldSetting(EventInfoJobInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoJobInfoComponent__InitAtlasList(
        EventInfoJobInfoComponent_o *this,
        System_Collections_Generic_List_UIAtlas__o *sourceList,
        const MethodInfo *method)
{
  EventInfoJobInfoComponent_o *v4; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v7; // w9

  v4 = this;
  if ( (byte_593996D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIAtlas__AddRange__);
    this = (EventInfoJobInfoComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_593996D = 1;
  }
  atlasList = v4->fields.atlasList;
  if ( !atlasList )
    goto LABEL_10;
  size = atlasList->fields._size;
  v7 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
  if ( sourceList )
  {
    this = (EventInfoJobInfoComponent_o *)v4->fields.atlasList;
    if ( this )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)this,
        (System_Collections_Generic_IEnumerable_T__o *)sourceList,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_UIAtlas__AddRange__);
      return;
    }
LABEL_10:
    sub_21FFECC(this, sourceList);
  }
}


// attributes: thunk
void EventInfoJobInfoComponent__Setup(
        EventInfoJobInfoComponent_o *this,
        EventInfoJobLevelControl_JobLevelData_o *data,
        const MethodInfo *method)
{
  EventInfoJobInfoComponent__UpdateDisp(this, data, method);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoJobInfoComponent__UpdateAcquiredInfo(
        EventInfoJobInfoComponent_o *this,
        int32_t displayState,
        const MethodInfo *method)
{
  UnityEngine_Object_o *levelLabel; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  UnityEngine_Object_o *calcSprite; // x21
  UnityEngine_Object_o *efficacyLabel; // x21

  if ( (byte_5939970 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939970 = 1;
  }
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&displayState);
  if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.levelLabel;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayState != 0, 0);
  }
  maxLevelLabel = (UnityEngine_Object_o *)this->fields.maxLevelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(maxLevelLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maxLevelLabel;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayState != 0, 0);
  }
  calcSprite = (UnityEngine_Object_o *)this->fields.calcSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(calcSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.calcSprite;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayState != 0, 0);
  }
  efficacyLabel = (UnityEngine_Object_o *)this->fields.efficacyLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(efficacyLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.efficacyLabel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayState != 0, 0);
        return;
      }
    }
LABEL_28:
    sub_21FFECC(gameObject, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoJobInfoComponent__UpdateCalcSprite(
        EventInfoJobInfoComponent_o *this,
        int32_t calcType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *calcSprite; // x21
  __int64 v6; // x1
  __int64 *v7; // x8
  bool v8; // w8
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_5939973 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18433/*"calc_sign_02"*/);
    sub_21FFC50(&StringLiteral_18432/*"calc_sign_01"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939973 = 1;
  }
  calcSprite = (UnityEngine_Object_o *)this->fields.calcSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&calcType);
  if ( UnityEngine_Object__op_Equality(calcSprite, 0, 0) )
    return;
  if ( calcType == 1 )
  {
    v7 = &StringLiteral_18432/*"calc_sign_01"*/;
    goto LABEL_10;
  }
  if ( calcType == 2 )
  {
    v7 = &StringLiteral_18433/*"calc_sign_02"*/;
LABEL_10:
    v8 = UISpriteHelper__SetSprite_51105480(
           this->fields.calcSprite,
           (System_String_o *)*v7,
           (System_Collections_Generic_IEnumerable_UIAtlas__o *)this->fields.atlasList,
           0,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
    gameObject = (UnityEngine_Component_o *)this->fields.calcSprite;
    if ( v8 )
    {
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.calcSprite;
          if ( gameObject )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
              gameObject,
              gameObject->klass[2]._1.generic_class);
            return;
          }
        }
      }
LABEL_21:
      sub_21FFECC(gameObject, v6);
    }
    if ( !gameObject )
      goto LABEL_21;
    goto LABEL_18;
  }
  gameObject = (UnityEngine_Component_o *)this->fields.calcSprite;
  if ( !gameObject )
    goto LABEL_21;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)gameObject, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  gameObject = (UnityEngine_Component_o *)this->fields.calcSprite;
  if ( !gameObject )
    goto LABEL_21;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoJobInfoComponent__UpdateCurrentLevelLabel(
        EventInfoJobInfoComponent_o *this,
        int32_t level,
        int32_t maxLevel,
        const MethodInfo *method)
{
  UnityEngine_Object_o *levelLabel; // x22
  __int64 v8; // x1
  UILabel_o *v9; // x22
  System_String_o *v10; // x0
  struct System_String_o **p_maxLevelColor; // x8
  System_String_o *v12; // x23
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5939971 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6662/*"FFFFFF"*/);
    sub_21FFC50(&StringLiteral_5808/*"EVENT_INFO_JOB_LEVEL_CURRENT"*/);
    byte_5939971 = 1;
  }
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&level);
  if ( !UnityEngine_Object__op_Equality(levelLabel, 0, 0) )
  {
    v9 = this->fields.levelLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5808/*"EVENT_INFO_JOB_LEVEL_CURRENT"*/, 0);
    p_maxLevelColor = &this->fields.maxLevelColor;
    v12 = v10;
    if ( level != maxLevel )
      p_maxLevelColor = (struct System_String_o **)&StringLiteral_6662/*"FFFFFF"*/;
    v13 = (Il2CppObject *)*p_maxLevelColor;
    v17 = level;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
    v15 = System_String__Format_75484576(v12, v13, v14, 0);
    if ( !v9 )
      sub_21FFECC(v15, v16);
    UILabel__set_text(v9, v15, 0);
  }
}


void EventInfoJobInfoComponent__UpdateDisp(
        EventInfoJobInfoComponent_o *this,
        EventInfoJobLevelControl_JobLevelData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t DisplayState; // w8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  int32_t CalcType; // w1
  EventInfoJobInfoComponent_o *v15; // x0
  int32_t BonusValue; // w2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( data )
  {
    this->fields._JobId_k__BackingField = data->fields.JobId;
    EventInfoJobInfoComponent__UpdateDisplayColors(this, 0, method);
    DisplayState = data->fields.DisplayState;
    if ( DisplayState == 2 )
    {
      EventInfoJobInfoComponent__UpdateIcon(this, data->fields.IconId, this->fields.defaultJobIconColor, v5);
      EventInfoJobInfoComponent__UpdateAcquiredInfo(this, 2, v17);
      EventInfoJobInfoComponent__UpdateCurrentLevelLabel(this, data->fields.Level, data->fields.MaxLevel, v18);
      EventInfoJobInfoComponent__UpdateMaxLevelLabel(this, data->fields.MaxLevel, v19);
      EventInfoJobInfoComponent__UpdateCalcSprite(this, data->fields.CalcType, v20);
      CalcType = data->fields.CalcType;
      if ( data->fields.Level < 1 )
        BonusValue = 0;
      else
        BonusValue = data->fields.BonusValue;
      v15 = this;
    }
    else
    {
      if ( DisplayState != 1 )
      {
        if ( !DisplayState )
        {
          EventInfoJobInfoComponent__UpdateIcon(this, this->fields.lockedIconId, this->fields.defaultJobIconColor, v5);
          EventInfoJobInfoComponent__UpdateAcquiredInfo(this, 0, v7);
        }
        return;
      }
      EventInfoJobInfoComponent__UpdateDisplayColors(this, 1, v5);
      EventInfoJobInfoComponent__UpdateIcon(this, data->fields.IconId, this->fields.dimmedIconColor, v8);
      EventInfoJobInfoComponent__UpdateAcquiredInfo(this, 1, v9);
      EventInfoJobInfoComponent__UpdateCurrentLevelLabel(this, 0, data->fields.MaxLevel, v10);
      EventInfoJobInfoComponent__UpdateMaxLevelLabel(this, data->fields.MaxLevel, v11);
      EventInfoJobInfoComponent__UpdateCalcSprite(this, data->fields.CalcType, v12);
      CalcType = data->fields.CalcType;
      v15 = this;
      BonusValue = 0;
    }
    EventInfoJobInfoComponent__UpdateEfficacyLabel(v15, CalcType, BonusValue, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoJobInfoComponent__UpdateDisplayColors(
        EventInfoJobInfoComponent_o *this,
        bool isDimmed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *jobIconSprite; // x21
  __int64 v6; // x1
  UIWidget_o *v7; // x0
  struct UnityEngine_Color_o *p_dimmedIconColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  UnityEngine_Object_o *levelLabel; // x21
  struct UnityEngine_Color_o *p_defaultLevelLabelColor; // x8
  float *v14; // x9
  float *v15; // x10
  float *v16; // x11
  UnityEngine_Object_o *calcSprite; // x21
  struct UnityEngine_Color_o *p_defaultCalcSpriteColor; // x8
  float *v19; // x9
  float *v20; // x10
  float *v21; // x11
  UnityEngine_Object_o *efficacyLabel; // x21
  struct UnityEngine_Color_o *p_defaultEfficacyLabelColor; // x8
  float *v24; // x9
  float *v25; // x10
  float *v26; // x11
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593996E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593996E = 1;
  }
  jobIconSprite = (UnityEngine_Object_o *)this->fields.jobIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDimmed);
  if ( UnityEngine_Object__op_Inequality(jobIconSprite, 0, 0) )
  {
    v7 = (UIWidget_o *)this->fields.jobIconSprite;
    if ( isDimmed )
    {
      p_dimmedIconColor = &this->fields.dimmedIconColor;
      p_g = &this->fields.dimmedIconColor.fields.g;
      p_b = &this->fields.dimmedIconColor.fields.b;
      p_a = &this->fields.dimmedIconColor.fields.a;
    }
    else
    {
      p_dimmedIconColor = &this->fields.defaultJobIconColor;
      p_g = &this->fields.defaultJobIconColor.fields.g;
      p_b = &this->fields.defaultJobIconColor.fields.b;
      p_a = &this->fields.defaultJobIconColor.fields.a;
    }
    if ( !v7 )
      goto LABEL_36;
    v27.fields.a = *p_a;
    v27.fields.b = *p_b;
    v27.fields.g = *p_g;
    v27.fields.r = p_dimmedIconColor->fields.r;
    UIWidget__set_color(v7, v27, 0);
  }
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
  {
    v7 = (UIWidget_o *)this->fields.levelLabel;
    if ( isDimmed )
    {
      p_defaultLevelLabelColor = &this->fields.dimmedIconColor;
      v14 = &this->fields.dimmedIconColor.fields.g;
      v15 = &this->fields.dimmedIconColor.fields.b;
      v16 = &this->fields.dimmedIconColor.fields.a;
    }
    else
    {
      p_defaultLevelLabelColor = &this->fields.defaultLevelLabelColor;
      v14 = &this->fields.defaultLevelLabelColor.fields.g;
      v15 = &this->fields.defaultLevelLabelColor.fields.b;
      v16 = &this->fields.defaultLevelLabelColor.fields.a;
    }
    if ( !v7 )
      goto LABEL_36;
    v28.fields.a = *v16;
    v28.fields.b = *v15;
    v28.fields.g = *v14;
    v28.fields.r = p_defaultLevelLabelColor->fields.r;
    UIWidget__set_color(v7, v28, 0);
  }
  calcSprite = (UnityEngine_Object_o *)this->fields.calcSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(calcSprite, 0, 0) )
  {
    v7 = (UIWidget_o *)this->fields.calcSprite;
    if ( isDimmed )
    {
      p_defaultCalcSpriteColor = &this->fields.dimmedIconColor;
      v19 = &this->fields.dimmedIconColor.fields.g;
      v20 = &this->fields.dimmedIconColor.fields.b;
      v21 = &this->fields.dimmedIconColor.fields.a;
    }
    else
    {
      p_defaultCalcSpriteColor = &this->fields.defaultCalcSpriteColor;
      v19 = &this->fields.defaultCalcSpriteColor.fields.g;
      v20 = &this->fields.defaultCalcSpriteColor.fields.b;
      v21 = &this->fields.defaultCalcSpriteColor.fields.a;
    }
    if ( !v7 )
      goto LABEL_36;
    v29.fields.a = *v21;
    v29.fields.b = *v20;
    v29.fields.g = *v19;
    v29.fields.r = p_defaultCalcSpriteColor->fields.r;
    UIWidget__set_color(v7, v29, 0);
  }
  efficacyLabel = (UnityEngine_Object_o *)this->fields.efficacyLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(efficacyLabel, 0, 0) )
  {
    v7 = (UIWidget_o *)this->fields.efficacyLabel;
    if ( isDimmed )
    {
      p_defaultEfficacyLabelColor = &this->fields.dimmedIconColor;
      v24 = &this->fields.dimmedIconColor.fields.g;
      v25 = &this->fields.dimmedIconColor.fields.b;
      v26 = &this->fields.dimmedIconColor.fields.a;
    }
    else
    {
      p_defaultEfficacyLabelColor = &this->fields.defaultEfficacyLabelColor;
      v24 = &this->fields.defaultEfficacyLabelColor.fields.g;
      v25 = &this->fields.defaultEfficacyLabelColor.fields.b;
      v26 = &this->fields.defaultEfficacyLabelColor.fields.a;
    }
    if ( v7 )
    {
      v30.fields.g = *v24;
      v30.fields.r = p_defaultEfficacyLabelColor->fields.r;
      v30.fields.a = *v26;
      v30.fields.b = *v25;
      UIWidget__set_color(v7, v30, 0);
      return;
    }
LABEL_36:
    sub_21FFECC(v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoJobInfoComponent__UpdateEfficacyLabel(
        EventInfoJobInfoComponent_o *this,
        int32_t calcType,
        int32_t bonusValue,
        const MethodInfo *method)
{
  UnityEngine_Object_o *efficacyLabel; // x22
  __int64 v8; // x1
  EventJobPointBonusMaster_o *eventJobPointBonusMaster; // x0
  System_String_o *unknownValueText; // x21
  UILabel_o *v11; // x0

  if ( (byte_5939974 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939974 = 1;
  }
  efficacyLabel = (UnityEngine_Object_o *)this->fields.efficacyLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&calcType);
  if ( !UnityEngine_Object__op_Equality(efficacyLabel, 0, 0) )
  {
    eventJobPointBonusMaster = this->fields.eventJobPointBonusMaster;
    if ( eventJobPointBonusMaster )
    {
      unknownValueText = EventJobPointBonusMaster__FormatListText(eventJobPointBonusMaster, calcType, bonusValue, 0);
      if ( !bonusValue )
        goto LABEL_11;
    }
    else
    {
      unknownValueText = **(System_String_o ***)(qword_594C0B8 + 184);
      if ( !bonusValue )
        goto LABEL_11;
    }
    if ( !System_String__IsNullOrEmpty(unknownValueText, 0) )
    {
LABEL_12:
      v11 = this->fields.efficacyLabel;
      if ( !v11 )
        sub_21FFECC(0, v8);
      UILabel__set_text(v11, unknownValueText, 0);
      return;
    }
LABEL_11:
    unknownValueText = this->fields.unknownValueText;
    goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoJobInfoComponent__UpdateIcon(
        EventInfoJobInfoComponent_o *this,
        int32_t iconId,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *jobIconSprite; // x21
  __int64 v11; // x1
  UISprite_o *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UIWidget_o *gameObject; // x0
  int32_t v16; // [xsp+2Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_593996F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_22100/*"job_icon_{0:D2}"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593996F = 1;
  }
  jobIconSprite = (UnityEngine_Object_o *)this->fields.jobIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&iconId);
  if ( !UnityEngine_Object__op_Equality(jobIconSprite, 0, 0) )
  {
    if ( (iconId & 0x80000000) == 0 )
    {
      v12 = this->fields.jobIconSprite;
      v16 = iconId;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
      v14 = System_String__Format((System_String_o *)StringLiteral_22100/*"job_icon_{0:D2}"*/, v13, 0);
      if ( UISpriteHelper__SetSprite_51105480(
             v12,
             v14,
             (System_Collections_Generic_IEnumerable_UIAtlas__o *)this->fields.atlasList,
             0,
             (System_String_o *)StringLiteral_1/*""*/,
             0) )
      {
        gameObject = (UIWidget_o *)this->fields.jobIconSprite;
        if ( gameObject )
        {
          v17.fields.r = r;
          v17.fields.g = g;
          v17.fields.b = b;
          v17.fields.a = a;
          UIWidget__set_color(gameObject, v17, 0);
          gameObject = (UIWidget_o *)this->fields.jobIconSprite;
          if ( gameObject )
          {
            gameObject = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              gameObject = (UIWidget_o *)this->fields.jobIconSprite;
              if ( gameObject )
              {
                ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))gameObject->klass->vtable._33_MakePixelPerfect.methodPtr)(
                  gameObject,
                  gameObject->klass->vtable._33_MakePixelPerfect.method);
                return;
              }
            }
          }
        }
LABEL_18:
        sub_21FFECC(gameObject, v11);
      }
    }
    gameObject = (UIWidget_o *)this->fields.jobIconSprite;
    if ( !gameObject )
      goto LABEL_18;
    UISprite__set_spriteName((UISprite_o *)gameObject, **(System_String_o ***)(qword_594C0B8 + 184), 0);
    gameObject = (UIWidget_o *)this->fields.jobIconSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoJobInfoComponent__UpdateMaxLevelLabel(
        EventInfoJobInfoComponent_o *this,
        int32_t maxLevel,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maxLevelLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5939972 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5809/*"EVENT_INFO_JOB_LEVEL_MAX"*/);
    byte_5939972 = 1;
  }
  maxLevelLabel = (UnityEngine_Object_o *)this->fields.maxLevelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&maxLevel);
  if ( !UnityEngine_Object__op_Equality(maxLevelLabel, 0, 0) )
  {
    v7 = this->fields.maxLevelLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5809/*"EVENT_INFO_JOB_LEVEL_MAX"*/, 0);
    v12 = maxLevel;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
    v10 = System_String__Format(v8, v9, 0);
    if ( !v7 )
      sub_21FFECC(v10, v11);
    UILabel__set_text(v7, v10, 0);
  }
}


int32_t EventInfoJobInfoComponent__get_JobId(EventInfoJobInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields._JobId_k__BackingField;
}


void EventInfoJobInfoComponent__set_JobId(EventInfoJobInfoComponent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._JobId_k__BackingField = value;
}