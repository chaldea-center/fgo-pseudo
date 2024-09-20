void __fastcall WarBoardDispChangeButton___ctor(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardDispChangeButton__ApplyFsOffsetAdjustment(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v4; // x1
  FSOffset_o *v5; // x0

  if ( (byte_4A59186 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59186 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v5 = this->fields.fsOffset;
    if ( !v5 || (FSOffset__AddOffsetX(v5, 0LL), (v5 = this->fields.fsOffset) == 0LL) )
      sub_1B8880C(v5, v4);
    FSOffset__AddBottomY(v5, 0LL);
  }
}


void __fastcall WarBoardDispChangeButton__Awake(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields._DispChangeIsTouch_k__BackingField = 0;
}


void __fastcall WarBoardDispChangeButton__OnClickButton(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  WarBoardManager_o *v9; // x0

  if ( (byte_4A59185 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1B885B0(&Method_WarBoardDispChangeButton_OnClickButton__);
    byte_4A59185 = 1;
  }
  v3 = Method_WarBoardDispChangeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_WarBoardDispChangeButton_OnClickButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardDispChangeButton_OnClickButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  this->fields._DispChangeIsTouch_k__BackingField = 1;
  WarBoardDispChangeButton__SetDispUIRoot(this, 0, v5);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  v9 = **(WarBoardManager_o ***)(v8 + 184);
  if ( !v9 )
    sub_1B8880C(0LL, v6);
  WarBoardManager__ChangeMapUIStateDelayCall(v9, 1, 0LL);
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
    sub_1B8880C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeButton__SetDispUIRoot(
        WarBoardDispChangeButton_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x0
  void *transform; // x0
  WarBoardManager_o **v7; // x8
  WarBoardManager_o *v8; // x20
  const MethodInfo *v9; // x2
  WarBoardDispChangeComponent_o *v10; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  bool IsPlayerTurn; // w0

  if ( (byte_4A59187 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4A59187 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  transform = *(void **)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*((_BYTE *)transform + 309) & 1) == 0 )
    transform = (void *)sub_1BDA48C(transform);
  v7 = (WarBoardManager_o **)*((_QWORD *)transform + 23);
  v8 = *v7;
  if ( !*v7
    || (WarBoardManager__WarBoardObjectSetBoxCollider(*v7, isDisp, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)transform,
                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___)) == 0LL )
  {
    sub_1B8880C(transform, isDisp);
  }
  v10 = (WarBoardDispChangeComponent_o *)transform;
  WarBoardDispChangeComponent__SetUiRootAlpha((WarBoardDispChangeComponent_o *)transform, isDisp, v9);
  if ( !isDisp )
  {
    if ( WarBoardManager__get_isSelectedPiece(v8, 0LL) )
      WarBoardManager__DeselectPiece(v8, 1, 0LL, 0LL);
    goto LABEL_17;
  }
  WarBoardDispChangeComponent__SetBackKeyObject(v10, v11);
  if ( WarBoardManager__EnableAction(v8, 0LL) )
  {
LABEL_17:
    IsPlayerTurn = 0;
    goto LABEL_18;
  }
  IsPlayerTurn = WarBoardManager__IsPlayerTurn(v8, 0LL);
LABEL_18:
  WarBoardDispChangeComponent__SetDispChangeBlink(v10, IsPlayerTurn, v12);
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
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(0LL, v4);
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