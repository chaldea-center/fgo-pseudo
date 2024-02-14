void __fastcall MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MasterMissionReceiveConfirmListViewItemDraw_c *v2; // x8

  if ( (byte_4216B0B & 1) == 0 )
  {
    sub_B0D8A4(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v1);
    byte_4216B0B = 1;
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
  MasterMissionReceiveConfirmListViewItemDraw_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  float y; // s1
  double v20; // d0
  int v21; // w24
  MasterMissionReceiveConfirmListViewItemDraw_c *v22; // x0
  int32_t MSG_REWARD_SPACE; // w20
  GiftEntity_array *GiftListById; // x22
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w9
  __int64 v27; // x8
  int v28; // w20
  __int64 v29; // x21
  GiftEntity_o *v30; // x24
  struct UILabel_array *v31; // x8
  il2cpp_array_size_t v32; // w23
  Il2CppObject *v33; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *v35; // x8
  struct UILabel_array *v36; // x8
  UILabel_o *v37; // x26
  Il2CppObject *v38; // x27
  Il2CppObject *v39; // x0
  struct UILabel_array *v40; // x8
  UILabel_o *v41; // x24
  struct UILabel_array *v42; // x8
  float v43; // s1
  double v44; // d0
  bool v45; // zf
  double v46; // d1
  __int64 v47; // x0
  int v48; // w21
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  int v52; // s0
  float v54; // s1
  bool v55; // [xsp+Ch] [xbp-94h]
  MasterMissionReceiveConfirmListViewItemDraw_o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-90h]
  int v57; // [xsp+1Ch] [xbp-84h]
  System_String_o *format; // [xsp+20h] [xbp-80h]
  int32_t num; // [xsp+2Ch] [xbp-74h] BYREF
  WarEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *nameText; // [xsp+48h] [xbp-58h] BYREF

  v10 = this;
  if ( (byte_4216B0A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, message);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_8667/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/, v18);
    byte_4216B0A = 1;
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
    v20 = y;
    if ( y == INFINITY )
      v20 = -y;
    if ( !this )
      goto LABEL_72;
    v21 = (int)v20;
    UIWidget__set_height((UIWidget_o *)this, (int)v20, 0LL);
    v22 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      v22 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    MSG_REWARD_SPACE = v22->static_fields->MSG_REWARD_SPACE;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    MasterData_WarQuestSelectionMaster = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)this,
                                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !this )
      goto LABEL_72;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, giftId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8667/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0LL);
    rewardLabel = v10->fields.rewardLabel;
    format = (System_String_o *)this;
    if ( !rewardLabel )
      goto LABEL_72;
    v55 = isLineDisp;
    if ( !GiftListById )
      goto LABEL_72;
    max_length = rewardLabel->max_length;
    v27 = *(_QWORD *)&GiftListById->max_length;
    v28 = MSG_REWARD_SPACE + v21;
    if ( (int)v27 < max_length )
      max_length = *(_QWORD *)&GiftListById->max_length;
    v57 = max_length;
    if ( max_length >= 1 )
    {
      if ( !(_DWORD)v27 )
      {
LABEL_57:
        v47 = sub_B0D9A8(this);
        sub_B0D948(v47, 0LL);
      }
      v29 = 4LL;
      while ( 1 )
      {
        v30 = (GiftEntity_o *)*((_QWORD *)&GiftListById->obj.klass + v29);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0LL);
        v31 = v10->fields.rewardLabel;
        if ( !v31 )
          break;
        v32 = v29 - 4;
        if ( (unsigned int)(v29 - 4) >= v31->max_length )
          goto LABEL_57;
        v33 = (Il2CppObject *)this;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v31->obj.klass + v29);
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v28, 0LL);
        v35 = v10->fields.rewardLabel;
        if ( !v35 )
          break;
        if ( v32 >= v35->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v35->obj.klass + v29);
        if ( !this )
          break;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !v30 )
          break;
        GiftEntity__GetInfo(v30, &nameText, &countText, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)Gift__IsItem_26783148(v30->fields.type, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = MasterData_WarQuestSelectionMaster;
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    v30->fields.objectId,
                                                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              break;
            this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__GetCountableString(
                                                                      entity->fields.bannerId,
                                                                      0LL);
            v33 = (Il2CppObject *)this;
          }
        }
        v36 = v10->fields.rewardLabel;
        if ( !v36 )
          break;
        if ( v32 >= v36->max_length )
          goto LABEL_57;
        v37 = (UILabel_o *)*((_QWORD *)&v36->obj.klass + v29);
        v38 = (Il2CppObject *)nameText;
        num = v30->fields.num;
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)System_String__Format_43850968(
                                                                  format,
                                                                  v38,
                                                                  v33,
                                                                  v39,
                                                                  0LL);
        if ( !v37 )
          break;
        UILabel__set_text(v37, (System_String_o *)this, 0LL);
        v40 = v10->fields.rewardLabel;
        if ( !v40 )
          break;
        if ( v32 >= v40->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
        v41 = (UILabel_o *)*((_QWORD *)&v40->obj.klass + v29);
        if ( (BYTE3(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
        }
        if ( !v41 )
          break;
        UILabel__SetCondensedScale_41140248(
          v41,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0LL);
        v42 = v10->fields.rewardLabel;
        if ( !v42 )
          break;
        if ( v32 >= v42->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v42->obj.klass + v29);
        if ( !this )
          break;
        v43 = UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.y;
        v44 = v43;
        v45 = v43 == INFINITY;
        v46 = -v43;
        if ( v45 )
          v44 = v46;
        v28 += (int)v44;
        if ( (int)v29 - 3 >= v57 )
          goto LABEL_58;
        if ( (unsigned int)(++v29 - 4) >= GiftListById->max_length )
          goto LABEL_57;
      }
LABEL_72:
      sub_B0D97C(this);
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
    v48 = *(_DWORD *)(*(_QWORD *)&this[2].fields.dispMode + 8LL) + v28;
    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10->fields.lineSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v49, (float)-v48, 0LL);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.lineSprite;
    if ( !this )
      goto LABEL_72;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !this )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v55, 0LL);
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
      *(UnityEngine_Vector3_o *)&v52 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0LL);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
      if ( !this )
        goto LABEL_72;
      v54 = (float)(LINE_HEIGHT + v48);
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, *(UnityEngine_Vector3_o *)&v52, 0LL);
    }
  }
}