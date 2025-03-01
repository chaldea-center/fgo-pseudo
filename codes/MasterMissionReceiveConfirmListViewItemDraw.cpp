void __fastcall MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MasterMissionReceiveConfirmListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4C009FE & 1) == 0 )
  {
    sub_1C2E12C(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v1);
    byte_4C009FE = 1;
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
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w9
  __int64 v26; // x8
  int v27; // w28
  int v28; // w29
  __int64 v29; // x27
  int v30; // w20
  GiftEntity_o *v31; // x24
  struct UILabel_array *v32; // x8
  unsigned int v33; // w21
  Il2CppObject *v34; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *v36; // x8
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  struct UILabel_array *v40; // x8
  int num; // w9
  UILabel_o *v42; // x24
  Il2CppObject *v43; // x23
  Il2CppObject *v44; // x0
  struct UILabel_array *v45; // x8
  UILabel_o *v46; // x24
  struct UILabel_array *v47; // x8
  UnityEngine_Vector2_o v48; // kr08_8
  int y; // w8
  int v51; // w21
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  int v55; // s0
  float v57; // s1
  bool v58; // [xsp+Ch] [xbp-94h]
  Il2CppObject *MasterData_object; // [xsp+10h] [xbp-90h]
  System_String_o *format; // [xsp+18h] [xbp-88h]
  int v61; // [xsp+24h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_4C009FD & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_GiftMaster___, message);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_1C2E12C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_1C2E12C(&int_TypeInfo, v13);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v14);
    sub_1C2E12C(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v15);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v16);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_8710/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/, v18);
    byte_4C009FD = 1;
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
    WrapControlText__textAdjust((UILabel_o *)this, message, this[5].fields.dispMode, this[5].fields.dispMode, 0LL);
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
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_71;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !this )
      goto LABEL_71;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, giftId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8710/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0LL);
    rewardLabel = v10->fields.rewardLabel;
    format = (System_String_o *)this;
    if ( !rewardLabel || !GiftListById )
      goto LABEL_71;
    max_length = rewardLabel->max_length;
    v26 = *(_QWORD *)&GiftListById->max_length;
    v27 = MSG_REWARD_SPACE + v20;
    if ( (int)v26 >= max_length )
      v28 = max_length;
    else
      v28 = *(_QWORD *)&GiftListById->max_length;
    if ( v28 >= 1 )
    {
      v58 = isLineDisp;
      if ( !(_DWORD)v26 )
LABEL_57:
        sub_1C2E390(this, message);
      v29 = 0LL;
      v30 = 1;
      while ( 1 )
      {
        v31 = GiftListById->m_Items[v29];
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0LL);
        v32 = v10->fields.rewardLabel;
        if ( !v32 )
          goto LABEL_71;
        v33 = v30 - 1;
        if ( v30 - 1 >= v32->max_length )
          goto LABEL_57;
        v34 = (Il2CppObject *)this;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v32->m_Items[v29];
        if ( !this )
          goto LABEL_71;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v27, 0LL);
        v36 = v10->fields.rewardLabel;
        if ( !v36 )
          goto LABEL_71;
        if ( v33 >= v36->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v36->m_Items[v29];
        if ( !this )
          goto LABEL_71;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
        if ( !this )
          goto LABEL_71;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !v31 )
          goto LABEL_71;
        GiftEntity__GetInfo(v31, &nameText, &countText, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)Gift__IsItem_38999548(v31->fields.type, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_71;
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                    &entity,
                                                                    v31->fields.objectId,
                                                                    (const MethodInfo_327B1CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_71;
            this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__GetCountableString(
                                                                      (int32_t)entity[3].klass,
                                                                      0LL);
            v34 = (Il2CppObject *)this;
          }
        }
        v40 = v10->fields.rewardLabel;
        if ( !v40 )
          goto LABEL_71;
        if ( v33 >= v40->max_length )
          goto LABEL_57;
        num = v31->fields.num;
        v42 = v40->m_Items[v29];
        v43 = (Il2CppObject *)nameText;
        v61 = num;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v37, v38, v39);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)System_String__Format_63250024(
                                                                  format,
                                                                  v43,
                                                                  v34,
                                                                  v44,
                                                                  0LL);
        if ( !v42 )
          goto LABEL_71;
        UILabel__set_text(v42, (System_String_o *)this, 0LL);
        v45 = v10->fields.rewardLabel;
        if ( !v45 )
          goto LABEL_71;
        if ( v33 >= v45->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
        v46 = v45->m_Items[v29];
        if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
        if ( !v46 )
          goto LABEL_71;
        UILabel__SetCondensedScale_48350976(
          v46,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0.0,
          0LL);
        v47 = v10->fields.rewardLabel;
        if ( !v47 )
          goto LABEL_71;
        if ( v33 >= v47->max_length )
          goto LABEL_57;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v47->m_Items[v29];
        if ( !this )
          goto LABEL_71;
        v48 = UILabel__get_printedSize((UILabel_o *)this, 0LL);
        y = (int)v48.fields.y;
        if ( v48.fields.y == INFINITY )
          y = 0x80000000;
        v27 += y;
        if ( v28 == v30 )
          break;
        v29 = v30;
        if ( v30++ >= GiftListById->max_length )
          goto LABEL_57;
      }
      isLineDisp = v58;
    }
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    if ( !v10->fields.lineSprite )
      goto LABEL_71;
    v51 = LODWORD(this[2].fields.messageLabel->monitor) + v27;
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10->fields.lineSprite, 0LL);
    GameObjectExtensions__SetLocalPositionY(v52, (float)-v51, 0LL);
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
        *(UnityEngine_Vector3_o *)&v55 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0LL);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
        if ( this )
        {
          v57 = (float)(LINE_HEIGHT + v51);
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, *(UnityEngine_Vector3_o *)&v55, 0LL);
          return;
        }
      }
LABEL_71:
      sub_1C2E388(this, message);
    }
  }
}