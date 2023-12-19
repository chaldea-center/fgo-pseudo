void __fastcall SoundPlayerMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F9D51 & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerMenu_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_12870, v8);
    byte_40F9D51 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SoundPlayerMenu_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_12870;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12870;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
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
  System_Int32_array **v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_int__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F9D50 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40F9D50 = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  v12 = (System_Int32_array **)StringLiteral_1;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.playSoundName, v12, v2, v3, v4, v5, v6, v7);
  v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15,
                                                    v16);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.isNewList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40F9D42 & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SoundPlayerMenu_OnSelectSound__, v6);
    byte_40F9D42 = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v8 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B170CC(
                                                      SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    0LL);
  if ( !soundPlayerListViewManager )
    sub_B170D4();
  soundPlayerListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SoundPlayerListViewManager__SetMode_24871304(soundPlayerListViewManager, 2, v15);
  ActionExtensions__Call(this->fields.openedAct, 0LL);
}


void __fastcall SoundPlayerMenu__Init(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ListViewManager_o *soundPlayerListViewManager; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9D3D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F9D3D = 1;
  }
  this->fields.retTrialListening = 0LL;
  this->fields.state = 0;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.retTrialListening, 0LL, v2, v3, v4, v5, v6, v7);
  v9 = (System_Int32_array **)StringLiteral_1;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.backupBgmName, v9, v10, v11, v12, v13, v14, v15);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0LL),
        (v17 = (UnityEngine_Component_o *)this->fields.soundPlayerListViewManager) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v17, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerMenu__OnSelectSound(
        SoundPlayerMenu_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  SoundPlayerListViewItem_o *v16; // x20
  int32_t playSoundIdx; // w22
  SoundPlayerListViewItem_o *v18; // x0
  const MethodInfo *v19; // x1
  SoundManager_c *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  struct BgmEntity_o *bgmEntity; // x8
  int32_t id; // w21
  const MethodInfo *v26; // x1
  System_Collections_Generic_List_int__o *isNewList; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0
  struct BgmEntity_o *v36; // x8
  struct System_String_o **p_fileName; // x8
  struct System_String_o *v38; // x1
  const MethodInfo *v39; // x1
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo *v49; // x2

  if ( (byte_40F9D43 & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&Method_SoundPlayerMenu_OnSelectSound__, v10);
    byte_40F9D43 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Item = SoundPlayerMenu__getItem(this, index, *(const MethodInfo **)&index);
    if ( !Item )
      goto LABEL_34;
    v16 = Item;
    if ( !Item->fields.bgmEntity )
      goto LABEL_34;
    this->fields.selectIndex = index;
    if ( kind == 2 )
    {
      SoundPlayerMenu__attachSelectEffect(this, v12);
      SoundPlayerMenu__createOpenDlg(this, v16, v22);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, v23);
    }
    else if ( kind == 1 )
    {
      playSoundIdx = this->fields.playSoundIdx;
      this->fields.playSoundIdx = index;
      v18 = SoundPlayerMenu__getItem(this, playSoundIdx, v13);
      if ( v18 )
      {
        v18->fields._isPlaySound_k__BackingField = 0;
        SoundPlayerListViewItem__applyUi(v18, v19);
      }
      if ( this->fields.playSoundIdx == playSoundIdx )
      {
        v20 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopBgm((const MethodInfo *)v20);
        SoundPlayerMenu__resetPlaySoundData(this, v21);
      }
      else
      {
        bgmEntity = v16->fields.bgmEntity;
        if ( !bgmEntity )
          goto LABEL_36;
        id = bgmEntity->fields.id;
        *(_WORD *)&v16->fields._isPlaySound_k__BackingField = 1;
        SoundPlayerListViewItem__attachPlayEffect(v16, v19);
        SoundPlayerListViewItem__applyUi(v16, v26);
        isNewList = this->fields.isNewList;
        if ( !isNewList )
          goto LABEL_36;
        if ( !System_Collections_Generic_List_int___Contains(
                isNewList,
                id,
                (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v35 = this->fields.isNewList;
          if ( !v35 )
            goto LABEL_36;
          System_Collections_Generic_List_int___Add(
            v35,
            id,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        if ( (byte_40F9D1C & 1) == 0 )
        {
          sub_B16FFC(&StringLiteral_1, v28);
          byte_40F9D1C = 1;
        }
        v36 = v16->fields.bgmEntity;
        if ( v36 )
          p_fileName = &v36->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1;
        v38 = *p_fileName;
        this->fields.playSoundName = *p_fileName;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.playSoundName,
          (System_Int32_array **)v38,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        playSoundName = this->fields.playSoundName;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm(playSoundName, v39);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v42 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B170CC(
                                                           SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                           v12,
                                                           v13,
                                                           v14,
                                                           v15);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v42,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        0LL);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v42;
        sub_B16F98(
          (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
          (System_Int32_array **)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        SoundPlayerListViewManager__SetMode_24871304(soundPlayerListViewManager, 2, v49);
        return;
      }
LABEL_36:
      sub_B170D4();
    }
  }
}


void __fastcall SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  SoundPlayerListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_40F9D52 & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_40F9D52 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0LL),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v10 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                             v6,
                                                             v7,
                                                             v8,
                                                             v9),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          0LL),
        !soundPlayerListViewManager) )
  {
    sub_B170D4();
  }
  soundPlayerListViewManager->fields.callbackFunc = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SoundPlayerListViewManager__SetMode_24871304(soundPlayerListViewManager, 2, v17);
}


