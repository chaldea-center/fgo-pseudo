void __fastcall MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  MasterMissionReceiveConfirmListViewItemDraw_c *v1; // x8

  if ( (byte_438BB72 & 1) == 0 )
  {
    sub_B775C4(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
    byte_438BB72 = 1;
  }
  MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH = 630.0;
  MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->MSG_REWARD_SPACE = 4;
  v1 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
  MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_LINE_SPACE = 4;
  v1->static_fields->LINE_HEIGHT = 3;
}


void __fastcall MasterMissionReceiveConfirmListViewItemDraw___ctor(
        MasterMissionReceiveConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewItemDraw__SetItem(
        MasterMissionReceiveConfirmListViewItemDraw_o *this,
        System_String_o *message,
        int32_t giftId,
        int32_t mode,
        bool isLineDisp,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmListViewItemDraw_o *v10; // x19
  float y; // s1
  double v12; // d0
  int v13; // w24
  MasterMissionReceiveConfirmListViewItemDraw_c *v14; // x0
  int32_t MSG_REWARD_SPACE; // w20
  GiftEntity_array *GiftListById; // x22
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w9
  __int64 v19; // x8
  int v20; // w20
  __int64 v21; // x21
  GiftEntity_o *v22; // x24
  struct UILabel_array *v23; // x8
  il2cpp_array_size_t v24; // w23
  Il2CppObject *v25; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *v27; // x8
  __int64 v28; // x2
  struct UILabel_array *v29; // x8
  UILabel_o *v30; // x26
  Il2CppObject *v31; // x27
  Il2CppObject *v32; // x0
  struct UILabel_array *v33; // x8
  UILabel_o *v34; // x24
  struct UILabel_array *v35; // x8
  float v36; // s1
  double v37; // d0
  bool v38; // zf
  double v39; // d1
  __int64 v40; // x0
  int v41; // w21
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  int v45; // s0
  float v47; // s1
  bool v48; // [xsp+Ch] [xbp-94h]
  MasterMissionReceiveConfirmListViewItemDraw_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-90h]
  int v50; // [xsp+1Ch] [xbp-84h]
  System_String_o *format; // [xsp+20h] [xbp-80h]
  int32_t num; // [xsp+2Ch] [xbp-74h] BYREF
  WarEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-58h] BYREF

  v10 = this;
  if ( (byte_438BB71 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)sub_B775C4(&StringLiteral_8803/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/);
    byte_438BB71 = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v10->fields.dispMode = mode;
  if ( mode && !v10->fields.isInit )
  {
    v10->fields.isInit = 1;
    if ( !message )
      goto LABEL_72;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_72;
    UIWidget__set_height((UIWidget_o *)this, LODWORD(this[6].fields.messageLabel) * message->fields.m_stringLength, 0LL);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_72;
    WrapControlText__textAdjust(
      (UILabel_o *)this,
      message,
      (int32_t)this[6].fields.messageLabel,
      (int32_t)this[6].fields.messageLabel,
      0,
      0LL);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_72;
    y = UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.y;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    v12 = y;
    if ( y == INFINITY )
      v12 = -y;
    if ( !this )
      goto LABEL_72;
    v13 = (int)v12;
    UIWidget__set_height((UIWidget_o *)this, (int)v12, 0LL);
    v14 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      v14 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    MSG_REWARD_SPACE = v14->static_fields->MSG_REWARD_SPACE;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    MasterData_WarQuestSelectionMaster = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !this )
      goto LABEL_72;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, giftId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8803/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0LL);
    rewardLabel = v10->fields.rewardLabel;
    format = (System_String_o *)this;
    if ( !rewardLabel )
      goto LABEL_72;
    v48 = isLineDisp;
    if ( !GiftListById )
      goto LABEL_72;
    max_length = rewardLabel->max_length;
    v19 = *(_QWORD *)&GiftListById->max_length;
    v20 = MSG_REWARD_SPACE + v13;
    if ( (int)v19 < max_length )
      max_length = *(_QWORD *)&GiftListById->max_length;
    v50 = max_length;
    if ( max_length >= 1 )
    {
      if ( !(_DWORD)v19 )
      {
LABEL_57:
        v40 = sub_B776C8(this);
        sub_B77668(v40, 0LL);
      }
      v21 = 4LL;
      while ( 1 )
      {
        v22 = (GiftEntity_o *)*((_QWORD *)&GiftListById->obj.klass + v21);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0LL);
        v23 = v10->fields.rewardLabel;
        if ( !v23 )
          break;
        v24 = v21 - 4;
        if ( (unsigned int)(v21 - 4) >= v23->max_length )
          goto LABEL_57;
        v25 = (Il2CppObject *)this;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v23->obj.klass + v21);
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v20, 0LL);
        v27 = v10->fields.rewardLabel;
        if ( !v27 )
          break;
        if ( v24 >= v27->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v27->obj.klass + v21);
        if ( !this )
          break;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !v22 )
          break;
        GiftEntity__GetInfo(v22, &nameText, &countText, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)Gift__IsItem_28103496(v22->fields.type, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = MasterData_WarQuestSelectionMaster;
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    v22->fields.objectId,
                                                                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              break;
            this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__GetCountableString(
                                                                      entity->fields.bannerId,
                                                                      0LL);
            v25 = (Il2CppObject *)this;
          }
        }
        v29 = v10->fields.rewardLabel;
        if ( !v29 )
          break;
        if ( v24 >= v29->max_length )
          goto LABEL_57;
        v30 = (UILabel_o *)*((_QWORD *)&v29->obj.klass + v21);
        v31 = (Il2CppObject *)nameText;
        num = v22->fields.num;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v28);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)System_String__Format_44903000(
                                                                  format,
                                                                  v31,
                                                                  v25,
                                                                  v32,
                                                                  0LL);
        if ( !v30 )
          break;
        UILabel__set_text(v30, (System_String_o *)this, 0LL);
        v33 = v10->fields.rewardLabel;
        if ( !v33 )
          break;
        if ( v24 >= v33->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
        v34 = (UILabel_o *)*((_QWORD *)&v33->obj.klass + v21);
        if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
        }
        if ( !v34 )
          break;
        UILabel__SetCondensedScale_41780892(
          v34,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0LL);
        v35 = v10->fields.rewardLabel;
        if ( !v35 )
          break;
        if ( v24 >= v35->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v35->obj.klass + v21);
        if ( !this )
          break;
        v36 = UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.y;
        v37 = v36;
        v38 = v36 == INFINITY;
        v39 = -v36;
        if ( v38 )
          v37 = v39;
        v20 += (int)v37;
        if ( (int)v21 - 3 >= v50 )
          goto LABEL_58;
        if ( (unsigned int)(++v21 - 4) >= GiftListById->max_length )
          goto LABEL_57;
      }
LABEL_72:
      sub_B7769C(this, message);
    }
LABEL_58:
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    if ( !v10->fields.lineSprite )
      goto LABEL_72;
    v41 = *(_DWORD *)(*(_QWORD *)&this[2].fields.dispMode + 8LL) + v20;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10->fields.lineSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v42, (float)-v41, 0LL);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.lineSprite;
    if ( !this )
      goto LABEL_72;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !this )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v48, 0LL);
    boxCollider = (UnityEngine_Object_o *)v10->fields.boxCollider;
    LINE_HEIGHT = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->LINE_HEIGHT;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boxCollider, 0LL, 0LL) )
    {
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
      if ( !this )
        goto LABEL_72;
      *(UnityEngine_Vector3_o *)&v45 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0LL);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
      if ( !this )
        goto LABEL_72;
      v47 = (float)(LINE_HEIGHT + v41);
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, *(UnityEngine_Vector3_o *)&v45, 0LL);
    }
  }
}