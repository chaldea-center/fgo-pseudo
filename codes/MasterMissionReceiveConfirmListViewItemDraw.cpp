void MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4CB94CC & 1) == 0 )
  {
    sub_1C6BA08(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
    byte_4CB94CC = 1;
  }
  static_fields = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields;
  static_fields->REWARD_TEXT_WIDTH = 630.0;
  *(_QWORD *)&static_fields->MSG_REWARD_SPACE = 0x400000004LL;
  static_fields->LINE_HEIGHT = 3;
}


void MasterMissionReceiveConfirmListViewItemDraw___ctor(
        MasterMissionReceiveConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MasterMissionReceiveConfirmListViewItemDraw__SetItem(
        MasterMissionReceiveConfirmListViewItemDraw_o *this,
        System_String_o *message,
        int32_t giftId,
        int32_t mode,
        bool isLineDisp,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmListViewItemDraw_o *v10; // x19
  UnityEngine_Vector2_o printedSize; // kr00_8
  int32_t v12; // w24
  MasterMissionReceiveConfirmListViewItemDraw_c *v13; // x0
  int32_t MSG_REWARD_SPACE; // w20
  GiftEntity_array *GiftListById; // x22
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w9
  il2cpp_array_size_t v18; // x8
  int v19; // w28
  int v20; // w29
  __int64 v21; // x27
  int v22; // w20
  GiftEntity_o *v23; // x24
  struct UILabel_array *v24; // x8
  unsigned int v25; // w21
  Il2CppObject *v26; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *v28; // x8
  struct UILabel_array *v29; // x8
  int32_t num; // w9
  UILabel_o *v31; // x24
  Il2CppObject *v32; // x23
  Il2CppObject *v33; // x0
  struct UILabel_array *v34; // x8
  UILabel_o *v35; // x24
  struct UILabel_array *v36; // x8
  UnityEngine_Vector2_o v37; // kr08_8
  int y; // w8
  int v40; // w21
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  float v44; // s1
  bool v45; // [xsp+Ch] [xbp-94h]
  Il2CppObject *MasterData_object; // [xsp+10h] [xbp-90h]
  System_String_o *format; // [xsp+18h] [xbp-88h]
  int32_t v48; // [xsp+24h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_4CB94CB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)sub_1C6BA08(&StringLiteral_8560/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/);
    byte_4CB94CB = 1;
  }
  countText = 0;
  nameText = 0;
  entity = 0;
  v10->fields.dispMode = mode;
  if ( mode && !v10->fields.isInit )
  {
    v10->fields.isInit = 1;
    if ( !message )
      goto LABEL_71;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_71;
    UIWidget__set_height((UIWidget_o *)this, this[5].fields.dispMode * message->fields._stringLength, 0);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_71;
    WrapControlText__textAdjust((UILabel_o *)this, message, this[5].fields.dispMode, this[5].fields.dispMode, 0);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_71;
    printedSize = UILabel__get_printedSize((UILabel_o *)this, 0);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    v12 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
    if ( !this )
      goto LABEL_71;
    UIWidget__set_height((UIWidget_o *)this, v12, 0);
    v13 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      v13 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    MSG_REWARD_SPACE = v13->static_fields->MSG_REWARD_SPACE;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !this )
      goto LABEL_71;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, giftId, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8560/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0);
    rewardLabel = v10->fields.rewardLabel;
    format = (System_String_o *)this;
    if ( !rewardLabel || !GiftListById )
      goto LABEL_71;
    max_length = rewardLabel->max_length;
    v18 = GiftListById->max_length;
    v19 = MSG_REWARD_SPACE + v12;
    if ( (int)v18 >= max_length )
      v20 = max_length;
    else
      v20 = GiftListById->max_length;
    if ( v20 >= 1 )
    {
      v45 = isLineDisp;
      if ( !(_DWORD)v18 )
LABEL_57:
        sub_1C6BC68(this);
      v21 = 0;
      v22 = 1;
      while ( 1 )
      {
        v23 = GiftListById->m_Items[v21];
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0);
        v24 = v10->fields.rewardLabel;
        if ( !v24 )
          goto LABEL_71;
        v25 = v22 - 1;
        if ( (unsigned int)(v22 - 1) >= LODWORD(v24->max_length) )
          goto LABEL_57;
        v26 = (Il2CppObject *)this;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v24->m_Items[v21];
        if ( !this )
          goto LABEL_71;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v19, 0);
        v28 = v10->fields.rewardLabel;
        if ( !v28 )
          goto LABEL_71;
        if ( v25 >= LODWORD(v28->max_length) )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v28->m_Items[v21];
        if ( !this )
          goto LABEL_71;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
        if ( !this )
          goto LABEL_71;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( !v23 )
          goto LABEL_71;
        GiftEntity__GetInfo(v23, &nameText, &countText, 0);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)Gift__IsItem_40656752(v23->fields.type, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_71;
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                    &entity,
                                                                    v23->fields.objectId,
                                                                    (const MethodInfo_33F9128 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_71;
            this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__GetCountableString(
                                                                      (int32_t)entity[3].klass,
                                                                      0);
            v26 = (Il2CppObject *)this;
          }
        }
        v29 = v10->fields.rewardLabel;
        if ( !v29 )
          goto LABEL_71;
        if ( v25 >= LODWORD(v29->max_length) )
          goto LABEL_57;
        num = v23->fields.num;
        v31 = v29->m_Items[v21];
        v32 = (Il2CppObject *)nameText;
        v48 = num;
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)System_String__Format_64008168(format, v32, v26, v33, 0);
        if ( !v31 )
          goto LABEL_71;
        UILabel__set_text(v31, (System_String_o *)this, 0);
        v34 = v10->fields.rewardLabel;
        if ( !v34 )
          goto LABEL_71;
        if ( v25 >= LODWORD(v34->max_length) )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
        v35 = v34->m_Items[v21];
        if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
        if ( !v35 )
          goto LABEL_71;
        UILabel__SetCondensedScale_49828120(
          v35,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0.0,
          0);
        v36 = v10->fields.rewardLabel;
        if ( !v36 )
          goto LABEL_71;
        if ( v25 >= LODWORD(v36->max_length) )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v36->m_Items[v21];
        if ( !this )
          goto LABEL_71;
        v37 = UILabel__get_printedSize((UILabel_o *)this, 0);
        y = (int)v37.fields.y;
        if ( v37.fields.y == INFINITY )
          y = 0x80000000;
        v19 += y;
        if ( v20 == v22 )
          break;
        v21 = v22;
        if ( (unsigned int)v22++ >= LODWORD(GiftListById->max_length) )
          goto LABEL_57;
      }
      isLineDisp = v45;
    }
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    if ( !v10->fields.lineSprite )
      goto LABEL_71;
    v40 = LODWORD(this[2].fields.messageLabel->monitor) + v19;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10->fields.lineSprite, 0);
    GameObjectExtensions__SetLocalPositionY(v41, (float)-v40, 0);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.lineSprite;
    if ( !this )
      goto LABEL_71;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
    if ( !this )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isLineDisp, 0);
    boxCollider = (UnityEngine_Object_o *)v10->fields.boxCollider;
    LINE_HEIGHT = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->LINE_HEIGHT;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boxCollider, 0, 0) )
    {
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
      if ( this )
      {
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
        if ( this )
        {
          v44 = (float)(LINE_HEIGHT + v40);
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, size, 0);
          return;
        }
      }
LABEL_71:
      sub_1C6BC60(this, message);
    }
  }
}