void __fastcall SoundPlayerMenu__add_callbackFunc(
        SoundPlayerMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerMenu_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40F9D3B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F9D3B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_B173C8(v8);
  SoundPlayerMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SoundPlayerMenu__analyzeNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SoundPlayerMenu_c *v7; // x0
  System_String_o *String; // x20
  System_Collections_Generic_List_int__o *isNewList; // x0
  __int64 v10; // x2
  System_Char_array *v11; // x0
  __int64 v12; // x2
  System_Char_array *v13; // x1
  System_String_array *v14; // x0
  __int64 v15; // x8
  System_String_array *v16; // x20
  unsigned __int64 v17; // x21
  signed __int64 v18; // x22
  int32_t v19; // w0

  if ( (byte_40F9D3F & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v4);
    sub_B16FFC(&SoundPlayerMenu_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40F9D3F = 1;
  }
  v7 = SoundPlayerMenu_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
    v7 = SoundPlayerMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v7->static_fields->SOUND_PLAYER_NEW_KEY,
             (System_String_o *)StringLiteral_1,
             0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    isNewList = this->fields.isNewList;
    if ( !isNewList )
      goto LABEL_19;
    System_Collections_Generic_List_int___Clear(
      isNewList,
      (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
    v11 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v10);
    if ( !v11 )
      goto LABEL_19;
    v13 = v11;
    if ( !v11->max_length )
    {
LABEL_17:
      sub_B17100(v11, v13, v12);
      sub_B170A0();
    }
    v11->m_Items[2] = 44;
    if ( !String || (v14 = System_String__Split(String, v11, 0LL)) == 0LL )
LABEL_19:
      sub_B170D4();
    v15 = *(_QWORD *)&v14->max_length;
    v16 = v14;
    if ( (int)v15 >= 1 )
    {
      v17 = 0LL;
      v18 = (int)v15;
      while ( 1 )
      {
        v19 = System_Int32__Parse(v16->m_Items[v17], 0LL);
        if ( !this->fields.isNewList )
          goto LABEL_19;
        System_Collections_Generic_List_int___Add(
          this->fields.isNewList,
          v19,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( (__int64)++v17 >= v18 )
          return;
        if ( v17 >= v16->max_length )
          goto LABEL_17;
      }
    }
  }
}


void __fastcall SoundPlayerMenu__attachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *selectEffect; // x20
  const MethodInfo *v6; // x2
  SoundPlayerListViewItem_o *Item; // x0
  struct ListViewObject_o *viewObject; // x8
  __int64 v9; // x11
  struct ListViewObject_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  CommonEffectComponent_o *Component_srcLineSprite; // x0

  if ( (byte_40F9D45 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&SoundPlayerListViewObject_TypeInfo, v4);
    byte_40F9D45 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    Item = SoundPlayerMenu__getItem(this, this->fields.selectIndex, v6);
    if ( !Item )
      goto LABEL_24;
    viewObject = Item->fields.viewObject;
    if ( viewObject
      && (v9 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
    {
      if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v9 - 1] == SoundPlayerListViewObject_TypeInfo )
        v10 = Item->fields.viewObject;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
    {
      v11 = this->fields.selectEffect;
      if ( v11 )
      {
        UnityEngine_GameObject__SetActive(v11, 1, 0LL);
        if ( v10 )
        {
          GameObjectExtensions__SafeSetParent(
            this->fields.selectEffect,
            *(UnityEngine_Component_o **)&v10[1].fields.m_CachedPtr,
            0LL);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0LL);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0LL);
          v12 = this->fields.selectEffect;
          if ( v12 )
          {
            Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v12,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Component_srcLineSprite )
            {
              CommonEffectComponent__ForceStart(Component_srcLineSprite, 0LL);
              return;
            }
          }
        }
      }
LABEL_24:
      sub_B170D4();
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__busyWaitStopBgm(
        SoundPlayerMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9D4E & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, method);
    byte_40F9D4E = 1;
  }
  v6 = sub_B170CC(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, method, v2, v3, v4);
  SoundPlayerMenu__busyWaitStopBgm_d__41___ctor((SoundPlayerMenu__busyWaitStopBgm_d__41_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall SoundPlayerMenu__createOpenDlg(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o *name; // x0
  System_String_o *v28; // x0
  Il2CppObject *v29; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  struct BgmEntity_o *v32; // x20
  System_String_o *v33; // x24
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v36; // x0
  ItemMaster_o *v37; // x24
  WebViewManager_o *v38; // x0
  WarQuestSelectionMaster_o *v39; // x0
  System_String_o *v40; // x21
  UserItemMaster_o *v41; // x25
  __int64 ItemData; // x0
  __int64 num; // x1
  System_String_array **v44; // x2
  WarEntity_o *v45; // x8
  struct System_String_o *v46; // x9
  System_String_c *klass; // x9
  System_Int32_array **v48; // x19
  char v49; // w20
  __int64 v50; // x22
  System_String_o *v51; // x23
  struct System_String_o *v52; // x8
  unsigned __int64 v53; // x28
  __int64 v54; // x26
  struct System_String_o *v55; // x8
  int v56; // w8
  __int64 v57; // x8
  __int64 v58; // x8
  Il2CppObject *v59; // x27
  Il2CppObject *CountText; // x28
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  bool v65; // w24
  System_Int32_array **v66; // x27
  System_Int32_array **v67; // x25
  __int64 v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array *v74; // x26
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_o *v95; // x21
  System_String_o *v96; // x22
  System_String_o *v97; // x23
  System_String_o *v98; // x25
  CommonUI_o *v99; // x26
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  TripleButtonDlgComponent_CallbackFunc_o *v104; // x27
  CommonUI_o *v105; // x0
  System_Int32_array **v106; // [xsp+40h] [xbp-80h]
  System_String_o *title; // [xsp+48h] [xbp-78h]
  Il2CppObject *object; // [xsp+50h] [xbp-70h]
  __int64 v109; // [xsp+58h] [xbp-68h]
  UserItemEntity_o *v110; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40F9D4F & 1) == 0 )
  {
    sub_B16FFC(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_SoundPlayerMenu_openCheckDlgCallback__, v13);
    sub_B16FFC(&string___TypeInfo, v14);
    sub_B16FFC(&StringLiteral_26, v15);
    sub_B16FFC(&StringLiteral_12228, v16);
    sub_B16FFC(&StringLiteral_12226, v17);
    sub_B16FFC(&StringLiteral_12224, v18);
    sub_B16FFC(&StringLiteral_12227, v19);
    sub_B16FFC(&StringLiteral_12222, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    sub_B16FFC(&StringLiteral_67, v22);
    sub_B16FFC(&StringLiteral_12225, v23);
    sub_B16FFC(&StringLiteral_12233, v24);
    sub_B16FFC(&StringLiteral_12223, v25);
    byte_40F9D4F = 1;
  }
  entity = 0LL;
  v110 = 0LL;
  if ( !item )
    goto LABEL_58;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_58;
  name = bgmEntity->fields.name;
  if ( !name )
    goto LABEL_58;
  v28 = System_String__Replace_43750968(
          name,
          (System_String_o *)StringLiteral_67,
          (System_String_o *)StringLiteral_1,
          0LL);
  if ( !v28 )
    goto LABEL_58;
  v29 = (Il2CppObject *)System_String__Replace_43750968(
                          v28,
                          (System_String_o *)StringLiteral_26,
                          (System_String_o *)StringLiteral_1,
                          0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12233, 0LL);
  v31 = System_String__Format(v30, v29, 0LL);
  v32 = item->fields.bgmEntity;
  v33 = v31;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v36 )
    goto LABEL_58;
  title = v33;
  v37 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v36,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v38 )
    goto LABEL_58;
  v39 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v38,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v32 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_58;
  v40 = (System_String_o *)StringLiteral_1;
  v41 = (UserItemMaster_o *)v39;
  object = (Il2CppObject *)this;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          v32->fields.shopId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    v65 = 0;
    v66 = (System_Int32_array **)v40;
    v51 = v40;
    v48 = (System_Int32_array **)v40;
    goto LABEL_66;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ItemData = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12225, 0LL);
  v45 = entity;
  if ( !entity || (v46 = entity->fields.name) == 0LL )
