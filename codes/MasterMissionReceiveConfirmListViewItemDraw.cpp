void MasterMissionReceiveConfirmListViewItemDraw___cctor(const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_597437E & 1) == 0 )
  {
    sub_2213A60(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
    byte_597437E = 1;
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
  UnityEngine_Vector2_o printedSize; // kr10_8
  int32_t v12; // w24
  __int64 v13; // x1
  MasterMissionReceiveConfirmListViewItemDraw_c *v14; // x0
  int32_t MSG_REWARD_SPACE; // w20
  __int64 v16; // x1
  GiftEntity_array *GiftListById; // x22
  struct UILabel_array *rewardLabel; // x8
  int max_length; // w8
  int v20; // w28
  MasterMissionReceiveConfirmListViewItemDraw_o *v21; // x23
  int v22; // w20
  __int64 v23; // x29
  unsigned int v24; // w27
  GiftEntity_o *v25; // x24
  struct UILabel_array *v26; // x8
  Il2CppObject *v27; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *v29; // x8
  struct UILabel_array *v30; // x8
  int32_t num; // w9
  UILabel_o *v32; // x24
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x0
  struct UILabel_array *v35; // x8
  UILabel_o *v36; // x24
  struct UILabel_array *v37; // x8
  UnityEngine_Vector2_o v38; // kr18_8
  int y; // w8
  int v40; // w21
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x1
  UnityEngine_Object_o *boxCollider; // x20
  int32_t LINE_HEIGHT; // w22
  bool v46; // [xsp+4h] [xbp-8Ch]
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-88h]
  int32_t v48; // [xsp+14h] [xbp-7Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *countText; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o size; // 0:kr00_12.12
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_597437D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)sub_2213A60(&StringLiteral_8926/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/);
    byte_597437D = 1;
  }
  countText = 0;
  nameText = 0;
  entity = 0;
  v10->fields.dispMode = mode;
  if ( mode && !v10->fields.isInit )
  {
    v10->fields.isInit = 1;
    if ( !message )
      goto LABEL_66;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_66;
    UIWidget__set_height((UIWidget_o *)this, *((_DWORD *)this + 106) * message->fields._stringLength, 0);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_66;
    WrapControlText__textAdjust((UILabel_o *)this, message, *((_DWORD *)this + 106), *((_DWORD *)this + 106), 0);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    if ( !this )
      goto LABEL_66;
    printedSize = UILabel__get_printedSize((UILabel_o *)this, 0);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.messageLabel;
    v12 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
    if ( !this )
      goto LABEL_66;
    UIWidget__set_height((UIWidget_o *)this, v12, 0);
    v14 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !*(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, v13);
      v14 = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    MSG_REWARD_SPACE = v14->static_fields->MSG_REWARD_SPACE;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !this )
      goto LABEL_66;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)this, giftId, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8926/*"MASTER_MISSION_RECEIVE_CONFIRM_REWARD_FMT"*/,
                                                              0);
    rewardLabel = v10->fields.rewardLabel;
    if ( !rewardLabel )
      goto LABEL_66;
    v46 = isLineDisp;
    if ( !GiftListById )
      goto LABEL_66;
    max_length = rewardLabel->max_length;
    v20 = MSG_REWARD_SPACE + v12;
    if ( SLODWORD(GiftListById->max_length) < max_length )
      max_length = GiftListById->max_length;
    if ( max_length >= 1 )
    {
      v21 = this;
      v22 = -max_length;
      v23 = 4;
      while ( 1 )
      {
        v24 = v23 - 4;
        if ( (unsigned int)(v23 - 4) >= LODWORD(GiftListById->max_length) )
          goto LABEL_67;
        v25 = (GiftEntity_o *)*((_QWORD *)&GiftListById->obj.klass + v23);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__get_CrossOperatorString(0);
        v26 = v10->fields.rewardLabel;
        if ( !v26 )
          break;
        if ( v24 >= LODWORD(v26->max_length) )
LABEL_67:
          sub_2213CE4(this);
        v27 = (Il2CppObject *)this;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v26->obj.klass + v23);
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v20, 0);
        v29 = v10->fields.rewardLabel;
        if ( !v29 )
          break;
        if ( v24 >= LODWORD(v29->max_length) )
          goto LABEL_67;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v29->obj.klass + v23);
        if ( !this )
          break;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( !v25 )
          break;
        GiftEntity__GetInfo(v25, &nameText, &countText, 0);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)Gift__IsItem_47387928(v25->fields.type, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterData_object;
          if ( !MasterData_object )
            break;
          this = (MasterMissionReceiveConfirmListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                    &entity,
                                                                    v25->fields.objectId,
                                                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !entity )
              break;
            this = (MasterMissionReceiveConfirmListViewItemDraw_o *)ItemType__GetCountableString(
                                                                      (int32_t)entity[3].klass,
                                                                      0);
            v27 = (Il2CppObject *)this;
          }
        }
        v30 = v10->fields.rewardLabel;
        if ( !v30 )
          break;
        if ( v24 >= LODWORD(v30->max_length) )
          goto LABEL_67;
        num = v25->fields.num;
        v32 = (UILabel_o *)*((_QWORD *)&v30->obj.klass + v23);
        v33 = (Il2CppObject *)nameText;
        v48 = num;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v48);
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)System_String__Format_75697948(
                                                                  (System_String_o *)v21,
                                                                  v33,
                                                                  v27,
                                                                  v34,
                                                                  0);
        if ( !v32 )
          break;
        UILabel__set_text(v32, (System_String_o *)this, 0);
        v35 = v10->fields.rewardLabel;
        if ( !v35 )
          break;
        if ( v24 >= LODWORD(v35->max_length) )
          goto LABEL_67;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
        v36 = (UILabel_o *)*((_QWORD *)&v35->obj.klass + v23);
        if ( !*(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, message);
        if ( !v36 )
          break;
        UILabel__SetCondensedScale_56591096(
          v36,
          MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->REWARD_TEXT_WIDTH,
          0.0,
          0);
        v37 = v10->fields.rewardLabel;
        if ( !v37 )
          break;
        if ( v24 >= LODWORD(v37->max_length) )
          goto LABEL_67;
        this = (MasterMissionReceiveConfirmListViewItemDraw_o *)*((_QWORD *)&v37->obj.klass + v23);
        if ( !this )
          break;
        v38 = UILabel__get_printedSize((UILabel_o *)this, 0);
        ++v23;
        y = (int)v38.fields.y;
        if ( v38.fields.y == INFINITY )
          y = 0x80000000;
        v20 += y;
        if ( v22 + (_DWORD)v23 == 4 )
          goto LABEL_54;
      }
