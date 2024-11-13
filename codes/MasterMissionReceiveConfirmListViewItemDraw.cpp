void __fastcall MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MasterMissionReceiveConfirmListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4B1935E & 1) == 0 )
  {
    sub_1BCA7E0(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v1, v2);
    byte_4B1935E = 1;
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Vector2_o printedSize; // kr00_8
  int32_t v28; // w24
  __int64 v29; // x1
  MasterMissionReceiveConfirmListViewItemDraw_c *v30; // x0
  int32_t MSG_REWARD_SPACE; // w20
  __int64 v32; // x1
  GiftEntity_array *GiftListById; // x22
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w9
  __int64 v36; // x8
  int v37; // w28
  int v38; // w29
  __int64 v39; // x27
  int v40; // w20
  GiftEntity_o *v41; // x24
  struct UILabel_array *v42; // x8
  unsigned int v43; // w21
  Il2CppObject *v44; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *v46; // x8
  struct UILabel_array *v47; // x8
  int num; // w9
  UILabel_o *v49; // x24
  Il2CppObject *v50; // x23
  Il2CppObject *v51; // x0
  struct UILabel_array *v52; // x8
  UILabel_o *v53; // x24
  struct UILabel_array *v54; // x8
  UnityEngine_Vector2_o v55; // kr08_8
  int y; // w8
  int v58; // w21
  UnityEngine_GameObject_o *v59; // x0
  __int64 v60; // x1
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  int v63; // s0
  float v65; // s1
  bool v66; // [xsp+Ch] [xbp-94h]
  Il2CppObject *MasterData_object; // [xsp+10h] [xbp-90h]
  System_String_o *format; // [xsp+18h] [xbp-88h]
  int v69; // [xsp+24h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_4B1935D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, message, *(_QWORD *)&giftId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_8661/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/, v25, v26);
    byte_4B1935D = 1;
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
    v28 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
    if ( !this )
      goto LABEL_71;
    UIWidget__set_height((UIWidget_o *)this, v28, 0LL);
    v30 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v29);
      v30 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    MSG_REWARD_SPACE = v30->static_fields->MSG_REWARD_SPACE;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !this )
      goto LABEL_71;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8661/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0LL);
    rewardLabel = v10->fields.rewardLabel;
    format = (System_String_o *)this;
    if ( !rewardLabel || !GiftListById )
      goto LABEL_71;
    max_length = rewardLabel->max_length;
    v36 = *(_QWORD *)&GiftListById->max_length;
    v37 = MSG_REWARD_SPACE + v28;
    if ( (int)v36 >= max_length )
      v38 = max_length;
    else
      v38 = *(_QWORD *)&GiftListById->max_length;
    if ( v38 >= 1 )
    {
      v66 = isLineDisp;
      if ( !(_DWORD)v36 )
LABEL_57:
        sub_1BCAA44(this, message);
      v39 = 0LL;
      v40 = 1;
      while ( 1 )
      {
        v41 = GiftListById->m_Items[v39];
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0LL);
        v42 = v10->fields.rewardLabel;
        if ( !v42 )
          goto LABEL_71;
        v43 = v40 - 1;
        if ( v40 - 1 >= v42->max_length )
          goto LABEL_57;
        v44 = (Il2CppObject *)this;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v42->m_Items[v39];
        if ( !this )
          goto LABEL_71;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v37, 0LL);
        v46 = v10->fields.rewardLabel;
        if ( !v46 )
          goto LABEL_71;
        if ( v43 >= v46->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v46->m_Items[v39];
        if ( !this )
          goto LABEL_71;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
        if ( !this )
          goto LABEL_71;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !v41 )
          goto LABEL_71;
        GiftEntity__GetInfo(v41, &nameText, &countText, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)Gift__IsItem_38401476(v41->fields.type, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_71;
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                    &entity,
                                                                    v41->fields.objectId,
                                                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_71;
            this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__GetCountableString(
                                                                      (int32_t)entity[3].klass,
                                                                      0LL);
            v44 = (Il2CppObject *)this;
          }
        }
        v47 = v10->fields.rewardLabel;
        if ( !v47 )
          goto LABEL_71;
        if ( v43 >= v47->max_length )
          goto LABEL_57;
        num = v41->fields.num;
        v49 = v47->m_Items[v39];
        v50 = (Il2CppObject *)nameText;
        v69 = num;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)System_String__Format_62415660(
                                                                  format,
                                                                  v50,
                                                                  v44,
                                                                  v51,
                                                                  0LL);
        if ( !v49 )
          goto LABEL_71;
        UILabel__set_text(v49, (System_String_o *)this, 0LL);
        v52 = v10->fields.rewardLabel;
        if ( !v52 )
          goto LABEL_71;
        if ( v43 >= v52->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
        v53 = v52->m_Items[v39];
        if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, message);
        if ( !v53 )
          goto LABEL_71;
        UILabel__SetCondensedScale_47600808(
          v53,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0LL);
        v54 = v10->fields.rewardLabel;
        if ( !v54 )
          goto LABEL_71;
        if ( v43 >= v54->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v54->m_Items[v39];
        if ( !this )
          goto LABEL_71;
        v55 = UILabel__get_printedSize((UILabel_o *)this, 0LL);
        y = (int)v55.fields.y;
        if ( v55.fields.y == INFINITY )
          y = 0x80000000;
        v37 += y;
        if ( v38 == v40 )
          break;
        v39 = v40;
        if ( v40++ >= GiftListById->max_length )
          goto LABEL_57;
      }
      isLineDisp = v66;
    }
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, message);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    if ( !v10->fields.lineSprite )
      goto LABEL_71;
    v58 = LODWORD(this[2].fields.messageLabel->monitor) + v37;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10->fields.lineSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v59, (float)-v58, 0LL);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
    if ( UnityEngine_Object__op_Inequality(boxCollider, 0LL, 0LL) )
    {
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
      if ( this )
      {
        *(UnityEngine_Vector3_o *)&v63 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
        if ( this )
        {
          v65 = (float)(LINE_HEIGHT + v58);
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, *(UnityEngine_Vector3_o *)&v63, 0LL);
          return;
        }
      }
LABEL_71:
      sub_1BCAA3C(this, message);
    }
  }
}