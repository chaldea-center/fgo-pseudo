void ExRoomMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  struct ExRoomMissionReceiveConfirmListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_5932E2F & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionReceiveConfirmListViewItemDraw_TypeInfo);
    byte_5932E2F = 1;
  }
  static_fields = ExRoomMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields;
  static_fields->RewardTextWidth = 630.0;
  *(_QWORD *)&static_fields->MessageRewardSpace = 0x400000004LL;
  static_fields->LineHeight = 3;
}


void ExRoomMissionReceiveConfirmListViewItemDraw___ctor(
        ExRoomMissionReceiveConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomMissionReceiveConfirmListViewItemDraw__Awake(
        ExRoomMissionReceiveConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void ExRoomMissionReceiveConfirmListViewItemDraw__SetItem(
        ExRoomMissionReceiveConfirmListViewItemDraw_o *this,
        ExRoomMissionReceiveConfirmDialogItem_o *item,
        int32_t mode,
        bool isLineDisp,
        const MethodInfo *method)
{
  ExRoomMissionReceiveConfirmListViewItemDraw_o *v8; // x19
  System_String_o *v9; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  int32_t v11; // w22
  __int64 v12; // x1
  __int64 v13; // x2
  ExRoomMissionReceiveConfirmListViewItemDraw_c **v14; // x24
  ExRoomMissionReceiveConfirmListViewItemDraw_c *v15; // x0
  struct ExRoomMissionListOutput_o *exRoomMissionListOutput; // x9
  struct GiftEntity_array *RewardGiftEntities_k__BackingField; // x26
  struct System_String_array *RewardDisplayNames_k__BackingField; // x29
  int32_t MessageRewardSpace; // w20
  __int64 v20; // x2
  struct UILabel_array *rewardLabel; // x8
  unsigned int max_length; // w8
  unsigned int v23; // w9
  __int64 v24; // x20
  unsigned __int64 v25; // x25
  Il2CppObject **m_Items; // x27
  GiftEntity_o *v27; // x28
  struct UILabel_array *v28; // x8
  UnityEngine_Object_o *v29; // x22
  unsigned __int64 max_length_low; // x8
  Il2CppObject *v31; // x23
  unsigned __int64 v32; // x8
  bool v33; // cf
  Il2CppObject **v34; // x8
  ExRoomMissionReceiveConfirmListViewItemDraw_c **v35; // x29
  Il2CppObject *v36; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  ExRoomMissionReceiveConfirmListViewItemDraw_c *v42; // x0
  UnityEngine_Vector2_o v43; // kr08_8
  int y; // w8
  int v45; // w21
  UnityEngine_GameObject_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LineHeight; // w22
  float v51; // s1
  bool v52; // [xsp+4h] [xbp-8Ch]
  System_String_o **v53; // [xsp+8h] [xbp-88h]
  struct System_String_array *v54; // [xsp+10h] [xbp-80h]
  System_String_o *format; // [xsp+18h] [xbp-78h]
  struct System_String_array *RewardCountOperatorStrings_k__BackingField; // [xsp+20h] [xbp-70h]
  int v57; // [xsp+28h] [xbp-68h]
  int32_t num; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_5932E2E & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionReceiveConfirmListViewItemDraw_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)sub_21FFC50(&StringLiteral_8913/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/);
    byte_5932E2E = 1;
  }
  v8->fields.dispMode = mode;
  if ( mode && !v8->fields.isInit )
  {
    v8->fields.isInit = 1;
    if ( !item
      || (this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)ExRoomMissionReceiveConfirmDialogItem__get_MissionConditionText(
                                                                    item,
                                                                    (const MethodInfo *)item),
          (v9 = (System_String_o *)this) == 0) )
    {
      v9 = **(System_String_o ***)(qword_594C0B8 + 184);
      if ( !v9 )
        goto LABEL_71;
    }
    this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)v8->fields.messageLabel;
    if ( !this )
      goto LABEL_71;
    UIWidget__set_height((UIWidget_o *)this, this[5].fields.dispMode * v9->fields._stringLength, 0);
    this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)v8->fields.messageLabel;
    if ( !this )
      goto LABEL_71;
    WrapControlText__textAdjust((UILabel_o *)this, v9, this[5].fields.dispMode, this[5].fields.dispMode, 0);
    this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)v8->fields.messageLabel;
    if ( !this )
      goto LABEL_71;
    printedSize = UILabel__get_printedSize((UILabel_o *)this, 0);
    this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)v8->fields.messageLabel;
    v11 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
    if ( !this )
      goto LABEL_71;
    UIWidget__set_height((UIWidget_o *)this, v11, 0);
    v14 = &ExRoomMissionReceiveConfirmListViewItemDraw_TypeInfo;
    v15 = ExRoomMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !*(&ExRoomMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveConfirmListViewItemDraw_TypeInfo, v12, v13);
      v15 = ExRoomMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    if ( item )
    {
      exRoomMissionListOutput = item->fields.exRoomMissionListOutput;
      if ( exRoomMissionListOutput )
        RewardGiftEntities_k__BackingField = exRoomMissionListOutput->fields._RewardGiftEntities_k__BackingField;
      else
        RewardGiftEntities_k__BackingField = 0;
      RewardDisplayNames_k__BackingField = item->fields._RewardDisplayNames_k__BackingField;
      RewardCountOperatorStrings_k__BackingField = item->fields._RewardCountOperatorStrings_k__BackingField;
    }
    else
    {
      RewardDisplayNames_k__BackingField = 0;
      RewardGiftEntities_k__BackingField = 0;
      RewardCountOperatorStrings_k__BackingField = 0;
    }
    MessageRewardSpace = v15->static_fields->MessageRewardSpace;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    v52 = isLineDisp;
    this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8913/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0);
    rewardLabel = v8->fields.rewardLabel;
    format = (System_String_o *)this;
    if ( !rewardLabel )
      goto LABEL_71;
    v57 = MessageRewardSpace + v11;
    if ( RewardGiftEntities_k__BackingField )
    {
      max_length = rewardLabel->max_length;
      v23 = RewardGiftEntities_k__BackingField->max_length;
      v24 = (int)v23 >= (int)max_length ? max_length : v23;
      if ( (int)v24 >= 1 )
      {
        v25 = 0;
        m_Items = (Il2CppObject **)RewardDisplayNames_k__BackingField->m_Items;
        v53 = RewardCountOperatorStrings_k__BackingField->m_Items;
        v54 = RewardDisplayNames_k__BackingField;
        while ( 1 )
        {
          if ( v25 >= LODWORD(RewardGiftEntities_k__BackingField->max_length) )
LABEL_72:
            sub_21FFED4(this);
          v27 = RewardGiftEntities_k__BackingField->m_Items[v25];
          if ( v27 )
          {
            v28 = v8->fields.rewardLabel;
            if ( !v28 )
              goto LABEL_71;
            if ( v25 >= LODWORD(v28->max_length) )
              goto LABEL_72;
            v29 = (UnityEngine_Object_o *)v28->m_Items[v25];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v20);
            this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Object__op_Equality(v29, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
          }
LABEL_58:
          ++v25;
          ++m_Items;
          if ( v24 == v25 )
            goto LABEL_59;
        }
        if ( !RewardCountOperatorStrings_k__BackingField )
          goto LABEL_43;
        max_length_low = LODWORD(RewardCountOperatorStrings_k__BackingField->max_length);
        if ( (__int64)v25 >= (int)max_length_low )
          goto LABEL_43;
        if ( v25 >= max_length_low )
          goto LABEL_72;
        this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)System_String__IsNullOrEmpty(v53[v25], 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( v25 >= LODWORD(RewardCountOperatorStrings_k__BackingField->max_length) )
            goto LABEL_72;
          v31 = (Il2CppObject *)v53[v25];
          if ( !RewardDisplayNames_k__BackingField )
            goto LABEL_50;
        }
        else
        {
LABEL_43:
          this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0);
          v31 = (Il2CppObject *)this;
          if ( !RewardDisplayNames_k__BackingField )
            goto LABEL_50;
        }
        v32 = LODWORD(RewardDisplayNames_k__BackingField->max_length);
        if ( (__int64)v25 < (int)v32 )
        {
          v33 = v25 >= v32;
          v34 = m_Items;
          if ( v33 )
            goto LABEL_72;
          goto LABEL_51;
        }
