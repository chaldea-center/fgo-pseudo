void __fastcall MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MasterMissionReceiveConfirmListViewItemDraw_c *v4; // x8

  if ( (byte_42E89E1 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v1, v2, v3);
    byte_42E89E1 = 1;
  }
  MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH = 630.0;
  MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->MSG_REWARD_SPACE = 4;
  v4 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
  MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_LINE_SPACE = 4;
  v4->static_fields->LINE_HEIGHT = 3;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  float y; // s1
  double v36; // d0
  int v37; // w24
  MasterMissionReceiveConfirmListViewItemDraw_c *v38; // x0
  int32_t MSG_REWARD_SPACE; // w20
  GiftEntity_array *GiftListById; // x22
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w9
  __int64 v43; // x8
  int v44; // w20
  __int64 v45; // x21
  GiftEntity_o *v46; // x24
  struct UILabel_array *v47; // x8
  il2cpp_array_size_t v48; // w23
  Il2CppObject *v49; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *v51; // x8
  struct UILabel_array *v52; // x8
  UILabel_o *v53; // x26
  Il2CppObject *v54; // x27
  Il2CppObject *v55; // x0
  struct UILabel_array *v56; // x8
  UILabel_o *v57; // x24
  struct UILabel_array *v58; // x8
  float v59; // s1
  double v60; // d0
  bool v61; // zf
  double v62; // d1
  __int64 v63; // x0
  int v64; // w21
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  int v68; // s0
  float v70; // s1
  bool v71; // [xsp+Ch] [xbp-94h]
  MasterMissionReceiveConfirmListViewItemDraw_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-90h]
  int v73; // [xsp+1Ch] [xbp-84h]
  System_String_o *format; // [xsp+20h] [xbp-80h]
  int32_t num; // [xsp+2Ch] [xbp-74h] BYREF
  WarEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-58h] BYREF

  v10 = this;
  if ( (byte_42E89E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, (_DWORD)message, giftId, *(_QWORD *)&mode);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_8732/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/, v32, v33, v34);
    byte_42E89E0 = 1;
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
    v36 = y;
    if ( y == INFINITY )
      v36 = -y;
    if ( !this )
      goto LABEL_72;
    v37 = (int)v36;
    UIWidget__set_height((UIWidget_o *)this, (int)v36, 0LL);
    v38 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      v38 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    MSG_REWARD_SPACE = v38->static_fields->MSG_REWARD_SPACE;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    MasterData_WarQuestSelectionMaster = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !this )
      goto LABEL_72;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, giftId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8732/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0LL);
    rewardLabel = v10->fields.rewardLabel;
    format = (System_String_o *)this;
    if ( !rewardLabel )
      goto LABEL_72;
    v71 = isLineDisp;
    if ( !GiftListById )
      goto LABEL_72;
    max_length = rewardLabel->max_length;
    v43 = *(_QWORD *)&GiftListById->max_length;
    v44 = MSG_REWARD_SPACE + v37;
    if ( (int)v43 < max_length )
      max_length = *(_QWORD *)&GiftListById->max_length;
    v73 = max_length;
    if ( max_length >= 1 )
    {
      if ( !(_DWORD)v43 )
      {
LABEL_57:
        v63 = sub_B5D6C8(this);
        sub_B5D668(v63, 0LL);
      }
      v45 = 4LL;
      while ( 1 )
      {
        v46 = (GiftEntity_o *)*((_QWORD *)&GiftListById->obj.klass + v45);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0LL);
        v47 = v10->fields.rewardLabel;
        if ( !v47 )
          break;
        v48 = v45 - 4;
        if ( (unsigned int)(v45 - 4) >= v47->max_length )
          goto LABEL_57;
        v49 = (Il2CppObject *)this;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v47->obj.klass + v45);
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v44, 0LL);
        v51 = v10->fields.rewardLabel;
        if ( !v51 )
          break;
        if ( v48 >= v51->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v51->obj.klass + v45);
        if ( !this )
          break;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !v46 )
          break;
        GiftEntity__GetInfo(v46, &nameText, &countText, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)Gift__IsItem_28424904(v46->fields.type, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = MasterData_WarQuestSelectionMaster;
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    v46->fields.objectId,
                                                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              break;
            this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__GetCountableString(
                                                                      entity->fields.bannerId,
                                                                      0LL);
            v49 = (Il2CppObject *)this;
          }
        }
        v52 = v10->fields.rewardLabel;
        if ( !v52 )
          break;
        if ( v48 >= v52->max_length )
          goto LABEL_57;
        v53 = (UILabel_o *)*((_QWORD *)&v52->obj.klass + v45);
        v54 = (Il2CppObject *)nameText;
        num = v46->fields.num;
        v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)System_String__Format_44578852(
                                                                  format,
                                                                  v54,
                                                                  v49,
                                                                  v55,
                                                                  0LL);
        if ( !v53 )
          break;
        UILabel__set_text(v53, (System_String_o *)this, 0LL);
        v56 = v10->fields.rewardLabel;
        if ( !v56 )
          break;
        if ( v48 >= v56->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
        v57 = (UILabel_o *)*((_QWORD *)&v56->obj.klass + v45);
        if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
        }
        if ( !v57 )
          break;
        UILabel__SetCondensedScale_41950620(
          v57,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0LL);
        v58 = v10->fields.rewardLabel;
        if ( !v58 )
          break;
        if ( v48 >= v58->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v58->obj.klass + v45);
        if ( !this )
          break;
        v59 = UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.y;
        v60 = v59;
        v61 = v59 == INFINITY;
        v62 = -v59;
        if ( v61 )
          v60 = v62;
        v44 += (int)v60;
        if ( (int)v45 - 3 >= v73 )
          goto LABEL_58;
        if ( (unsigned int)(++v45 - 4) >= GiftListById->max_length )
          goto LABEL_57;
      }
LABEL_72:
      sub_B5D69C(this, message);
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
    v64 = *(_DWORD *)(*(_QWORD *)&this[2].fields.dispMode + 8LL) + v44;
    v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10->fields.lineSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v65, (float)-v64, 0LL);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.lineSprite;
    if ( !this )
      goto LABEL_72;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !this )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v71, 0LL);
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
      *(UnityEngine_Vector3_o *)&v68 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0LL);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
      if ( !this )
        goto LABEL_72;
      v70 = (float)(LINE_HEIGHT + v64);
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, *(UnityEngine_Vector3_o *)&v68, 0LL);
    }
  }
}