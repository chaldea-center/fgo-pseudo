void EquipGraphViewModeState___ctor(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  this->fields._topbtn_k__BackingField = 1;
  this->fields._btmbtn_k__BackingField = 1;
  this->fields._rarebtn_k__BackingField = 1;
  this->fields._atkbtn_k__BackingField = 1;
  this->fields._hpbtn_k__BackingField = 1;
  this->fields._namebtn_k__BackingField = 1;
  this->fields._allbtn_k__BackingField = 1;
  this->fields.AutoPlayInterval = 5.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipGraphViewModeState__AutoPlayView(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  int32_t AutoPlayMode; // w8
  UnityEngine_Object_o *v4; // x20
  UIEquipGraphV_o *uiEquipGraphV; // x0
  int32_t v6; // w1

  if ( (byte_4C34EF5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_2501/*"AutoPlayView"*/);
    byte_4C34EF5 = 1;
  }
  AutoPlayMode = this->fields.AutoPlayMode;
  if ( AutoPlayMode == 2 )
  {
    uiEquipGraphV = this->fields.uiEquipGraphV;
    this->fields.AutoPlayMode = 3;
    if ( uiEquipGraphV )
    {
      v6 = 1;
      goto LABEL_14;
    }
LABEL_21:
    sub_1C32E7C(uiEquipGraphV);
  }
  if ( AutoPlayMode == 1 )
  {
    uiEquipGraphV = this->fields.uiEquipGraphV;
    this->fields.AutoPlayMode = 2;
    this->fields._rotbtn_k__BackingField = 0;
    if ( uiEquipGraphV )
    {
      UIEquipGraphV__SetRotateButton(uiEquipGraphV, 0, 0);
      goto LABEL_17;
    }
    goto LABEL_21;
  }
  if ( AutoPlayMode )
  {
    uiEquipGraphV = (UIEquipGraphV_o *)this->fields.scriptManager;
    if ( !uiEquipGraphV )
      goto LABEL_21;
    ScriptManager__OnClickFowardView((ScriptManager_o *)uiEquipGraphV, 0);
  }
  else
  {
    this->fields.AutoPlayMode = 1;
    this->fields._rotbtn_k__BackingField = 1;
    v4 = (UnityEngine_Object_o *)this->fields.uiEquipGraphV;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
    {
      uiEquipGraphV = this->fields.uiEquipGraphV;
      if ( uiEquipGraphV )
      {
        UIEquipGraphV__SetRotateButton(uiEquipGraphV, 0, 0);
        uiEquipGraphV = this->fields.uiEquipGraphV;
        if ( uiEquipGraphV )
        {
          v6 = 2;
LABEL_14:
          UIEquipGraphV__SetAllButton(uiEquipGraphV, v6, 0);
LABEL_17:
          UnityEngine_MonoBehaviour__Invoke(
            (UnityEngine_MonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_2501/*"AutoPlayView"*/,
            this->fields.AutoPlayInterval,
            0);
          return;
        }
      }
      goto LABEL_21;
    }
  }
}


void EquipGraphViewModeState__Awake(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  ;
}


void EquipGraphViewModeState__FowardView(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  ScriptManager_o *scriptManager; // x0

  scriptManager = this->fields.scriptManager;
  if ( !scriptManager )
    sub_1C32E7C(0);
  ScriptManager__OnClickFowardView(scriptManager, 0);
}


void EquipGraphViewModeState__OnClickAutoPlayButton(
        EquipGraphViewModeState_o *this,
        bool isSetting,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *autoPlaySprite; // x0
  const MethodInfo *v5; // x1

  if ( !isSetting )
    this->fields._autobtn_k__BackingField ^= 1u;
  autoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.autoPlaySprite;
  if ( !autoPlaySprite )
    goto LABEL_9;
  if ( this->fields._autobtn_k__BackingField )
  {
    UnityEngine_Behaviour__set_enabled(autoPlaySprite, 1, 0);
    autoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.quickAutoPlaySprite;
    this->fields._quickAutobtn_k__BackingField = 0;
    if ( autoPlaySprite )
    {
      UnityEngine_Behaviour__set_enabled(autoPlaySprite, 0, 0);
      this->fields.AutoPlayMode = 0;
      UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
      EquipGraphViewModeState__AutoPlayView(this, v5);
      return;
    }
LABEL_9:
    sub_1C32E7C(autoPlaySprite);
  }
  UnityEngine_Behaviour__set_enabled(autoPlaySprite, 0, 0);
  if ( !this->fields._quickAutobtn_k__BackingField )
    UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipGraphViewModeState__OnClickQuickAutoPlayButton(
        EquipGraphViewModeState_o *this,
        bool isSetting,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *quickAutoPlaySprite; // x0

  if ( (byte_4C34EF4 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6851/*"FowardView"*/);
    byte_4C34EF4 = 1;
  }
  if ( !isSetting )
    this->fields._quickAutobtn_k__BackingField ^= 1u;
  quickAutoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.quickAutoPlaySprite;
  if ( !quickAutoPlaySprite )
    goto LABEL_11;
  if ( this->fields._quickAutobtn_k__BackingField )
  {
    UnityEngine_Behaviour__set_enabled(quickAutoPlaySprite, 1, 0);
    quickAutoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.autoPlaySprite;
    this->fields._autobtn_k__BackingField = 0;
    if ( quickAutoPlaySprite )
    {
      UnityEngine_Behaviour__set_enabled(quickAutoPlaySprite, 0, 0);
      UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_6851/*"FowardView"*/,
        this->fields.AutoPlayInterval,
        0);
      return;
    }
LABEL_11:
    sub_1C32E7C(quickAutoPlaySprite);
  }
  UnityEngine_Behaviour__set_enabled(quickAutoPlaySprite, 0, 0);
  if ( !this->fields._autobtn_k__BackingField )
    UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EquipGraphViewModeState__get_allbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._allbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_atkbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._atkbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_autobtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._autobtn_k__BackingField;
}


bool EquipGraphViewModeState__get_btmbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._btmbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_hpbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._hpbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_namebtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._namebtn_k__BackingField;
}


bool EquipGraphViewModeState__get_quickAutobtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._quickAutobtn_k__BackingField;
}


bool EquipGraphViewModeState__get_rarebtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._rarebtn_k__BackingField;
}


bool EquipGraphViewModeState__get_rotbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._rotbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_topbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._topbtn_k__BackingField;
}


void EquipGraphViewModeState__set_allbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._allbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_atkbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._atkbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_autobtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._autobtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_btmbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._btmbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_hpbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._hpbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_namebtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._namebtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_quickAutobtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._quickAutobtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_rarebtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._rarebtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_rotbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._rotbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_topbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._topbtn_k__BackingField = value;
}