void __fastcall EventInfoSkillDialog___ctor(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BFEE22 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4BFEE22 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Action_o *v9; // x20

  if ( (byte_4BFEE21 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_EventInfoSkillDialog_OnClose__, v3);
    sub_1C2E12C(&Method_EventInfoSkillDialog__OnClose_b__10_0__, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4BFEE21 = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
    this->fields.canTap = 0;
    v7 = Method_EventInfoSkillDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoSkillDialog_OnClose__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2E144(Method_EventInfoSkillDialog_OnClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2E110(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    v9 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_EventInfoSkillDialog__OnClose_b__10_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *closeBtn; // x21
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4BFEE1F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&imagePartsGroupId);
    sub_1C2E12C(&Method_EventInfoSkillDialog__Open_b__8_0__, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    byte_4BFEE1F = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_1C2E0D0(
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
  v14 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventInfoSkillDialog__Open_b__8_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0LL);
  EventInfoSkillDialog__SetupSkillInfo(this, imagePartsGroupId, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSkillDialog__SetupSkillInfo(
        EventInfoSkillDialog_o *this,
        int32_t imagePartsGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Transform_o *skillParent; // x0
  ImagePartsGroupMaster_o *Master_object; // x0
  __int64 v10; // x1
  int MasterName_k__BackingField; // w8
  ImagePartsGroupMaster_o *v12; // x20
  __int64 v13; // x24
  char v14; // w22
  float v15; // s8
  ImagePartsGroupEntity_o *v16; // x21
  Il2CppObject *v17; // x22
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *skillScrollView; // x20
  struct UIScrollView_o *v21; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v23; // x8

  if ( (byte_4BFEE20 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_ImagePartsGroupMaster___, *(_QWORD *)&imagePartsGroupId);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    byte_4BFEE20 = 1;
  }
  skillParent = this->fields.skillParent;
  if ( skillParent )
    TransformHelper__DestroyChildren(skillParent, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__GetOpenEntities(
                                               Master_object,
                                               imagePartsGroupId,
                                               0LL);
  if ( Master_object )
  {
    MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
    v12 = Master_object;
    if ( MasterName_k__BackingField >= 1 )
    {
      v13 = 0LL;
      v14 = 0;
      v15 = 0.0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= MasterName_k__BackingField )
          sub_1C2E390(Master_object, v10);
        v16 = (ImagePartsGroupEntity_o *)*((_QWORD *)&v12->fields.revision + v13);
        if ( !v16 )
          break;
        Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__ExistsSkill(
                                                     *((ImagePartsGroupEntity_o **)&v12->fields.revision + v13),
                                                     0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v17 = GameObjectHelper__Instantiate_object_(
                  this->fields.skillPrefab,
                  this->fields.skillParent,
                  0,
                  (const MethodInfo_3024730 *)Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)v17,
                                                       0LL,
                                                       0LL);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
          {
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v17, 1, 0LL);
            if ( !v17 )
              break;
            EventInfoSkillDetailComponent__Setup(
              (EventInfoSkillDetailComponent_o *)v17,
              v16,
              (_DWORD)v13 != LODWORD(v12->fields._MasterName_k__BackingField) - 1,
              v18);
            ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v17, -v15, 0LL);
            v15 = v15 + EventInfoSkillDetailComponent__GetHeight((EventInfoSkillDetailComponent_o *)v17, v19);
          }
          v14 = 1;
        }
        MasterName_k__BackingField = (int)v12->fields._MasterName_k__BackingField;
        if ( (int)++v13 >= MasterName_k__BackingField )
          goto LABEL_24;
      }
LABEL_35:
      sub_1C2E388(Master_object, v10);
    }
    v14 = 0;
LABEL_24:
    GameObjectHelper__SetActiveSafely(this->fields.noSkillObject, (v14 & 1) == 0, 0LL);
    skillScrollView = (UnityEngine_Object_o *)this->fields.skillScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(skillScrollView, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v21 = this->fields.skillScrollView;
      if ( !v21 )
        goto LABEL_35;
      verticalScrollBar = (UnityEngine_Object_o *)v21->fields.verticalScrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v23 = this->fields.skillScrollView;
        if ( !v23 )
          goto LABEL_35;
        Master_object = (ImagePartsGroupMaster_o *)v23->fields.verticalScrollBar;
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

  if ( (byte_4BFEE23 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFEE23 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
  onClosed = this->fields.onClosed;
  p_onClosed = (PartyOrganizationUtility_o *)&this->fields.onClosed;
  ActionExtensions__Call(onClosed, 0LL);
  p_onClosed->klass = 0LL;
  sub_1C2E0D0(p_onClosed, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall EventInfoSkillDialog___Open_b__8_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}