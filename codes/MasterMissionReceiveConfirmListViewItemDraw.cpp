void __fastcall MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A5DC54 & 1) == 0 )
  {
    sub_1B885B0(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
    byte_4A5DC54 = 1;
  }
  static_fields = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields;
  static_fields->REWARD_TEXT_WIDTH = 630.0;
  *(_QWORD *)&static_fields->MSG_REWARD_SPACE = 0x400000004LL;
  static_fields->LINE_HEIGHT = 3;
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
  UnityEngine_Vector2_o printedSize; // kr00_8
  int32_t v12; // w24
  MasterMissionReceiveConfirmListViewItemDraw_c *v13; // x0
  int32_t MSG_REWARD_SPACE; // w20
  GiftEntity_array *GiftListById; // x22
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w9
  __int64 v18; // x8
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
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct UILabel_array *v32; // x8
  int num; // w9
  UILabel_o *v34; // x24
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x0
  struct UILabel_array *v37; // x8
  UILabel_o *v38; // x24
  struct UILabel_array *v39; // x8
  UnityEngine_Vector2_o v40; // kr08_8
  int y; // w8
  int v43; // w21
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  int v47; // s0
  float v49; // s1
  bool v50; // [xsp+Ch] [xbp-94h]
  Il2CppObject *MasterData_object; // [xsp+10h] [xbp-90h]
  System_String_o *format; // [xsp+18h] [xbp-88h]
  int v53; // [xsp+24h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_4A5DC53 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)sub_1B885B0(&StringLiteral_8535/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/);
    byte_4A5DC53 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  entity = 0LL;
  v10->fields.dispMode = mode;
  if ( mode && !v10->fields.isInit )
  {
    v10->fields.isInit = 1;
    if ( !message )
      goto LABEL_71;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_71;
    UIWidget__set_height((UIWidget_o *)this, this[5].fields.dispMode * message->fields._stringLength, 0LL);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_71;
    WrapControlText__textAdjust((UILabel_o *)this, message, this[5].fields.dispMode, this[5].fields.dispMode, 0, 0LL);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_71;
    printedSize = UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    v12 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
    if ( !this )
      goto LABEL_71;
    UIWidget__set_height((UIWidget_o *)this, v12, 0LL);
    v13 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      v13 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    MSG_REWARD_SPACE = v13->static_fields->MSG_REWARD_SPACE;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !this )
      goto LABEL_71;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8535/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0LL);
    rewardLabel = v10->fields.rewardLabel;
    format = (System_String_o *)this;
    if ( !rewardLabel || !GiftListById )
      goto LABEL_71;
    max_length = rewardLabel->max_length;
    v18 = *(_QWORD *)&GiftListById->max_length;
    v19 = MSG_REWARD_SPACE + v12;
    if ( (int)v18 >= max_length )
      v20 = max_length;
    else
      v20 = *(_QWORD *)&GiftListById->max_length;
    if ( v20 >= 1 )
    {
      v50 = isLineDisp;
      if ( !(_DWORD)v18 )
LABEL_57:
        sub_1B88814(this, message);
      v21 = 0LL;
      v22 = 1;
      while ( 1 )
      {
        v23 = GiftListById->m_Items[v21];
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0LL);
        v24 = v10->fields.rewardLabel;
        if ( !v24 )
          goto LABEL_71;
        v25 = v22 - 1;
        if ( v22 - 1 >= v24->max_length )
          goto LABEL_57;
        v26 = (Il2CppObject *)this;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v24->m_Items[v21];
        if ( !this )
          goto LABEL_71;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v19, 0LL);
        v28 = v10->fields.rewardLabel;
        if ( !v28 )
          goto LABEL_71;
        if ( v25 >= v28->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v28->m_Items[v21];
        if ( !this )
          goto LABEL_71;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
        if ( !this )
          goto LABEL_71;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !v23 )
          goto LABEL_71;
        GiftEntity__GetInfo(v23, &nameText, &countText, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)Gift__IsItem_37687788(v23->fields.type, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_71;
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                    &entity,
                                                                    v23->fields.objectId,
                                                                    (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_71;
            this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__GetCountableString(
                                                                      (int32_t)entity[3].klass,
                                                                      0LL);
            v26 = (Il2CppObject *)this;
          }
        }
        v32 = v10->fields.rewardLabel;
        if ( !v32 )
          goto LABEL_71;
        if ( v25 >= v32->max_length )
          goto LABEL_57;
        num = v23->fields.num;
        v34 = v32->m_Items[v21];
        v35 = (Il2CppObject *)nameText;
        v53 = num;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v29, v30, v31);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)System_String__Format_61721472(
                                                                  format,
                                                                  v35,
                                                                  v26,
                                                                  v36,
                                                                  0LL);
        if ( !v34 )
          goto LABEL_71;
        UILabel__set_text(v34, (System_String_o *)this, 0LL);
        v37 = v10->fields.rewardLabel;
        if ( !v37 )
          goto LABEL_71;
        if ( v25 >= v37->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
        v38 = v37->m_Items[v21];
        if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
        if ( !v38 )
          goto LABEL_71;
        UILabel__SetCondensedScale_47038932(
          v38,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0LL);
        v39 = v10->fields.rewardLabel;
        if ( !v39 )
          goto LABEL_71;
        if ( v25 >= v39->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v39->m_Items[v21];
        if ( !this )
          goto LABEL_71;
        v40 = UILabel__get_printedSize((UILabel_o *)this, 0LL);
        y = (int)v40.fields.y;
        if ( v40.fields.y == INFINITY )
          y = 0x80000000;
        v19 += y;
        if ( v20 == v22 )
          break;
        v21 = v22;
        if ( v22++ >= GiftListById->max_length )
          goto LABEL_57;
      }
      isLineDisp = v50;
    }
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    if ( !v10->fields.lineSprite )
      goto LABEL_71;
    v43 = LODWORD(this[2].fields.messageLabel->monitor) + v19;
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10->fields.lineSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v44, (float)-v43, 0LL);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.lineSprite;
    if ( !this )
      goto LABEL_71;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !this )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isLineDisp, 0LL);
    boxCollider = (UnityEngine_Object_o *)v10->fields.boxCollider;
    LINE_HEIGHT = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->LINE_HEIGHT;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boxCollider, 0LL, 0LL) )
    {
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
      if ( this )
      {
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
        if ( this )
        {
          v49 = (float)(LINE_HEIGHT + v43);
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, *(UnityEngine_Vector3_o *)&v47, 0LL);
          return;
        }
      }
LABEL_71:
      sub_1B8880C(this, message);
    }
  }
}