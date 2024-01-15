void __fastcall MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MasterMissionReceiveConfirmListViewItemDraw_c *v2; // x8

  if ( (byte_40FB260 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v1);
    byte_40FB260 = 1;
  }
  MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH = 630.0;
  MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->MSG_REWARD_SPACE = 4;
  v2 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
  MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_LINE_SPACE = 4;
  v2->static_fields->LINE_HEIGHT = 3;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct UILabel_o *messageLabel; // x0
  struct UILabel_o *v20; // x0
  UILabel_o *v21; // x0
  float y; // s1
  UIWidget_o *v23; // x0
  double v24; // d0
  int v25; // w24
  MasterMissionReceiveConfirmListViewItemDraw_c *v26; // x0
  int32_t MSG_REWARD_SPACE; // w20
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v29; // x0
  GiftMaster_o *v30; // x0
  GiftEntity_array *GiftListById; // x22
  System_String_o *CrossOperatorString; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w9
  __int64 v37; // x8
  int v38; // w20
  __int64 v39; // x21
  GiftEntity_o *v40; // x24
  struct UILabel_array *v41; // x8
  il2cpp_array_size_t v42; // w23
  Il2CppObject *v43; // x25
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *v46; // x8
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  struct UILabel_array *v49; // x8
  UILabel_o *v50; // x26
  Il2CppObject *v51; // x27
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  struct UILabel_array *v54; // x8
  UILabel_o *v55; // x24
  struct UILabel_array *v56; // x8
  UILabel_o *v57; // x0
  float v58; // s1
  double v59; // d0
  bool v60; // zf
  double v61; // d1
  MasterMissionReceiveConfirmListViewItemDraw_c *v62; // x0
  int v63; // w21
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_Component_o *lineSprite; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  UnityEngine_BoxCollider_o *v69; // x0
  int v70; // s0
  UnityEngine_BoxCollider_o *v72; // x0
  float v73; // s1
  bool v74; // [xsp+Ch] [xbp-94h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-90h]
  int v76; // [xsp+1Ch] [xbp-84h]
  System_String_o *format; // [xsp+20h] [xbp-80h]
  int32_t num; // [xsp+2Ch] [xbp-74h] BYREF
  WarEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FB25F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, message);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_8616/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/, v18);
    byte_40FB25F = 1;
  }
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  this->fields.dispMode = mode;
  if ( mode && !this->fields.isInit )
  {
    this->fields.isInit = 1;
    if ( !message )
      goto LABEL_72;
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_72;
    UIWidget__set_height(
      (UIWidget_o *)messageLabel,
      messageLabel->fields.mFontSize * message->fields.m_stringLength,
      0LL);
    v20 = this->fields.messageLabel;
    if ( !v20 )
      goto LABEL_72;
    WrapControlText__textAdjust(v20, message, v20->fields.mFontSize, v20->fields.mFontSize, 0, 0LL);
    v21 = this->fields.messageLabel;
    if ( !v21 )
      goto LABEL_72;
    y = UILabel__get_printedSize(v21, 0LL).fields.y;
    v23 = (UIWidget_o *)this->fields.messageLabel;
    v24 = y;
    if ( y == INFINITY )
      v24 = -y;
    if ( !v23 )
      goto LABEL_72;
    v25 = (int)v24;
    UIWidget__set_height(v23, (int)v24, 0LL);
    v26 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      v26 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    MSG_REWARD_SPACE = v26->static_fields->MSG_REWARD_SPACE;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_72;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
    v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v29 )
      goto LABEL_72;
    v30 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)v29,
                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !v30 )
      goto LABEL_72;
    GiftListById = GiftMaster__GetGiftListById(v30, giftId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    CrossOperatorString = LocalizationManager__Get((System_String_o *)StringLiteral_8616/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/, 0LL);
    rewardLabel = this->fields.rewardLabel;
    format = CrossOperatorString;
    if ( !rewardLabel )
      goto LABEL_72;
    v74 = isLineDisp;
    if ( !GiftListById )
      goto LABEL_72;
    max_length = rewardLabel->max_length;
    v37 = *(_QWORD *)&GiftListById->max_length;
    v38 = MSG_REWARD_SPACE + v25;
    if ( (int)v37 < max_length )
      max_length = *(_QWORD *)&GiftListById->max_length;
    v76 = max_length;
    if ( max_length >= 1 )
    {
      if ( !(_DWORD)v37 )
      {
LABEL_57:
        sub_B17100(CrossOperatorString, v33, v34);
        sub_B170A0();
      }
      v39 = 4LL;
      while ( 1 )
      {
        v40 = (GiftEntity_o *)*((_QWORD *)&GiftListById->obj.klass + v39);
        CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
        v41 = this->fields.rewardLabel;
        if ( !v41 )
          break;
        v42 = v39 - 4;
        if ( (unsigned int)(v39 - 4) >= v41->max_length )
          goto LABEL_57;
        v43 = (Il2CppObject *)CrossOperatorString;
        v44 = (UnityEngine_Component_o *)*((_QWORD *)&v41->obj.klass + v39);
        if ( !v44 )
          break;
        gameObject = UnityEngine_Component__get_gameObject(v44, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v38, 0LL);
        v46 = this->fields.rewardLabel;
        if ( !v46 )
          break;
        if ( v42 >= v46->max_length )
          goto LABEL_57;
        v47 = (UnityEngine_Component_o *)*((_QWORD *)&v46->obj.klass + v39);
        if ( !v47 )
          break;
        v48 = UnityEngine_Component__get_gameObject(v47, 0LL);
        if ( !v48 )
          break;
        UnityEngine_GameObject__SetActive(v48, 1, 0LL);
        if ( !v40 )
          break;
        GiftEntity__GetInfo(v40, &nameText, &countText, 0LL);
        CrossOperatorString = (System_String_o *)Gift__IsItem_28854684(v40->fields.type, 0LL);
        if ( ((unsigned __int8)CrossOperatorString & 1) != 0 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          CrossOperatorString = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     MasterData_WarQuestSelectionMaster,
                                                     &entity,
                                                     v40->fields.objectId,
                                                     (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)CrossOperatorString & 1) != 0 )
          {
            if ( !entity )
              break;
            CrossOperatorString = ItemType__GetCountableString(entity->fields.bannerId, 0LL);
            v43 = (Il2CppObject *)CrossOperatorString;
          }
        }
        v49 = this->fields.rewardLabel;
        if ( !v49 )
          break;
        if ( v42 >= v49->max_length )
          goto LABEL_57;
        v50 = (UILabel_o *)*((_QWORD *)&v49->obj.klass + v39);
        v51 = (Il2CppObject *)nameText;
        num = v40->fields.num;
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        v53 = System_String__Format_43744796(format, v51, v43, v52, 0LL);
        if ( !v50 )
          break;
        UILabel__set_text(v50, v53, 0LL);
        v54 = this->fields.rewardLabel;
        if ( !v54 )
          break;
        if ( v42 >= v54->max_length )
          goto LABEL_57;
        v55 = (UILabel_o *)*((_QWORD *)&v54->obj.klass + v39);
        if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
        }
        if ( !v55 )
          break;
        UILabel__SetCondensedScale_40440812(
          v55,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0LL);
        v56 = this->fields.rewardLabel;
        if ( !v56 )
          break;
        if ( v42 >= v56->max_length )
          goto LABEL_57;
        v57 = (UILabel_o *)*((_QWORD *)&v56->obj.klass + v39);
        if ( !v57 )
          break;
        v58 = UILabel__get_printedSize(v57, 0LL).fields.y;
        v59 = v58;
        v60 = v58 == INFINITY;
        v61 = -v58;
        if ( v60 )
          v59 = v61;
        v38 += (int)v59;
        if ( (int)v39 - 3 >= v76 )
          goto LABEL_58;
        if ( (unsigned int)(++v39 - 4) >= GiftListById->max_length )
          goto LABEL_57;
      }
