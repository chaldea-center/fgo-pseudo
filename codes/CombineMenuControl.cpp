void __fastcall CombineMenuControl___ctor(CombineMenuControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UserServantEntity_o *__fastcall CombineMenuControl__GetMaterialUsrSvtData(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  BattleServantConfConponent_o *p_selectMaterialUsrSvtEntity; // x19
  struct UserServantEntity_o *selectMaterialUsrSvtEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  System_Int32_array **Entity; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_4186217 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineMenuControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186217 = 1;
  }
  selectMaterialUsrSvtEntity = v2->fields.selectMaterialUsrSvtEntity;
  p_selectMaterialUsrSvtEntity = (BattleServantConfConponent_o *)&v2->fields.selectMaterialUsrSvtEntity;
  v6 = selectMaterialUsrSvtEntity;
  if ( !selectMaterialUsrSvtEntity )
    goto LABEL_10;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v19, 0LL);
  this = (CombineMenuControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineMenuControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v10,
                                    (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_selectMaterialUsrSvtEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B2C2F8(p_selectMaterialUsrSvtEntity, Entity, v12, v13, v14, v15, v16, v17);
  return (UserServantEntity_o *)Entity;
}


void __fastcall CombineMenuControl__InitMenuControl(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Collections_Generic_List_EventDelegate__o *klass; // x20
  EventDelegate_Callback_o *v15; // x21

  if ( (byte_4186213 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&EventDelegate_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v10);
    byte_4186213 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.helpBtn) == 0LL)
    || (bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)bgTxtSprite,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_B2C434(bgTxtSprite, v11);
  }
  klass = (System_Collections_Generic_List_EventDelegate__o *)bgTxtSprite[4].klass;
  v15 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v15, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29727552(klass, v15, 0LL);
}


void __fastcall CombineMenuControl__OnClickBase(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4186214 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186214 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, v3);
  CombineRootComponent__ShowServantList(combineRootComponent, 0LL);
}


void __fastcall CombineMenuControl__OnClickHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  int32_t v7; // w20
  System_Action_o *v8; // x21

  if ( (byte_4186219 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineMenuControl_OnCloseHelp__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4186219 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn || (helpBtn = UnityEngine_GameObject__get_gameObject(helpBtn, 0LL)) == 0LL )
    sub_B2C434(helpBtn, v5);
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  v7 = ((__int64 (__fastcall *)(CombineMenuControl_o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineMenuControl_OnCloseHelp__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v7, v8, 0LL);
}


void __fastcall CombineMenuControl__OnClickLvExceedConductionWire(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4186218 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186218 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, v3);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl__OnClickMaterial(
        CombineMenuControl_o *this,
        int32_t type,
        int64_t selectUsrSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  int v12; // w8
  struct UserServantEntity_o *Entity; // x0
  struct UserServantEntity_o **p_selectMaterialUsrSvtEntity; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4186216 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    byte_4186216 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( type == 2 )
  {
    this->fields._targetType_k__BackingField = 2;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   selectUsrSvtId,
                   (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.selectMaterialUsrSvtEntity = Entity;
        p_selectMaterialUsrSvtEntity = &this->fields.selectMaterialUsrSvtEntity;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)p_selectMaterialUsrSvtEntity,
          (System_Int32_array **)Entity,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        Instance = (DataManager_o *)*(p_selectMaterialUsrSvtEntity - 8);
        if ( Instance )
        {
          CombineRootComponent__SelectShowServant((CombineRootComponent_o *)Instance, 0LL);
          return;
        }
      }
    }
    goto LABEL_20;
  }
  if ( type != 1 )
    return;
  Instance = (DataManager_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_20:
    sub_B2C434(Instance, v10);
  v12 = *(_DWORD *)&Instance[3].fields._DispLog;
  switch ( v12 )
  {
    case 11:
      CombineRootComponent__ShowNpMaterialSvtList((CombineRootComponent_o *)Instance, 0LL);
      break;
    case 4:
      CombineRootComponent__ShowSvtEqMaterialList((CombineRootComponent_o *)Instance, 0LL);
      break;
    case 3:
      CombineRootComponent__ShowMaterialSvtList((CombineRootComponent_o *)Instance, 0LL);
      break;
  }
}


void __fastcall CombineMenuControl__OnCloseHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0

  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
}


void __fastcall CombineMenuControl__OnLongPushListView(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4186215 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186215 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._targetType_k__BackingField = 0;
    if ( !combineRootComponent )
      sub_B2C434(0LL, v3);
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
  }
}


bool __fastcall CombineMenuControl__get_IsExeCombine(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._IsExeCombine_k__BackingField;
}


int32_t __fastcall CombineMenuControl__get_targetType(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._targetType_k__BackingField;
}


void __fastcall CombineMenuControl__set_IsExeCombine(CombineMenuControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExeCombine_k__BackingField = value;
}


void __fastcall CombineMenuControl__set_targetType(CombineMenuControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._targetType_k__BackingField = value;
}