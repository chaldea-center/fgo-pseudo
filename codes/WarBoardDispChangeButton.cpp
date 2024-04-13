void __fastcall WarBoardDispChangeButton___ctor(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardDispChangeButton__ApplyFsOffsetAdjustment(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v6; // x1
  FSOffset_o *v7; // x0

  if ( (byte_42E51D1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E51D1 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v7 = this->fields.fsOffset;
    if ( !v7 || (FSOffset__AddOffsetX(v7, 0LL), (v7 = this->fields.fsOffset) == 0LL) )
      sub_B5D69C(v7, v6);
    FSOffset__AddBottomY(v7, 0LL);
  }
}


void __fastcall WarBoardDispChangeButton__Awake(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields._DispChangeIsTouch_k__BackingField = 0;
}


void __fastcall WarBoardDispChangeButton__OnClickButton(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x19
  __int64 v14; // x19
  WarBoardManager_o *v15; // x0

  if ( (byte_42E51D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarBoardDispChangeButton_OnClickButton__, v5, v6, v7);
    byte_42E51D0 = 1;
  }
  v8 = Method_WarBoardDispChangeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_WarBoardDispChangeButton_OnClickButton__ + 75) & 2) != 0 )
    v8 = (_QWORD *)sub_B5D5CC();
  v9 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v8, v8[3]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  this->fields._DispChangeIsTouch_k__BackingField = 1;
  WarBoardDispChangeButton__SetDispUIRoot(this, 0, v10);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AF52C4(v14);
  v15 = **(WarBoardManager_o ***)(v14 + 184);
  if ( !v15 )
    sub_B5D69C(0LL, v11);
  WarBoardManager__ChangeMapUIStateDelayCall(v15, 1, v12);
}


void __fastcall WarBoardDispChangeButton__SetActive(
        WarBoardDispChangeButton_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeButton__SetDispUIRoot(
        WarBoardDispChangeButton_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *v5; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x20
  __int64 v10; // x20
  WarBoardManager_o **v11; // x8
  WarBoardManager_o *v12; // x20
  const MethodInfo *v13; // x2
  WarBoardDispChangeButton_o *v14; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  bool v19; // w1
  WarBoardDispChangeComponent_o *v20; // x0

  v5 = (UnityEngine_Component_o *)this;
  if ( (byte_42E51D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___, isDisp, (_DWORD)method, v3);
    this = (WarBoardDispChangeButton_o *)sub_B5D5C4(
                                           &Method_SingletonMonoBehaviour_WarBoardManager__getInstance__,
                                           v6,
                                           v7,
                                           v8);
    byte_42E51D2 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    this = (WarBoardDispChangeButton_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                    + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    this = (WarBoardDispChangeButton_o *)sub_AF52C4(v10);
  v11 = *(WarBoardManager_o ***)(v10 + 184);
  v12 = *v11;
  if ( !*v11
    || (WarBoardManager__WarBoardObjectSetBoxCollider(*v11, isDisp, method),
        (this = (WarBoardDispChangeButton_o *)UnityEngine_Component__get_transform(v5, 0LL)) == 0LL)
    || (this = (WarBoardDispChangeButton_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL)) == 0LL
    || (this = (WarBoardDispChangeButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL
    || (this = (WarBoardDispChangeButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___)) == 0LL )
  {
    sub_B5D69C(this, isDisp);
  }
  v14 = this;
  WarBoardDispChangeComponent__SetUiRootAlpha((WarBoardDispChangeComponent_o *)this, isDisp, v13);
  if ( isDisp )
  {
    WarBoardDispChangeComponent__SetBackKeyObject((WarBoardDispChangeComponent_o *)v14, v15);
    v19 = !WarBoardManager__EnableAction(v12, v18) && !v12->fields.turnForceId && v12->fields.turnGroupId == 0;
    v20 = (WarBoardDispChangeComponent_o *)v14;
  }
  else
  {
    if ( v12->fields.selectPiece )
      WarBoardManager__DeselectPiece(v12, 1, 0LL, v17);
    v20 = (WarBoardDispChangeComponent_o *)v14;
    v19 = 0;
  }
  WarBoardDispChangeComponent__SetDispChangeBlink(v20, v19, v16);
}


void __fastcall WarBoardDispChangeButton__SetUpPositionForConfigurationMode(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0LL);
  WarBoardDispChangeButton__ApplyFsOffsetAdjustment(this, v5);
}


void __fastcall WarBoardDispChangeButton__SetUpPositionForPlayMode(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0LL);
  WarBoardDispChangeButton__ApplyFsOffsetAdjustment(this, v5);
}


bool __fastcall WarBoardDispChangeButton__get_DispChangeIsTouch(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  return this->fields._DispChangeIsTouch_k__BackingField;
}


void __fastcall WarBoardDispChangeButton__set_DispChangeIsTouch(
        WarBoardDispChangeButton_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._DispChangeIsTouch_k__BackingField = value;
}