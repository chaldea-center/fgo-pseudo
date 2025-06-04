void __fastcall EventInfoSkillDialog___ctor(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B03F39 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4B03F39 = 1;
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

  if ( (byte_4B03F38 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventInfoSkillDialog_OnClose__, v3);
    sub_1BC3008(&Method_EventInfoSkillDialog__OnClose_b__10_0__, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B03F38 = 1;
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
      v7 = (_QWORD *)sub_1BC3020(Method_EventInfoSkillDialog_OnClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *closeBtn; // x21
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_4B03F36 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&imagePartsGroupId);
    sub_1BC3008(&Method_EventInfoSkillDialog__Open_b__8_0__, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4B03F36 = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, (int32_t)inOnClosed, method);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventInfoSkillDialog__Open_b__8_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v10, 0, 0LL);
  EventInfoSkillDialog__SetupSkillInfo(this, imagePartsGroupId, v11);
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
  __int64 v11; // x2
  int MasterName_k__BackingField; // w8
  ImagePartsGroupMaster_o *v13; // x20
  __int64 v14; // x24
  char v15; // w22
  float v16; // s8
  ImagePartsGroupEntity_o *v17; // x21
  Il2CppObject *v18; // x22
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  UnityEngine_Object_o *skillScrollView; // x20
  struct UIScrollView_o *v22; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v24; // x8

  if ( (byte_4B03F37 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ImagePartsGroupMaster___, *(_QWORD *)&imagePartsGroupId);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B03F37 = 1;
  }
  skillParent = this->fields.skillParent;
  if ( skillParent )
    TransformHelper__DestroyChildren(skillParent, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__GetOpenEntities(
                                               Master_object,
                                               imagePartsGroupId,
                                               0LL);
  if ( Master_object )
  {
    MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
    v13 = Master_object;
    if ( MasterName_k__BackingField >= 1 )
    {
      v14 = 0LL;
      v15 = 0;
      v16 = 0.0;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= MasterName_k__BackingField )
          sub_1BC326C(Master_object, v10, v11);
        v17 = (ImagePartsGroupEntity_o *)*((_QWORD *)&v13->fields.revision + v14);
        if ( !v17 )
          break;
        Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__ExistsSkill(
                                                     *((ImagePartsGroupEntity_o **)&v13->fields.revision + v14),
                                                     0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v18 = GameObjectHelper__Instantiate_object_(
                  this->fields.skillPrefab,
                  this->fields.skillParent,
                  0,
                  (const MethodInfo_30575BC *)Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)v18,
                                                       0LL,
                                                       0LL);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
          {
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v18, 1, 0LL);
            if ( !v18 )
              break;
            EventInfoSkillDetailComponent__Setup(
              (EventInfoSkillDetailComponent_o *)v18,
              v17,
              (_DWORD)v14 != LODWORD(v13->fields._MasterName_k__BackingField) - 1,
              v19);
            ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v18, -v16, 0LL);
            v16 = v16 + EventInfoSkillDetailComponent__GetHeight((EventInfoSkillDetailComponent_o *)v18, v20);
          }
          v15 = 1;
        }
        MasterName_k__BackingField = (int)v13->fields._MasterName_k__BackingField;
        if ( (int)++v14 >= MasterName_k__BackingField )
          goto LABEL_24;
      }
LABEL_35:
      sub_1BC3264(Master_object, v10);
    }
    v15 = 0;
LABEL_24:
    GameObjectHelper__SetActiveSafely(this->fields.noSkillObject, (v15 & 1) == 0, 0LL);
    skillScrollView = (UnityEngine_Object_o *)this->fields.skillScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(skillScrollView, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v22 = this->fields.skillScrollView;
      if ( !v22 )
        goto LABEL_35;
      verticalScrollBar = (UnityEngine_Object_o *)v22->fields.verticalScrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v24 = this->fields.skillScrollView;
        if ( !v24 )
          goto LABEL_35;
        Master_object = (ImagePartsGroupMaster_o *)v24->fields.verticalScrollBar;
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
  CGThumbnailListItem_o *p_onClosed; // x19
  System_Action_o *onClosed; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B03F3A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B03F3A = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
  onClosed = this->fields.onClosed;
  p_onClosed = (CGThumbnailListItem_o *)&this->fields.onClosed;
  ActionExtensions__Call(onClosed, 0LL);
  p_onClosed->klass = 0LL;
  sub_1BC2FAC(p_onClosed, 0, v6, v7);
}


void __fastcall EventInfoSkillDialog___Open_b__8_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}