LABEL_72:
      sub_B170D4();
    }
LABEL_58:
    v62 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      v62 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    if ( !this->fields.lineSprite )
      goto LABEL_72;
    v63 = v62->static_fields->REWARD_LINE_SPACE + v38;
    v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.lineSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v64, (float)-v63, 0LL);
    lineSprite = (UnityEngine_Component_o *)this->fields.lineSprite;
    if ( !lineSprite )
      goto LABEL_72;
    v66 = UnityEngine_Component__get_gameObject(lineSprite, 0LL);
    if ( !v66 )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(v66, v74, 0LL);
    boxCollider = (UnityEngine_Object_o *)this->fields.boxCollider;
    LINE_HEIGHT = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->LINE_HEIGHT;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boxCollider, 0LL, 0LL) )
    {
      v69 = this->fields.boxCollider;
      if ( !v69 )
        goto LABEL_72;
      *(UnityEngine_Vector3_o *)&v70 = UnityEngine_BoxCollider__get_size(v69, 0LL);
      v72 = this->fields.boxCollider;
      if ( !v72 )
        goto LABEL_72;
      v73 = (float)(LINE_HEIGHT + v63);
      UnityEngine_BoxCollider__set_size(v72, *(UnityEngine_Vector3_o *)&v70, 0LL);
    }
  }
}