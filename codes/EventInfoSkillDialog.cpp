void __fastcall EventInfoSkillDialog___ctor(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDBE0 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDDBE0 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoSkillDialog__Awake(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoSkillDialog__OnClose(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4BDDBDF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoSkillDialog_OnClose__);
    sub_1C21E38(&Method_EventInfoSkillDialog__OnClose_b__10_0__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDBDF = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
    this->fields.canTap = 0;
    v4 = Method_EventInfoSkillDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoSkillDialog_OnClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_EventInfoSkillDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoSkillDialog__OnClose_b__10_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
}


void __fastcall EventInfoSkillDialog__Open(
        EventInfoSkillDialog_o *this,
        int32_t imagePartsGroupId,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_Object_o *closeBtn; // x21
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_4BDDBDD & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoSkillDialog__Open_b__8_0__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDBDD = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onClosed,
    (int64_t)inOnClosed,
    (int64_t)inOnClosed,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventInfoSkillDialog__Open_b__8_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
  EventInfoSkillDialog__SetupSkillInfo(this, imagePartsGroupId, v13);
}


void __fastcall EventInfoSkillDialog__SetupSkillInfo(
        EventInfoSkillDialog_o *this,
        int32_t imagePartsGroupId,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *skillParent; // x0
  ImagePartsGroupMaster_o *Master_object; // x0
  __int64 v7; // x1
  int MasterName_k__BackingField; // w8
  ImagePartsGroupMaster_o *v9; // x20
  __int64 v10; // x24
  char v11; // w22
  float v12; // s8
  ImagePartsGroupEntity_o *v13; // x21
  Il2CppObject *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *skillScrollView; // x20
  struct UIScrollView_o *v18; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v20; // x8

  if ( (byte_4BDDBDE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDBDE = 1;
  }
  skillParent = this->fields.skillParent;
  if ( skillParent )
    TransformHelper__DestroyChildren(skillParent, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__GetOpenEntities(
                                               Master_object,
                                               imagePartsGroupId,
                                               0LL);
  if ( Master_object )
  {
    MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
    v9 = Master_object;
    if ( MasterName_k__BackingField >= 1 )
    {
      v10 = 0LL;
      v11 = 0;
      v12 = 0.0;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= MasterName_k__BackingField )
          sub_1C2209C(Master_object, v7);
        v13 = (ImagePartsGroupEntity_o *)*((_QWORD *)&v9->fields.revision + v10);
        if ( !v13 )
          break;
        Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__ExistsSkill(
                                                     *((ImagePartsGroupEntity_o **)&v9->fields.revision + v10),
                                                     0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v14 = GameObjectHelper__Instantiate_object_(
                  this->fields.skillPrefab,
                  this->fields.skillParent,
                  0,
                  (const MethodInfo_3002158 *)Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)v14,
                                                       0LL,
                                                       0LL);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
          {
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v14, 1, 0LL);
            if ( !v14 )
              break;
            EventInfoSkillDetailComponent__Setup(
              (EventInfoSkillDetailComponent_o *)v14,
              v13,
              (_DWORD)v10 != LODWORD(v9->fields._MasterName_k__BackingField) - 1,
              v15);
            ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v14, -v12, 0LL);
            v12 = v12 + EventInfoSkillDetailComponent__GetHeight((EventInfoSkillDetailComponent_o *)v14, v16);
          }
          v11 = 1;
        }
        MasterName_k__BackingField = (int)v9->fields._MasterName_k__BackingField;
        if ( (int)++v10 >= MasterName_k__BackingField )
          goto LABEL_24;
      }
LABEL_35:
      sub_1C22094(Master_object, v7);
    }
    v11 = 0;
LABEL_24:
    GameObjectHelper__SetActiveSafely(this->fields.noSkillObject, (v11 & 1) == 0, 0LL);
    skillScrollView = (UnityEngine_Object_o *)this->fields.skillScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(skillScrollView, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v18 = this->fields.skillScrollView;
      if ( !v18 )
        goto LABEL_35;
      verticalScrollBar = (UnityEngine_Object_o *)v18->fields.verticalScrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v20 = this->fields.skillScrollView;
        if ( !v20 )
          goto LABEL_35;
        Master_object = (ImagePartsGroupMaster_o *)v20->fields.verticalScrollBar;
        if ( !Master_object )
          goto LABEL_35;
        UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
      }
    }
  }
  else
  {
    GameObjectHelper__SetActiveSafely(this->fields.noSkillObject, 1, 0LL);
  }
}


void __fastcall EventInfoSkillDialog___OnClose_b__10_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  PartyOrganizationUtility_o *p_onClosed; // x19
  System_Action_o *onClosed; // t1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDDBE1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDBE1 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  onClosed = this->fields.onClosed;
  p_onClosed = (PartyOrganizationUtility_o *)&this->fields.onClosed;
  ActionExtensions__Call(onClosed, 0LL);
  p_onClosed->klass = 0LL;
  sub_1C21DDC(p_onClosed, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall EventInfoSkillDialog___Open_b__8_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}