LABEL_58:
    sub_B170D4();
  klass = v46[1].klass;
  v48 = (System_Int32_array **)ItemData;
  if ( (int)klass < 1 )
  {
    v49 = 0;
    v51 = v40;
  }
  else
  {
    v106 = (System_Int32_array **)ItemData;
    v109 = (int)klass;
    v49 = 0;
    v50 = 8LL;
    v51 = v40;
    while ( 1 )
    {
      v52 = v45->fields.name;
      if ( !v52 )
        goto LABEL_58;
      v53 = v50 - 8;
      if ( v50 - 8 >= (unsigned __int64)LODWORD(v52[1].klass) )
        goto LABEL_88;
      if ( !v37 )
        goto LABEL_58;
      ItemData = (__int64)ItemMaster__GetItemData(v37, *((_DWORD *)&v52->klass + v50), 0LL);
      if ( ItemData )
      {
        v54 = ItemData;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        ItemData = NetworkManager__get_UserId(0LL);
        if ( !entity )
          goto LABEL_58;
        v55 = entity->fields.name;
        if ( !v55 )
          goto LABEL_58;
        if ( v53 >= LODWORD(v55[1].klass) )
          goto LABEL_88;
        if ( !v41 )
          goto LABEL_58;
        ItemData = UserItemMaster__TryGetEntity(v41, &v110, ItemData, *((_DWORD *)&v55->klass + v50), 0LL);
        if ( (ItemData & 1) != 0 )
        {
          if ( !v110 )
            goto LABEL_58;
          num = (unsigned int)v110->fields.num;
        }
        else
        {
          ItemData = (__int64)UserGameMaster__getSelfUserGame(0LL);
          v56 = *(_DWORD *)(v54 + 48);
          if ( v56 == 5 )
          {
            if ( !ItemData )
              goto LABEL_58;
            num = *(unsigned int *)(ItemData + 176);
          }
          else if ( v56 == 22 )
          {
            if ( !ItemData )
              goto LABEL_58;
            num = *(unsigned int *)(ItemData + 180);
          }
          else
          {
            num = 0LL;
          }
        }
        if ( !entity )
          goto LABEL_58;
        v57 = *(_QWORD *)&entity->fields.startType;
        if ( !v57 )
          goto LABEL_58;
        if ( v53 >= *(unsigned int *)(v57 + 24) )
          goto LABEL_88;
        if ( (int)num < *(_DWORD *)(v57 + 4 * v50) )
          v49 = 1;
        ItemData = (__int64)ItemType__GetCountText(*(_DWORD *)(v54 + 48), num, 0LL);
        if ( !entity )
          goto LABEL_58;
        v58 = *(_QWORD *)&entity->fields.startType;
        if ( !v58 )
          goto LABEL_58;
        if ( v53 >= *(unsigned int *)(v58 + 24) )
          goto LABEL_88;
        v59 = (Il2CppObject *)ItemData;
        CountText = (Il2CppObject *)ItemType__GetCountText(*(_DWORD *)(v54 + 48), *(_DWORD *)(v58 + 4 * v50), 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12227, 0LL);
        v62 = System_String__Format_43739268(v61, *(Il2CppObject **)(v54 + 24), v59, 0LL);
        v51 = System_String__Concat_43743732(v51, v62, 0LL);
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12227, 0LL);
        v64 = System_String__Format_43739268(v63, *(Il2CppObject **)(v54 + 24), CountText, 0LL);
        ItemData = (__int64)System_String__Concat_43743732(v40, v64, 0LL);
        v40 = (System_String_o *)ItemData;
      }
      if ( v50 - 7 >= v109 )
        break;
      v45 = entity;
      ++v50;
      if ( !entity )
        goto LABEL_58;
    }
    v48 = v106;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v66 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12226, 0LL);
  v65 = v49 & 1;
