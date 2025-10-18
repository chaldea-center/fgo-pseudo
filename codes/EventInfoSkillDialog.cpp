void EventInfoSkillDialog___ctor(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C44DC8 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C44DC8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoSkillDialog__Awake(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillDialog__OnClose(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4C44DC7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventInfoSkillDialog_OnClose__);
    sub_1C37058(&Method_EventInfoSkillDialog__OnClose_b__10_0__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44DC7 = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    this->fields.canTap = 0;
    v4 = Method_EventInfoSkillDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoSkillDialog_OnClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_EventInfoSkillDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoSkillDialog__OnClose_b__10_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void EventInfoSkillDialog__Open(
        EventInfoSkillDialog_o *this,
        int32_t imagePartsGroupId,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x21
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4C44DC5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventInfoSkillDialog__Open_b__8_0__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44DC5 = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, (int32_t)inOnClosed, method);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventInfoSkillDialog__Open_b__8_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0, 0);
  EventInfoSkillDialog__SetupSkillInfo(this, imagePartsGroupId, v9);
}


void EventInfoSkillDialog__SetupSkillInfo(
        EventInfoSkillDialog_o *this,
        int32_t imagePartsGroupId,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *skillParent; // x0
  ImagePartsGroupMaster_o *Master_object; // x0
  int MasterName_k__BackingField; // w8
  ImagePartsGroupMaster_o *v8; // x20
  __int64 v9; // x24
  char v10; // w22
  float v11; // s8
  ImagePartsGroupEntity_o *v12; // x21
  Il2CppObject *v13; // x22
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *skillScrollView; // x20
  struct UIScrollView_o *v17; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v19; // x8

  if ( (byte_4C44DC6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44DC6 = 1;
  }
  skillParent = this->fields.skillParent;
  if ( skillParent )
    TransformHelper__DestroyChildren(skillParent, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__GetOpenEntities(Master_object, imagePartsGroupId, 0);
  if ( Master_object )
  {
    MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
    v8 = Master_object;
    if ( MasterName_k__BackingField >= 1 )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0.0;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= MasterName_k__BackingField )
          sub_1C372BC(Master_object);
        v12 = (ImagePartsGroupEntity_o *)*((_QWORD *)&v8->fields.revision + v9);
        if ( !v12 )
          break;
        Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__ExistsSkill(
                                                     *((ImagePartsGroupEntity_o **)&v8->fields.revision + v9),
                                                     0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v13 = GameObjectHelper__Instantiate_object_(
                  this->fields.skillPrefab,
                  this->fields.skillParent,
                  0,
                  (const MethodInfo_3140DFC *)Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
          {
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v13, 1, 0);
            if ( !v13 )
              break;
            EventInfoSkillDetailComponent__Setup(
              (EventInfoSkillDetailComponent_o *)v13,
              v12,
              (_DWORD)v9 != LODWORD(v8->fields._MasterName_k__BackingField) - 1,
              v14);
            ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v13, -v11, 0);
            v11 = v11 + EventInfoSkillDetailComponent__GetHeight((EventInfoSkillDetailComponent_o *)v13, v15);
          }
          v10 = 1;
        }
        MasterName_k__BackingField = (int)v8->fields._MasterName_k__BackingField;
        if ( (int)++v9 >= MasterName_k__BackingField )
          goto LABEL_24;
      }
LABEL_35:
      sub_1C372B4(Master_object);
    }
    v10 = 0;
LABEL_24:
    GameObjectHelper__SetActiveSafely(this->fields.noSkillObject, (v10 & 1) == 0, 0);
    skillScrollView = (UnityEngine_Object_o *)this->fields.skillScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(skillScrollView, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v17 = this->fields.skillScrollView;
      if ( !v17 )
        goto LABEL_35;
      verticalScrollBar = (UnityEngine_Object_o *)v17->fields.verticalScrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v19 = this->fields.skillScrollView;
        if ( !v19 )
          goto LABEL_35;
        Master_object = (ImagePartsGroupMaster_o *)v19->fields.verticalScrollBar;
        if ( !Master_object )
          goto LABEL_35;
        UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0);
      }
    }
  }
  else
  {
    GameObjectHelper__SetActiveSafely(this->fields.noSkillObject, 1, 0);
  }
}


void EventInfoSkillDialog___OnClose_b__10_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  CGThumbnailListItem_o *p_onClosed; // x19
  System_Action_o *onClosed; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C44DC9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44DC9 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
  onClosed = this->fields.onClosed;
  p_onClosed = (CGThumbnailListItem_o *)&this->fields.onClosed;
  ActionExtensions__Call(onClosed, 0);
  p_onClosed->klass = 0;
  sub_1C36FFC(p_onClosed, 0, v6, v7);
}


void EventInfoSkillDialog___Open_b__8_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}