void __fastcall EquipGraphViewModeState___ctor(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  this->fields._topbtn_k__BackingField = 1;
  this->fields._btmbtn_k__BackingField = 1;
  this->fields._rarebtn_k__BackingField = 1;
  this->fields._atkbtn_k__BackingField = 1;
  this->fields._hpbtn_k__BackingField = 1;
  this->fields._namebtn_k__BackingField = 1;
  this->fields._allbtn_k__BackingField = 1;
  this->fields.AutoPlayInterval = 5.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphViewModeState__AutoPlayView(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t AutoPlayMode; // w8
  UnityEngine_Object_o *v5; // x20
  UIEquipGraphV_o *v6; // x0
  UIEquipGraphV_o *uiEquipGraphV; // x0
  int32_t v8; // w1
  UIEquipGraphV_o *v9; // x0
  ScriptManager_o *scriptManager; // x0

  if ( (byte_40FC4EB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2204, v3);
    byte_40FC4EB = 1;
  }
  AutoPlayMode = this->fields.AutoPlayMode;
  if ( AutoPlayMode == 2 )
  {
    uiEquipGraphV = this->fields.uiEquipGraphV;
    this->fields.AutoPlayMode = 3;
    if ( uiEquipGraphV )
    {
      v8 = 1;
      goto LABEL_17;
    }
LABEL_22:
    sub_B170D4();
  }
  if ( AutoPlayMode == 1 )
  {
    v9 = this->fields.uiEquipGraphV;
    this->fields.AutoPlayMode = 2;
    this->fields._rotbtn_k__BackingField = 0;
    if ( v9 )
    {
      UIEquipGraphV__SetRotateButton(v9, 0, 0LL);
LABEL_18:
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_2204,
        this->fields.AutoPlayInterval,
        0LL);
      return;
    }
    goto LABEL_22;
  }
  if ( AutoPlayMode )
  {
    scriptManager = this->fields.scriptManager;
    if ( !scriptManager )
      goto LABEL_22;
    ScriptManager__OnClickFowardView(scriptManager, 0LL);
  }
  else
  {
    this->fields.AutoPlayMode = 1;
    this->fields._rotbtn_k__BackingField = 1;
    v5 = (UnityEngine_Object_o *)this->fields.uiEquipGraphV;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
    {
      v6 = this->fields.uiEquipGraphV;
      if ( v6 )
      {
        UIEquipGraphV__SetRotateButton(v6, 0, 0LL);
        uiEquipGraphV = this->fields.uiEquipGraphV;
        if ( uiEquipGraphV )
        {
          v8 = 2;
LABEL_17:
          UIEquipGraphV__SetAllButton(uiEquipGraphV, v8, 0LL);
          goto LABEL_18;
        }
      }
      goto LABEL_22;
    }
  }
}


void __fastcall EquipGraphViewModeState__Awake(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphViewModeState__FowardView(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  ScriptManager_o *scriptManager; // x0

  scriptManager = this->fields.scriptManager;
  if ( !scriptManager )
    sub_B170D4();
  ScriptManager__OnClickFowardView(scriptManager, 0LL);
}


void __fastcall EquipGraphViewModeState__OnClickAutoPlayButton(
        EquipGraphViewModeState_o *this,
        bool isSetting,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *autoPlaySprite; // x0
  UnityEngine_Behaviour_o *quickAutoPlaySprite; // x0
  const MethodInfo *v6; // x1

  if ( !isSetting )
    this->fields._autobtn_k__BackingField ^= 1u;
  autoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.autoPlaySprite;
  if ( !autoPlaySprite )
    goto LABEL_9;
  if ( this->fields._autobtn_k__BackingField )
  {
    UnityEngine_Behaviour__set_enabled(autoPlaySprite, 1, 0LL);
    quickAutoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.quickAutoPlaySprite;
    this->fields._quickAutobtn_k__BackingField = 0;
    if ( quickAutoPlaySprite )
    {
      UnityEngine_Behaviour__set_enabled(quickAutoPlaySprite, 0, 0LL);
      this->fields.AutoPlayMode = 0;
      UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0LL);
      EquipGraphViewModeState__AutoPlayView(this, v6);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(autoPlaySprite, 0, 0LL);
  if ( !this->fields._quickAutobtn_k__BackingField )
    UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewModeState__OnClickQuickAutoPlayButton(
        EquipGraphViewModeState_o *this,
        bool isSetting,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *quickAutoPlaySprite; // x0
  UnityEngine_Behaviour_o *autoPlaySprite; // x0

  if ( (byte_40FC4EA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6755, isSetting);
    byte_40FC4EA = 1;
  }
  if ( !isSetting )
    this->fields._quickAutobtn_k__BackingField ^= 1u;
  quickAutoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.quickAutoPlaySprite;
  if ( !quickAutoPlaySprite )
    goto LABEL_11;
  if ( this->fields._quickAutobtn_k__BackingField )
  {
    UnityEngine_Behaviour__set_enabled(quickAutoPlaySprite, 1, 0LL);
    autoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.autoPlaySprite;
    this->fields._autobtn_k__BackingField = 0;
    if ( autoPlaySprite )
    {
      UnityEngine_Behaviour__set_enabled(autoPlaySprite, 0, 0LL);
      UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_6755,
        this->fields.AutoPlayInterval,
        0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(quickAutoPlaySprite, 0, 0LL);
  if ( !this->fields._autobtn_k__BackingField )
    UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EquipGraphViewModeState__get_allbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._allbtn_k__BackingField;
}


bool __fastcall EquipGraphViewModeState__get_atkbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._atkbtn_k__BackingField;
}


bool __fastcall EquipGraphViewModeState__get_autobtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._autobtn_k__BackingField;
}


bool __fastcall EquipGraphViewModeState__get_btmbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._btmbtn_k__BackingField;
}


bool __fastcall EquipGraphViewModeState__get_hpbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._hpbtn_k__BackingField;
}


bool __fastcall EquipGraphViewModeState__get_namebtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._namebtn_k__BackingField;
}


bool __fastcall EquipGraphViewModeState__get_quickAutobtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._quickAutobtn_k__BackingField;
}


bool __fastcall EquipGraphViewModeState__get_rarebtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._rarebtn_k__BackingField;
}


bool __fastcall EquipGraphViewModeState__get_rotbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._rotbtn_k__BackingField;
}


bool __fastcall EquipGraphViewModeState__get_topbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._topbtn_k__BackingField;
}


void __fastcall EquipGraphViewModeState__set_allbtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._allbtn_k__BackingField = value;
}


void __fastcall EquipGraphViewModeState__set_atkbtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._atkbtn_k__BackingField = value;
}


void __fastcall EquipGraphViewModeState__set_autobtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._autobtn_k__BackingField = value;
}


void __fastcall EquipGraphViewModeState__set_btmbtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._btmbtn_k__BackingField = value;
}


void __fastcall EquipGraphViewModeState__set_hpbtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._hpbtn_k__BackingField = value;
}


void __fastcall EquipGraphViewModeState__set_namebtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._namebtn_k__BackingField = value;
}


void __fastcall EquipGraphViewModeState__set_quickAutobtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._quickAutobtn_k__BackingField = value;
}


void __fastcall EquipGraphViewModeState__set_rarebtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._rarebtn_k__BackingField = value;
}


void __fastcall EquipGraphViewModeState__set_rotbtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._rotbtn_k__BackingField = value;
}


void __fastcall EquipGraphViewModeState__set_topbtn(
        EquipGraphViewModeState_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._topbtn_k__BackingField = value;
}