LABEL_66:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v67 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12228, 0LL);
  ItemData = sub_B17014(string___TypeInfo, 5LL, v68);
  if ( !ItemData )
    goto LABEL_58;
  v74 = (System_String_array *)ItemData;
  if ( v48 )
  {
    ItemData = sub_B170BC(v48, *(_QWORD *)(*(_QWORD *)ItemData + 64LL));
    if ( !ItemData )
      goto LABEL_89;
  }
  if ( !v74->max_length )
    goto LABEL_88;
  v74->m_Items[0] = (System_String_o *)v48;
  sub_B16F98((BattleServantConfConponent_o *)v74->m_Items, v48, v44, v69, v70, v71, v72, v73);
  if ( v51 )
  {
    ItemData = sub_B170BC(v51, v74->obj.klass->_1.element_class);
    if ( !ItemData )
      goto LABEL_89;
  }
  if ( v74->max_length <= 1 )
    goto LABEL_88;
  v74->m_Items[1] = v51;
  sub_B16F98((BattleServantConfConponent_o *)&v74->m_Items[1], (System_Int32_array **)v51, v44, v75, v76, v77, v78, v79);
  if ( v66 )
  {
    ItemData = sub_B170BC(v66, v74->obj.klass->_1.element_class);
    if ( !ItemData )
      goto LABEL_89;
  }
  if ( v74->max_length <= 2 )
    goto LABEL_88;
  v74->m_Items[2] = (System_String_o *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v74->m_Items[2], v66, v44, v80, v81, v82, v83, v84);
  if ( v40 )
  {
    ItemData = sub_B170BC(v40, v74->obj.klass->_1.element_class);
    if ( !ItemData )
      goto LABEL_89;
  }
  if ( v74->max_length <= 3 )
    goto LABEL_88;
  v74->m_Items[3] = v40;
  sub_B16F98((BattleServantConfConponent_o *)&v74->m_Items[3], (System_Int32_array **)v40, v44, v85, v86, v87, v88, v89);
  if ( v67 )
  {
    ItemData = sub_B170BC(v67, v74->obj.klass->_1.element_class);
    if ( !ItemData )
    {
LABEL_89:
      sub_B170F4(ItemData);
      sub_B170A0();
    }
  }
  if ( v74->max_length <= 4 )
  {
LABEL_88:
    sub_B17100(ItemData, num, v44);
    sub_B170A0();
  }
  v74->m_Items[4] = (System_String_o *)v67;
  sub_B16F98((BattleServantConfConponent_o *)&v74->m_Items[4], v67, v44, v90, v91, v92, v93, v94);
  v95 = System_String__Concat_43823856(v74, 0LL);
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12222, 0LL);
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12223, 0LL);
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12224, 0LL);
  v99 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v104 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                      TripleButtonDlgComponent_CallbackFunc_TypeInfo,
                                                      v100,
                                                      v101,
                                                      v102,
                                                      v103);
  TripleButtonDlgComponent_CallbackFunc___ctor(v104, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0LL);
  if ( !v99 )
    goto LABEL_58;
  CommonUI__OpenTripleButtonDlg(v99, title, v95, v96, v97, v98, v104, 30, 10, 10, 1, 0, 8, 1, 0LL);
  v105 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v105 )
    goto LABEL_58;
  CommonUI__setStateTripleButtonDlgRightButton(v105, v65, 0LL);
}


void __fastcall SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  const MethodInfo *v7; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  UnityEngine_GameObject_o *EffetData; // x21
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40F9D44 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_18138, v4);
    byte_40F9D44 = 1;
  }
  SoundPlayerMenu__releaseSelectEffect(this, method);
  p_selectEffect = &this->fields.selectEffect;
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    if ( !soundPlayerListViewManager )
      goto LABEL_18;
    EffetData = SoundPlayerListViewManager__getEffetData(
                  soundPlayerListViewManager,
                  (System_String_o *)StringLiteral_18138,
                  v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffetData, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)EffetData,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_selectEffect = (UnityEngine_GameObject_o *)v10;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectEffect, v10, v11, v12, v13, v14, v15, v16);
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive(*p_selectEffect, 0, 0LL);
        GameObjectExtensions__SafeSetParent_27425996(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
        return;
      }
LABEL_18:
      sub_B170D4();
    }
  }
}


void __fastcall SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_40F9D46 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9D46 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    v4 = this->fields.selectEffect;
    if ( !v4 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
    GameObjectExtensions__SafeSetParent_27425996(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
  }
}


void __fastcall SoundPlayerMenu__endPurchaseRequest(
        SoundPlayerMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  SoundPlayerListViewManager_CallbackFunc_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x2
  struct SoundPlayerListViewManager_o *v39; // x8
  const MethodInfo *v40; // x2
  System_Int32_array **Item; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x8
  __int64 v49; // x8
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  Il2CppObject *v52; // x20
  System_String_o *v53; // x0
  System_String_o *v54; // x20
  CommonUI_o *Instance; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Action_o *v60; // x22

  if ( (byte_40F9D4A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_SoundPlayerMenu_OnSelectSound__, v10);
    sub_B16FFC(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, v11);
    sub_B16FFC(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_26, v13);
    sub_B16FFC(&StringLiteral_12232, v14);
    sub_B16FFC(&StringLiteral_20980, v15);
    sub_B16FFC(&StringLiteral_1, v16);
    sub_B16FFC(&StringLiteral_67, v17);
    byte_40F9D4A = 1;
  }
  v18 = sub_B170CC(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, result, method, v3, v4);
  SoundPlayerMenu___c__DisplayClass36_0___ctor((SoundPlayerMenu___c__DisplayClass36_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_17;
  *(_QWORD *)(v18 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    SoundPlayerMenu__detachSelectEffect(this, v25);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v31 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         SoundPlayerListViewManager_CallbackFunc_TypeInfo,
                                                         v27,
                                                         v28,
                                                         v29,
                                                         v30);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      0LL);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v31;
      sub_B16F98(
        (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
        (System_Int32_array **)v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      SoundPlayerListViewManager__SetMode_24871304(soundPlayerListViewManager, 2, v38);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  v39 = this->fields.soundPlayerListViewManager;
  if ( !v39 )
    goto LABEL_17;
  ++v39->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v25);
  Item = (System_Int32_array **)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v40);
  *(_QWORD *)(v18 + 24) = Item;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), Item, v42, v43, v44, v45, v46, v47);
  v48 = *(_QWORD *)(v18 + 24);
  if ( !v48 )
    goto LABEL_17;
  v49 = *(_QWORD *)(v48 + 112);
  if ( !v49 )
    goto LABEL_17;
  v50 = *(System_String_o **)(v49 + 32);
  if ( !v50 )
    goto LABEL_17;
  v51 = System_String__Replace_43750968(
          v50,
          (System_String_o *)StringLiteral_67,
          (System_String_o *)StringLiteral_1,
          0LL);
  if ( !v51 )
    goto LABEL_17;
  v52 = (Il2CppObject *)System_String__Replace_43750968(
                          v51,
                          (System_String_o *)StringLiteral_26,
                          (System_String_o *)StringLiteral_1,
                          0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12232, 0LL);
  v54 = System_String__Format(v53, v52, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v18,
    Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1,
    v54,
    v60,
    -1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0LL,
    0LL);
}


