void __fastcall MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MasterMissionReceiveConfirmListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_49FEEE6 & 1) == 0 )
  {
    sub_1B640C8(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v1);
    byte_49FEEE6 = 1;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  int32_t v20; // w24
  MasterMissionReceiveConfirmListViewItemDraw_c *v21; // x0
  int32_t MSG_REWARD_SPACE; // w20
  GiftEntity_array *GiftListById; // x22
  __int64 v24; // x1
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w9
  __int64 v27; // x8
  int v28; // w28
  int v29; // w29
  __int64 v30; // x27
  int v31; // w20
  GiftEntity_o *v32; // x24
  struct UILabel_array *v33; // x8
  unsigned int v34; // w21
  Il2CppObject *v35; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *v37; // x8
  struct UILabel_array *v38; // x8
  int num; // w9
  UILabel_o *v40; // x24
  Il2CppObject *v41; // x23
  Il2CppObject *v42; // x0
  struct UILabel_array *v43; // x8
  UILabel_o *v44; // x24
  struct UILabel_array *v45; // x8
  UnityEngine_Vector2_o v46; // kr08_8
  int y; // w8
  int v49; // w21
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  int v53; // s0
  float v55; // s1
  bool v56; // [xsp+Ch] [xbp-94h]
  Il2CppObject *MasterData_object; // [xsp+10h] [xbp-90h]
  System_String_o *format; // [xsp+18h] [xbp-88h]
  int v59; // [xsp+24h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_49FEEE5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, message);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)sub_1B640C8(&StringLiteral_8495/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/, v18);
    byte_49FEEE5 = 1;
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
    v20 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
    if ( !this )
      goto LABEL_71;
    UIWidget__set_height((UIWidget_o *)this, v20, 0LL);
    v21 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      v21 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    MSG_REWARD_SPACE = v21->static_fields->MSG_REWARD_SPACE;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !this )
      goto LABEL_71;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8495/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0LL);
    rewardLabel = v10->fields.rewardLabel;
    format = (System_String_o *)this;
    if ( !rewardLabel || !GiftListById )
      goto LABEL_71;
    max_length = rewardLabel->max_length;
    v27 = *(_QWORD *)&GiftListById->max_length;
    v28 = MSG_REWARD_SPACE + v20;
    if ( (int)v27 >= max_length )
      v29 = max_length;
    else
      v29 = *(_QWORD *)&GiftListById->max_length;
    if ( v29 >= 1 )
    {
      v56 = isLineDisp;
      if ( !(_DWORD)v27 )
LABEL_57:
        sub_1B6432C(this, v24);
      v30 = 0LL;
      v31 = 1;
      while ( 1 )
      {
        v32 = GiftListById->m_Items[v30];
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0LL);
        v33 = v10->fields.rewardLabel;
        if ( !v33 )
          goto LABEL_71;
        v34 = v31 - 1;
        if ( v31 - 1 >= v33->max_length )
          goto LABEL_57;
        v35 = (Il2CppObject *)this;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v33->m_Items[v30];
        if ( !this )
          goto LABEL_71;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v28, 0LL);
        v37 = v10->fields.rewardLabel;
        if ( !v37 )
          goto LABEL_71;
        if ( v34 >= v37->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v37->m_Items[v30];
        if ( !this )
          goto LABEL_71;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
        if ( !this )
          goto LABEL_71;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !v32 )
          goto LABEL_71;
        GiftEntity__GetInfo(v32, &nameText, &countText, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)Gift__IsItem_37376280(v32->fields.type, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_71;
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                    &entity,
                                                                    v32->fields.objectId,
                                                                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_71;
            this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__GetCountableString(
                                                                      (int32_t)entity[3].klass,
                                                                      0LL);
            v35 = (Il2CppObject *)this;
          }
        }
        v38 = v10->fields.rewardLabel;
        if ( !v38 )
          goto LABEL_71;
        if ( v34 >= v38->max_length )
          goto LABEL_57;
        num = v32->fields.num;
        v40 = v38->m_Items[v30];
        v41 = (Il2CppObject *)nameText;
        v59 = num;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)System_String__Format_61389836(
                                                                  format,
                                                                  v41,
                                                                  v35,
                                                                  v42,
                                                                  0LL);
        if ( !v40 )
          goto LABEL_71;
        UILabel__set_text(v40, (System_String_o *)this, 0LL);
        v43 = v10->fields.rewardLabel;
        if ( !v43 )
          goto LABEL_71;
        if ( v34 >= v43->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
        v44 = v43->m_Items[v30];
        if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
        if ( !v44 )
          goto LABEL_71;
        UILabel__SetCondensedScale_46760740(
          v44,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0LL);
        v45 = v10->fields.rewardLabel;
        if ( !v45 )
          goto LABEL_71;
        if ( v34 >= v45->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v45->m_Items[v30];
        if ( !this )
          goto LABEL_71;
        v46 = UILabel__get_printedSize((UILabel_o *)this, 0LL);
        y = (int)v46.fields.y;
        if ( v46.fields.y == INFINITY )
          y = 0x80000000;
        v28 += y;
        if ( v29 == v31 )
          break;
        v30 = v31;
        if ( v31++ >= GiftListById->max_length )
          goto LABEL_57;
      }
      isLineDisp = v56;
    }
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    if ( !v10->fields.lineSprite )
      goto LABEL_71;
    v49 = LODWORD(this[2].fields.messageLabel->monitor) + v28;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10->fields.lineSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v50, (float)-v49, 0LL);
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
        *(UnityEngine_Vector3_o *)&v53 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
        if ( this )
        {
          v55 = (float)(LINE_HEIGHT + v49);
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, *(UnityEngine_Vector3_o *)&v53, 0LL);
          return;
        }
      }
LABEL_71:
      sub_1B64324(this);
    }
  }
}