LABEL_50:
        v34 = *(Il2CppObject ***)(qword_594C0B8 + 184);
LABEL_51:
        if ( !v29 )
          goto LABEL_71;
        v35 = v14;
        v36 = *v34;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v57, 0);
        this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v29,
                                                                  0);
        if ( !this )
          goto LABEL_71;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        num = v27->fields.num;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &num);
        v39 = System_String__Format_75484644(format, v36, v31, v38, 0);
        UILabel__set_text((UILabel_o *)v29, v39, 0);
        v42 = *v35;
        v14 = v35;
        if ( !*(&(*v35)->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v42, v40, v41);
          v42 = *v35;
        }
        RewardDisplayNames_k__BackingField = v54;
        UILabel__SetCondensedScale_56386440((UILabel_o *)v29, v42->static_fields->RewardTextWidth, 0.0, 0);
        v43 = UILabel__get_printedSize((UILabel_o *)v29, 0);
        y = (int)v43.fields.y;
        if ( v43.fields.y == INFINITY )
          y = 0x80000000;
        v57 += y;
        goto LABEL_58;
      }
    }
LABEL_59:
    this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)*v14;
    if ( !*(&(*v14)->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(this, item, v20);
      this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)*v14;
    }
    if ( !v8->fields.lineSprite )
      goto LABEL_71;
    v45 = LODWORD(this[2].fields.messageLabel->monitor) + v57;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8->fields.lineSprite, 0);
    GameObjectExtensions__SetLocalPositionY(v46, (float)-v45, 0);
    this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)v8->fields.lineSprite;
    if ( !this )
      goto LABEL_71;
    this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
    if ( !this )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52, 0);
    boxCollider = (UnityEngine_Object_o *)v8->fields.boxCollider;
    LineHeight = (*v14)->static_fields->LineHeight;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
    if ( UnityEngine_Object__op_Inequality(boxCollider, 0, 0) )
    {
      this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)v8->fields.boxCollider;
      if ( this )
      {
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0);
        this = (ExRoomMissionReceiveConfirmListViewItemDraw_o *)v8->fields.boxCollider;
        if ( this )
        {
          v51 = (float)(LineHeight + v45);
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, size, 0);
          return;
        }
      }
LABEL_71:
      sub_21FFECC(this, item);
    }
  }
}