SoundPlayerListViewItem_o *__fastcall SoundPlayerMenu__getItem(
        SoundPlayerMenu_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0

  if ( (idx & 0x80000000) != 0 )
    return 0LL;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    sub_B170D4();
  return SoundPlayerListViewManager__GetItem(soundPlayerListViewManager, idx, method);
}


System_String_o *__fastcall SoundPlayerMenu__getPlaySoundName(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  return this->fields.playSoundName;
}


void __fastcall SoundPlayerMenu__hideMenu(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    sub_B170D4();
  SoundPlayerListViewManager__releaseSoundPlayerEffect(soundPlayerListViewManager, method);
  SoundPlayerMenu__releaseSelectEffect(this, v4);
  SoundPlayerMenu__inputNewList(this, v5);
  SoundPlayerMenu__Init(this, v6);
}


void __fastcall SoundPlayerMenu__inputNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  signed __int64 size; // x20
  System_String_array *v10; // x21
  unsigned __int64 v11; // x24
  BattleServantConfConponent_o *m_Items; // x22
  struct System_Collections_Generic_List_int__o *v13; // x23
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x23
  System_String_o *v23; // x19
  SoundPlayerMenu_c *v24; // x8
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F9D40 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B16FFC(&SoundPlayerMenu_TypeInfo, v5);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_698, v7);
    byte_40F9D40 = 1;
  }
  v25 = 0;
  isNewList = this->fields.isNewList;
  if ( !isNewList )
LABEL_19:
    sub_B170D4();
  size = isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    v10 = (System_String_array *)sub_B17014(string___TypeInfo, (unsigned int)size, v2);
    v11 = 0LL;
    m_Items = (BattleServantConfConponent_o *)v10->m_Items;
    do
    {
      v13 = this->fields.isNewList;
      if ( !v13 )
        goto LABEL_19;
      if ( v11 >= (unsigned int)v13->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v25 = v13->fields._items->m_Items[v11 + 1];
      v14 = System_Int32__ToString((int32_t)&v25, 0LL);
      if ( !v10 )
        goto LABEL_19;
      v22 = (System_Int32_array **)v14;
      if ( v14 )
      {
        v14 = (System_String_o *)sub_B170BC(v14, v10->obj.klass->_1.element_class);
        if ( !v14 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v11 >= v10->max_length )
      {
        sub_B17100(v14, v15, v16);
        sub_B170A0();
      }
      m_Items->klass = (BattleServantConfConponent_c *)v22;
      sub_B16F98(m_Items, v22, v16, v17, v18, v19, v20, v21);
      ++v11;
      m_Items = (BattleServantConfConponent_o *)((char *)m_Items + 8);
    }
    while ( (__int64)v11 < size );
    v23 = System_String__Join((System_String_o *)StringLiteral_698, v10, 0LL);
    v24 = SoundPlayerMenu_TypeInfo;
    if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v24 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v24->static_fields->SOUND_PLAYER_NEW_KEY, v23, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall SoundPlayerMenu__open(
        SoundPlayerMenu_o *this,
        System_Action_o *opened_act,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x20
  const MethodInfo *v35; // x2

  if ( (byte_40F9D41 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, opened_act);
    sub_B16FFC(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, v8);
    sub_B16FFC(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, v9);
    byte_40F9D41 = 1;
  }
  v10 = sub_B170CC(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, opened_act, callback, method, v4);
  SoundPlayerMenu___c__DisplayClass27_0___ctor((SoundPlayerMenu___c__DisplayClass27_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = opened_act;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)opened_act,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v10 + 32) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)callback, v23, v24, v25, v26, v27, v28);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
  System_Action___ctor(v34, (Il2CppObject *)v10, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0LL);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_B170D4();
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v34, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerMenu__openCheckDlgCallback(
        SoundPlayerMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  System_Int32_array **Item; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  CommonUI_o *Instance; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x0
  __int64 *v35; // x8
  const MethodInfo *v36; // x2
  System_Collections_IEnumerator_o *v37; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  CommonUI_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  TripleButtonDlgComponent_CallbackFunc_o *v50; // x21
  const MethodInfo *v51; // x1
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Action_o *v56; // x21

  if ( (byte_40F9D48 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_SoundPlayerMenu_openCheckDlgCallback__, v9);
    sub_B16FFC(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__, v10);
    sub_B16FFC(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__, v11);
    sub_B16FFC(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, v12);
    byte_40F9D48 = 1;
  }
  v13 = sub_B170CC(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  SoundPlayerMenu___c__DisplayClass34_0___ctor((SoundPlayerMenu___c__DisplayClass34_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  Item = (System_Int32_array **)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v20);
  *(_QWORD *)(v13 + 16) = Item;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), Item, v22, v23, v24, v25, v26, v27);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v28);
      SoundPlayerMenu__detachSelectEffect(this, v51);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v52, v53, v54, v55);
      v35 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_11:
      v56 = v34;
      System_Action___ctor(v34, (Il2CppObject *)v13, *v35, 0LL);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg(Instance, v56, 0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v28);
      v37 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v13 + 16), v36);
      started = UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v37, 0LL);
      this->fields.retTrialListening = started;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.retTrialListening,
        (System_Int32_array **)started,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      v45 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v50 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                         TripleButtonDlgComponent_CallbackFunc_TypeInfo,
                                                         v46,
                                                         v47,
                                                         v48,
                                                         v49);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v50,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0LL);
      if ( v45 )
      {
        CommonUI__setCallbackTripleButtonDlg(v45, v50, 0LL);
        return;
      }
      goto LABEL_14;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v28);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
      v35 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
      goto LABEL_11;
  }
}