LABEL_66:
      sub_2213CDC(this, message);
    }
LABEL_54:
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    if ( !*(&MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewItemDraw_TypeInfo, message);
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)MasterMissionReceiveConfirmListViewItemDraw_TypeInfo;
    }
    if ( !v10->fields.lineSprite )
      goto LABEL_66;
    v40 = *(_DWORD *)(*((_QWORD *)this + 23) + 8LL) + v20;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10->fields.lineSprite, 0);
    GameObjectExtensions__SetLocalPositionY(v41, (float)-v40, 0);
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.lineSprite;
    if ( !this )
      goto LABEL_66;
    this = (MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
    if ( !this )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v46, 0);
    boxCollider = (UnityEngine_Object_o *)v10->fields.boxCollider;
    LINE_HEIGHT = MasterMissionReceiveConfirmListViewItemDraw_TypeInfo->static_fields->LINE_HEIGHT;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
    if ( UnityEngine_Object__op_Inequality(boxCollider, 0, 0) )
    {
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
      if ( !this )
        goto LABEL_66;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0);
      v53.fields.x = size.fields.x;
      v53.fields.z = size.fields.z;
      this = (MasterMissionReceiveConfirmListViewItemDraw_o *)v10->fields.boxCollider;
      if ( !this )
        goto LABEL_66;
      v53.fields.y = (float)(LINE_HEIGHT + v40);
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, v53, 0);
    }
  }
}