void __fastcall SoundPlayerMenu__openEvent(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *maskColl; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_40F9D4B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, item);
    sub_B16FFC(&Method_SoundPlayerMenu__openEvent_b__37_0__, v5);
    byte_40F9D4B = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0LL),
        v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0LL),
        !item) )
  {
    sub_B170D4();
  }
  SoundPlayerListViewItem__startOpenAnim(item, v11, v12);
}


void __fastcall SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_selectEffect; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9D47 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9D47 = 1;
  }
  selectEffect = this->fields.selectEffect;
  p_selectEffect = (BattleServantConfConponent_o *)&this->fields.selectEffect;
  v4 = (UnityEngine_Object_o *)selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_selectEffect->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_selectEffect->klass = 0LL;
    sub_B16F98(p_selectEffect, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SoundPlayerMenu__remove_callbackFunc(
        SoundPlayerMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40F9D3C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F9D3C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_B173C8(v8);
  SoundPlayerMenu__releaseSelectEffect(v11, v12);
}


void __fastcall SoundPlayerMenu__resetPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40F9D3E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F9D3E = 1;
  }
  this->fields.playSoundIdx = -1;
  v9 = (System_Int32_array **)StringLiteral_1;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.playSoundName, v9, v2, v3, v4, v5, v6, v7);
}


void __fastcall SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v7; // x0
  UILabel_o *canPlaySoundCnt; // x20
  System_String_o *v9; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v11; // x21
  __int64 v12; // x0
  struct SoundPlayerListViewManager_o *v13; // x8
  Il2CppObject *v14; // x19
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9D49 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_12229, v4);
    sub_B16FFC(&StringLiteral_12230, v5);
    byte_40F9D49 = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12229, 0LL);
  if ( !canPlaySoundStr )
    goto LABEL_11;
  UILabel__set_text(canPlaySoundStr, v7, 0LL);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12230, 0LL);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_11;
  v11 = v9;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &canPlaySoundNum);
  v13 = this->fields.soundPlayerListViewManager;
  if ( !v13
    || (v14 = (Il2CppObject *)v12,
        playSoundMax = v13->fields.playSoundMax,
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playSoundMax),
        v16 = System_String__Format_43739268(v11, v14, v15, 0LL),
        !canPlaySoundCnt) )
  {
LABEL_11:
    sub_B170D4();
  }
  UILabel__set_text(canPlaySoundCnt, v16, 0LL);
}


void __fastcall SoundPlayerMenu__stopTrialListening(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Coroutine_o *retTrialListening; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  System_Collections_IEnumerator_o *v13; // x1
  SoundManager_c *v14; // x0
  BattleServantConfConponent_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *klass; // x20
  System_Int32_array **v25; // x1

  if ( (byte_40F9D4D & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F9D4D = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_34804984((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0LL);
    this->fields.retTrialListening = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.retTrialListening, 0LL, v6, v7, v8, v9, v10, v11);
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( BgmManager__get_IsBusy(0LL) )
    {
      v13 = SoundPlayerMenu__busyWaitStopBgm(this, v12);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
    }
    else
    {
      v14 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__stopBgm((const MethodInfo *)v14);
      backupBgmName = this->fields.backupBgmName;
      p_backupBgmName = (BattleServantConfConponent_o *)&this->fields.backupBgmName;
      if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
      {
        klass = (System_String_o *)p_backupBgmName->klass;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm(klass, v17);
      }
      v25 = (System_Int32_array **)StringLiteral_1;
      p_backupBgmName->klass = (BattleServantConfConponent_c *)StringLiteral_1;
      sub_B16F98(p_backupBgmName, v25, v18, v19, v20, v21, v22, v23);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F9D4C & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerMenu__trialListening_d__39_TypeInfo, item);
    byte_40F9D4C = 1;
  }
  v7 = sub_B170CC(SoundPlayerMenu__trialListening_d__39_TypeInfo, item, method, v3, v4);
  SoundPlayerMenu__trialListening_d__39___ctor((SoundPlayerMenu__trialListening_d__39_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = item;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)item, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A2B & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerMenu___c_TypeInfo, v1);
    byte_40F7A2B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SoundPlayerMenu___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SoundPlayerMenu___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_40F7A2D & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F7A2D = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


bool __fastcall SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_40F7A2C & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F7A2C = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass27_0___ctor(
        SoundPlayerMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass27_0___open_b__0(
        SoundPlayerMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SoundPlayerMenu_o *_4__this; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SoundPlayerMenu_o *v14; // x20
  System_Action_o *v15; // x21
  System_Int32_array **opened_act; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct SoundPlayerMenu_o *v23; // x0
  System_Int32_array **callback; // x1
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct SoundPlayerMenu_o *v27; // x8
  UnityEngine_Component_o *soundPlayerListViewManager; // x0
  UnityEngine_GameObject_o *v29; // x0
  struct SoundPlayerMenu_o *v30; // x8
  SoundPlayerListViewManager_o *v31; // x0
  struct SoundPlayerMenu_o *v32; // x8
  SoundPlayerListViewManager_o *v33; // x0
  SoundPlayerMenu_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct SoundPlayerMenu_o *v39; // x8
  struct SoundPlayerMenu_o *v40; // x8
  UnityEngine_Object_o *baseWindow; // x20
  struct SoundPlayerMenu_o *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  struct SoundPlayerMenu_o *v45; // x8
  SoundPlayerListViewManager_o *v46; // x0

  if ( (byte_40F7A2E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SoundPlayerMenu_EndOpen__, v5);
    byte_40F7A2E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_36;
  SoundPlayerMenu__createSelectEffect(_4__this, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_36;
  if ( v14->fields.state )
  {
    v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(v15, (Il2CppObject *)v14, Method_SoundPlayerMenu_EndOpen__, 0LL);
  }
  else
  {
    opened_act = (System_Int32_array **)this->fields.opened_act;
    v14->fields.openedAct = (struct System_Action_o *)opened_act;
    sub_B16F98((BattleServantConfConponent_o *)&v14->fields.openedAct, opened_act, v8, v9, v10, v11, v12, v13);
    v23 = this->fields.__4__this;
    if ( !v23 )
      goto LABEL_36;
    callback = (System_Int32_array **)this->fields.callback;
    v23->fields.callbackFunc = (struct System_Action_o *)callback;
    sub_B16F98((BattleServantConfConponent_o *)&v23->fields.callbackFunc, callback, v17, v18, v19, v20, v21, v22);
    v25 = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( !v25 )
      goto LABEL_36;
    gameObject = UnityEngine_Component__get_gameObject(v25, 0LL);
    if ( !gameObject )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v27 = this->fields.__4__this;
    if ( !v27 )
      goto LABEL_36;
    soundPlayerListViewManager = (UnityEngine_Component_o *)v27->fields.soundPlayerListViewManager;
    if ( !soundPlayerListViewManager )
      goto LABEL_36;
    v29 = UnityEngine_Component__get_gameObject(soundPlayerListViewManager, 0LL);
    if ( !v29 )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(v29, 1, 0LL);
    v30 = this->fields.__4__this;
    if ( !v30 )
      goto LABEL_36;
    v31 = v30->fields.soundPlayerListViewManager;
    if ( !v31 )
      goto LABEL_36;
    SoundPlayerListViewManager__CreateList(v31, 0LL);
    v32 = this->fields.__4__this;
    if ( !v32 )
      goto LABEL_36;
    v33 = v32->fields.soundPlayerListViewManager;
    if ( !v33 )
      goto LABEL_36;
    SoundPlayerListViewManager__SetMode_24871304(v33, 1, 0LL);
    v34 = this->fields.__4__this;
    if ( !v34 )
      goto LABEL_36;
    SoundPlayerMenu__setCanPlaySoundDisp(v34, 0LL);
    v39 = this->fields.__4__this;
    if ( !v39 )
      goto LABEL_36;
    v39->fields.state = 1;
    v14 = this->fields.__4__this;
    v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
    System_Action___ctor(v15, (Il2CppObject *)v14, Method_SoundPlayerMenu_EndOpen__, 0LL);
    if ( !v14 )
      goto LABEL_36;
  }
  BaseMenu__Open((BaseMenu_o *)v14, v15, 0LL);
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_36;
  baseWindow = (UnityEngine_Object_o *)v40->fields.baseWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) )
    goto LABEL_33;
  v42 = this->fields.__4__this;
  if ( !v42 || (v43 = v42->fields.baseWindow) == 0LL )
LABEL_36:
    sub_B170D4();
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v43,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_36;
    LODWORD(Component_srcLineSprite->fields.mcLineSprite) = 1045220557;
    LODWORD(Component_srcLineSprite->fields.mFSM) = 2;
  }
LABEL_33:
  v45 = this->fields.__4__this;
  if ( !v45 )
    goto LABEL_36;
  v46 = v45->fields.soundPlayerListViewManager;
  if ( !v46 )
    goto LABEL_36;
  SoundPlayerListViewManager__setUiApplyAllItem(v46, v45->fields.isNewList, v45->fields.playSoundName, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___ctor(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__0(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct SoundPlayerListViewItem_o *item; // x8
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct SoundPlayerMenu_o *v16; // x8

  if ( (byte_40F7A2F & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_PurchaseRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_SoundPlayerMenu_endPurchaseRequest__, v8);
    sub_B16FFC(&StringLiteral_21129, v9);
    byte_40F7A2F = 1;
  }
  item = this->fields.item;
  if ( !item )
    goto LABEL_14;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_14;
  shopId = bgmEntity->fields.shopId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( shopId )
  {
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(v14, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v14,
                                                               (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v16 = this->fields.__4__this;
    if ( v16 && Request_WarBoardWallAttackRequest )
    {
      PurchaseRequest__beginRequest(Request_WarBoardWallAttackRequest, shopId, v16->fields.PURCHASE_NUM, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
  if ( !_4__this )
    goto LABEL_14;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)_4__this, (System_String_o *)StringLiteral_21129, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct SoundPlayerMenu_o *_4__this; // x20
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v9; // x21
  __int64 v10; // x9
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40F7A30 & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SoundPlayerMenu_OnSelectSound__, v6);
    byte_40F7A30 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (soundPlayerListViewManager = _4__this->fields.soundPlayerListViewManager,
        v9 = sub_B170CC(SoundPlayerListViewManager_CallbackFunc_TypeInfo, method, v2, v3, v4),
        v10 = *(_QWORD *)Method_SoundPlayerMenu_OnSelectSound__,
        *(_QWORD *)(v9 + 40) = Method_SoundPlayerMenu_OnSelectSound__,
        *(_QWORD *)(v9 + 16) = v10,
        *(_QWORD *)(v9 + 32) = _4__this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v9 + 32),
          (System_Int32_array **)_4__this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        !soundPlayerListViewManager) )
  {
    sub_B170D4();
  }
  SoundPlayerListViewManager__SetMode(
    soundPlayerListViewManager,
    2,
    (SoundPlayerListViewManager_CallbackFunc_o *)v9,
    0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass36_0___ctor(
        SoundPlayerMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass36_0___endPurchaseRequest_b__0(
        SoundPlayerMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu_o *_4__this; // x0
  SoundPlayerMenu_o *v4; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (SoundPlayerMenu__detachSelectEffect(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  SoundPlayerMenu__openEvent(v4, this->fields.item, 0LL);
}


void __fastcall SoundPlayerMenu__busyWaitStopBgm_d__41___ctor(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__MoveNext(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  SoundPlayerMenu___c_c *v13; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v16; // x21
  struct SoundPlayerMenu___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_WaitUntil_o *v24; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  BattleServantConfConponent_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_o *klass; // x20
  System_Int32_array **v43; // x1

  if ( (byte_40F7A31 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, v8);
    sub_B16FFC(&SoundPlayerMenu___c_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40F7A31 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopBgm(0LL);
    if ( !_4__this )
      sub_B170D4();
    backupBgmName = _4__this->fields.backupBgmName;
    p_backupBgmName = (BattleServantConfConponent_o *)&_4__this->fields.backupBgmName;
    if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
    {
      klass = (System_String_o *)p_backupBgmName->klass;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm(klass, 0LL);
    }
    v43 = (System_Int32_array **)StringLiteral_1;
    p_backupBgmName->klass = (BattleServantConfConponent_c *)StringLiteral_1;
    sub_B16F98(p_backupBgmName, v43, v36, v37, v38, v39, v40, v41);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v13 = SoundPlayerMenu___c_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v13 = SoundPlayerMenu___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__41_0 = static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, method, v2, v3, v4);
    System_Func_bool____ctor(
      _9__41_0,
      v16,
      Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v17 = SoundPlayerMenu___c_TypeInfo->static_fields;
    v17->__9__41_0 = _9__41_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v17->__9__41_0,
      (System_Int32_array **)_9__41_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, method, v2, v3, v4);
  UnityEngine_WaitUntil___ctor(v24, _9__41_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v24;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_IEnumerator_Reset(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_IEnumerator_get_Current(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__System_IDisposable_Dispose(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SoundPlayerMenu__trialListening_d__39___ctor(
        SoundPlayerMenu__trialListening_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SoundPlayerMenu__trialListening_d__39__MoveNext(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct SoundPlayerMenu_o *_4__this; // x20
  System_Int32_array **BgmName; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **playSoundName; // x1
  SoundPlayerListViewItem_o *item; // x0
  System_String_o *BgmCueName; // x0
  float LISTENING_TIME; // s8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  UnityEngine_WaitForSeconds_o *v33; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  bool result; // w0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  SoundPlayerMenu___c_c *v46; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v49; // x21
  struct SoundPlayerMenu___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_WaitUntil_o *v57; // x21
  Il2CppObject **v58; // x19
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_o *backupBgmName; // x19

  if ( (byte_40F7A32 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v3);
    sub_B16FFC(&System_Func_bool__TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&Method_SoundPlayerMenu___c__trialListening_b__39_0__, v6);
    sub_B16FFC(&SoundPlayerMenu___c_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v9);
    byte_40F7A32 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      BgmName = (System_Int32_array **)SoundManager__getBgmName(0LL);
      if ( _4__this )
      {
        _4__this->fields.backupBgmName = (struct System_String_o *)BgmName;
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.backupBgmName,
          BgmName,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0LL) )
        {
          playSoundName = (System_Int32_array **)_4__this->fields.playSoundName;
          _4__this->fields.backupBgmName = (struct System_String_o *)playSoundName;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields.backupBgmName,
            playSoundName,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopBgm(0LL);
        item = this->fields.item;
        if ( item )
        {
          BgmCueName = SoundPlayerListViewItem__getBgmCueName(item, 0LL);
          SoundManager__playBgm(BgmCueName, 0LL);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v33 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v29, v30, v31, v32);
          UnityEngine_WaitForSeconds___ctor(v33, LISTENING_TIME, 0LL);
          this->fields.__2__current = (Il2CppObject *)v33;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)p__2__current,
            (System_Int32_array **)v33,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_42:
      sub_B170D4();
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !BgmManager__get_IsBusy(0LL) )
  {
LABEL_31:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopBgm(0LL);
    if ( !_4__this )
      goto LABEL_42;
    if ( !System_String__IsNullOrEmpty(_4__this->fields.backupBgmName, 0LL) )
    {
      backupBgmName = _4__this->fields.backupBgmName;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm(backupBgmName, 0LL);
    }
    _4__this->fields.retTrialListening = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.retTrialListening, 0LL, v65, v66, v67, v68, v69, v70);
    return 0;
  }
  v46 = SoundPlayerMenu___c_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v46 = SoundPlayerMenu___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__39_0 = static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v42, v43, v44, v45);
    System_Func_bool____ctor(
      _9__39_0,
      v49,
      Method_SoundPlayerMenu___c__trialListening_b__39_0__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v50 = SoundPlayerMenu___c_TypeInfo->static_fields;
    v50->__9__39_0 = _9__39_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v50->__9__39_0,
      (System_Int32_array **)_9__39_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  v57 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v42, v43, v44, v45);
  UnityEngine_WaitUntil___ctor(v57, _9__39_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v57;
  v58 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v58, (System_Int32_array **)v57, v59, v60, v61, v62, v63, v64);
  *((_DWORD *)v58 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall SoundPlayerMenu__trialListening_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SoundPlayerMenu__trialListening_d__39__System_Collections_IEnumerator_Reset(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall SoundPlayerMenu__trialListening_d__39__System_Collections_IEnumerator_get_Current(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SoundPlayerMenu__trialListening_d__39__System_IDisposable_Dispose(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  ;
}