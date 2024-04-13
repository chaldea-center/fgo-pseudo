void __fastcall SoundPlayerMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E79C2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerMenu_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_13082/*"SoundPlayerNewKey"*/, v8, v9, v10);
    byte_42E79C2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SoundPlayerMenu_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_13082/*"SoundPlayerNewKey"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_13082/*"SoundPlayerNewKey"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Int32_array **v18; // x1
  System_Collections_Generic_List_int__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E79C1 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42E79C1 = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playSoundName, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.isNewList = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isNewList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42E79B3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SoundPlayerMenu_OnSelectSound__, v5, v6, v7);
    byte_42E79B3 = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v9 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B5D694(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    0LL);
  if ( !soundPlayerListViewManager )
    sub_B5D69C(v10, v11);
  soundPlayerListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SoundPlayerListViewManager__SetMode_23438584(soundPlayerListViewManager, 2, v18);
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
  __int64 v16; // x1
  ListViewManager_o *soundPlayerListViewManager; // x0

  if ( (byte_42E79AE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E79AE = 1;
  }
  this->fields.retTrialListening = 0LL;
  this->fields.state = 0;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.retTrialListening, 0LL, v2, v3, v4, v5, v6, v7);
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.backupBgmName, v9, v10, v11, v12, v13, v14, v15);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0LL),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0LL)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0LL)) == 0LL )
  {
    sub_B5D69C(soundPlayerListViewManager, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerMenu__OnSelectSound(
        SoundPlayerMenu_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  SoundPlayerListViewItem_o *v22; // x20
  int32_t playSoundIdx; // w22
  SoundPlayerListViewItem_o *isNewList; // x0
  const MethodInfo *v25; // x1
  SoundManager_c *v26; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  struct BgmEntity_o *bgmEntity; // x8
  int32_t id; // w21
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct BgmEntity_o *v39; // x8
  struct System_String_o **p_fileName; // x8
  struct System_String_o *v41; // x1
  const MethodInfo *v42; // x1
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x2

  if ( (byte_42E79B4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, kind, index, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v10, v11, v12);
    sub_B5D5C4(&SoundManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SoundPlayerMenu_OnSelectSound__, v16, v17, v18);
    byte_42E79B4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Item = SoundPlayerMenu__getItem(this, index, *(const MethodInfo **)&index);
    if ( !Item )
      goto LABEL_34;
    v22 = Item;
    if ( !Item->fields.bgmEntity )
      goto LABEL_34;
    this->fields.selectIndex = index;
    if ( kind == 2 )
    {
      SoundPlayerMenu__attachSelectEffect(this, v20);
      SoundPlayerMenu__createOpenDlg(this, v22, v28);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, v29);
    }
    else if ( kind == 1 )
    {
      playSoundIdx = this->fields.playSoundIdx;
      this->fields.playSoundIdx = index;
      isNewList = SoundPlayerMenu__getItem(this, playSoundIdx, v21);
      if ( isNewList )
      {
        isNewList->fields._isPlaySound_k__BackingField = 0;
        SoundPlayerListViewItem__applyUi(isNewList, v25);
      }
      if ( this->fields.playSoundIdx == playSoundIdx )
      {
        v26 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopBgm((const MethodInfo *)v26);
        SoundPlayerMenu__resetPlaySoundData(this, v27);
      }
      else
      {
        bgmEntity = v22->fields.bgmEntity;
        if ( !bgmEntity )
          goto LABEL_36;
        id = bgmEntity->fields.id;
        *(_WORD *)&v22->fields._isPlaySound_k__BackingField = 1;
        SoundPlayerListViewItem__attachPlayEffect(v22, v25);
        SoundPlayerListViewItem__applyUi(v22, v32);
        isNewList = (SoundPlayerListViewItem_o *)this->fields.isNewList;
        if ( !isNewList )
          goto LABEL_36;
        if ( !System_Collections_Generic_List_int___Contains(
                (System_Collections_Generic_List_int__o *)isNewList,
                id,
                (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (SoundPlayerListViewItem_o *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)isNewList,
            id,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        if ( (byte_42E798D & 1) == 0 )
        {
          sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)v25, (_DWORD)v33, v34);
          byte_42E798D = 1;
        }
        v39 = v22->fields.bgmEntity;
        if ( v39 )
          p_fileName = &v39->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        v41 = *p_fileName;
        this->fields.playSoundName = *p_fileName;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.playSoundName,
          (System_Int32_array **)v41,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        playSoundName = this->fields.playSoundName;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm(playSoundName, v42);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v45 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B5D694(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v45,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        0LL);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v45;
        sub_B5D560(
          (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
          (System_Int32_array **)v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        SoundPlayerListViewManager__SetMode_23438584(soundPlayerListViewManager, 2, v52);
        return;
      }
LABEL_36:
      sub_B5D69C(isNewList, v25);
    }
  }
}


void __fastcall SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_B5D69C(0LL, enable);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_42E79C3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SoundPlayerMenu_OnSelectSound__, v5, v6, v7);
    byte_42E79C3 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0LL),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v10 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B5D694(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          0LL),
        !soundPlayerListViewManager) )
  {
    sub_B5D69C(maskColl, method);
  }
  soundPlayerListViewManager->fields.callbackFunc = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SoundPlayerListViewManager__SetMode_23438584(soundPlayerListViewManager, 2, v17);
}


void __fastcall SoundPlayerMenu__add_callbackFunc(
        SoundPlayerMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SoundPlayerMenu_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E79AC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E79AC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (SoundPlayerMenu_o *)sub_B5D990(v9);
  SoundPlayerMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall SoundPlayerMenu__analyzeNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  SoundPlayerMenu_c *v17; // x0
  System_String_o *String; // x20
  __int64 v19; // x1
  __int64 isNewList; // x0
  __int64 v21; // x8
  __int64 v22; // x20
  unsigned __int64 v23; // x21
  signed __int64 v24; // x22
  __int64 v25; // x0

  if ( (byte_42E79B0 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v8, v9, v10);
    sub_B5D5C4(&SoundPlayerMenu_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E79B0 = 1;
  }
  v17 = SoundPlayerMenu_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
    v17 = SoundPlayerMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v17->static_fields->SOUND_PLAYER_NEW_KEY,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    isNewList = (__int64)this->fields.isNewList;
    if ( !isNewList )
      goto LABEL_19;
    System_Collections_Generic_List_int___Clear(
      (System_Collections_Generic_List_int__o *)isNewList,
      (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
    isNewList = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !isNewList )
      goto LABEL_19;
    v19 = isNewList;
    if ( !*(_DWORD *)(isNewList + 24) )
    {
LABEL_17:
      v25 = sub_B5D6C8(isNewList);
      sub_B5D668(v25, 0LL);
    }
    *(_WORD *)(isNewList + 32) = 44;
    if ( !String || (isNewList = (__int64)System_String__Split(String, (System_Char_array *)isNewList, 0LL)) == 0 )
LABEL_19:
      sub_B5D69C(isNewList, v19);
    v21 = *(_QWORD *)(isNewList + 24);
    v22 = isNewList;
    if ( (int)v21 >= 1 )
    {
      v23 = 0LL;
      v24 = (int)v21;
      while ( 1 )
      {
        isNewList = System_Int32__Parse(*(System_String_o **)(v22 + 32 + 8 * v23), 0LL);
        if ( !this->fields.isNewList )
          goto LABEL_19;
        System_Collections_Generic_List_int___Add(
          this->fields.isNewList,
          isNewList,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( (__int64)++v23 >= v24 )
          return;
        if ( v23 >= *(unsigned int *)(v22 + 24) )
          goto LABEL_17;
      }
    }
  }
}


void __fastcall SoundPlayerMenu__attachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *selectEffect; // x20
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *Item; // x0
  __int64 v14; // x1
  void *monitor; // x8
  __int64 v16; // x11
  UnityEngine_Component_o **v17; // x20

  if ( (byte_42E79B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundPlayerListViewObject_TypeInfo, v8, v9, v10);
    byte_42E79B6 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    Item = (UnityEngine_GameObject_o *)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v12);
    if ( !Item )
      goto LABEL_24;
    monitor = Item[4].monitor;
    if ( monitor
      && (v16 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)monitor + 300LL) >= (unsigned int)v16) )
    {
      if ( *(SoundPlayerListViewObject_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * v16 - 8) == SoundPlayerListViewObject_TypeInfo )
        v17 = (UnityEngine_Component_o **)Item[4].monitor;
      else
        v17 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
    {
      Item = this->fields.selectEffect;
      if ( Item )
      {
        UnityEngine_GameObject__SetActive(Item, 1, 0LL);
        if ( v17 )
        {
          GameObjectExtensions__SafeSetParent(this->fields.selectEffect, v17[16], 0LL);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0LL);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0LL);
          Item = this->fields.selectEffect;
          if ( Item )
          {
            Item = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 Item,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0LL);
              return;
            }
          }
        }
      }
LABEL_24:
      sub_B5D69C(Item, v14);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__busyWaitStopBgm(
        SoundPlayerMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E79BF & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E79BF = 1;
  }
  v5 = sub_B5D694(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
  SoundPlayerMenu__busyWaitStopBgm_d__41___ctor((SoundPlayerMenu__busyWaitStopBgm_d__41_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SoundPlayerMenu__createOpenDlg(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SoundPlayerListViewItem_o *v4; // x20
  SoundPlayerMenu_o *v5; // x23
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  struct BgmEntity_o *bgmEntity; // x8
  Il2CppObject *v70; // x21
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  struct BgmEntity_o *v73; // x20
  System_String_o *v74; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  ItemMaster_o *v76; // x24
  System_String_o *v77; // x21
  UserItemMaster_o *v78; // x25
  WarEntity_o *v79; // x8
  struct System_String_o *name; // x9
  System_String_c *klass; // x9
  System_Int32_array **v82; // x19
  char v83; // w20
  __int64 v84; // x22
  System_String_o *v85; // x23
  struct System_String_o *v86; // x8
  unsigned __int64 v87; // x28
  SoundPlayerMenu_o *v88; // x26
  struct System_String_o *v89; // x8
  int enterTransform; // w8
  __int64 v91; // x8
  __int64 v92; // x8
  Il2CppObject *v93; // x27
  Il2CppObject *CountText; // x28
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  System_String_o *v98; // x0
  bool v99; // w24
  System_Int32_array **v100; // x27
  System_Int32_array **v101; // x25
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  SoundPlayerMenu_o *v108; // x26
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_String_o *v133; // x21
  System_String_o *v134; // x22
  System_String_o *v135; // x23
  System_String_o *v136; // x25
  CommonUI_o *Instance; // x26
  TripleButtonDlgComponent_CallbackFunc_o *v138; // x27
  __int64 v139; // x0
  __int64 v140; // x0
  SoundPlayerMenu_o *v141; // [xsp+60h] [xbp-80h]
  System_String_o *title; // [xsp+68h] [xbp-78h]
  Il2CppObject *object; // [xsp+70h] [xbp-70h]
  __int64 v144; // [xsp+78h] [xbp-68h]
  UserItemEntity_o *v145; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  v4 = item;
  v5 = this;
  if ( (byte_42E79C0 & 1) == 0 )
  {
    sub_B5D5C4(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&Method_SoundPlayerMenu_openCheckDlgCallback__, v30, v31, v32);
    sub_B5D5C4(&string___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12428/*"SOUNDPLAYER_OPEN_CHECK"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12426/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_12424/*"SOUNDPLAYER_DIALOG_OK"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12427/*"SOUNDPLAYER_ITEM_DISP"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12422/*"SOUNDPLAYER_DIALOG_CANCEL"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_1/*""*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_68/*"\r"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_12425/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12433/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, v63, v64, v65);
    this = (SoundPlayerMenu_o *)sub_B5D5C4(&StringLiteral_12423/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, v66, v67, v68);
    byte_42E79C0 = 1;
  }
  v145 = 0LL;
  entity = 0LL;
  if ( !v4 )
    goto LABEL_58;
  bgmEntity = v4->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_58;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_58;
  this = (SoundPlayerMenu_o *)System_String__Replace_44585024(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_68/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0LL);
  if ( !this )
    goto LABEL_58;
  v70 = (Il2CppObject *)System_String__Replace_44585024(
                          (System_String_o *)this,
                          (System_String_o *)StringLiteral_26/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12433/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0LL);
  v72 = System_String__Format(v71, v70, 0LL);
  v73 = v4->fields.bgmEntity;
  v74 = v72;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  title = v74;
  v76 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)this,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)this,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v73 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_58;
  v77 = (System_String_o *)StringLiteral_1/*""*/;
  v78 = (UserItemMaster_o *)this;
  object = (Il2CppObject *)v5;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          v73->fields.shopId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    v99 = 0;
    v100 = (System_Int32_array **)v77;
    v85 = v77;
    v82 = (System_Int32_array **)v77;
    goto LABEL_66;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12425/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0LL);
  v79 = entity;
  if ( !entity || (name = entity->fields.name) == 0LL )
LABEL_58:
    sub_B5D69C(this, item);
  klass = name[1].klass;
  v82 = (System_Int32_array **)this;
  if ( (int)klass < 1 )
  {
    v83 = 0;
    v85 = v77;
  }
  else
  {
    v141 = this;
    v144 = (int)klass;
    v83 = 0;
    v84 = 8LL;
    v85 = v77;
    while ( 1 )
    {
      v86 = v79->fields.name;
      if ( !v86 )
        goto LABEL_58;
      v87 = v84 - 8;
      if ( v84 - 8 >= (unsigned __int64)LODWORD(v86[1].klass) )
        goto LABEL_88;
      if ( !v76 )
        goto LABEL_58;
      this = (SoundPlayerMenu_o *)ItemMaster__GetItemData(v76, *((_DWORD *)&v86->klass + v84), 0LL);
      if ( this )
      {
        v88 = this;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (SoundPlayerMenu_o *)NetworkManager__get_UserId(0LL);
        if ( !entity )
          goto LABEL_58;
        v89 = entity->fields.name;
        if ( !v89 )
          goto LABEL_58;
        if ( v87 >= LODWORD(v89[1].klass) )
          goto LABEL_88;
        if ( !v78 )
          goto LABEL_58;
        this = (SoundPlayerMenu_o *)UserItemMaster__TryGetEntity(
                                      v78,
                                      &v145,
                                      (int64_t)this,
                                      *((_DWORD *)&v89->klass + v84),
                                      0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v145 )
            goto LABEL_58;
          item = (SoundPlayerListViewItem_o *)(unsigned int)v145->fields.num;
        }
        else
        {
          this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0LL);
          enterTransform = (int)v88->fields.enterTransform;
          if ( enterTransform == 5 )
          {
            if ( !this )
              goto LABEL_58;
            item = (SoundPlayerListViewItem_o *)LODWORD(this->fields.playSoundName);
          }
          else if ( enterTransform == 22 )
          {
            if ( !this )
              goto LABEL_58;
            item = (SoundPlayerListViewItem_o *)HIDWORD(this->fields.playSoundName);
          }
          else
          {
            item = 0LL;
          }
        }
        if ( !entity )
          goto LABEL_58;
        v91 = *(_QWORD *)&entity->fields.startType;
        if ( !v91 )
          goto LABEL_58;
        if ( v87 >= *(unsigned int *)(v91 + 24) )
          goto LABEL_88;
        if ( (int)item < *(_DWORD *)(v91 + 4 * v84) )
          v83 = 1;
        this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v88->fields.enterTransform, (int32_t)item, 0LL);
        if ( !entity )
          goto LABEL_58;
        v92 = *(_QWORD *)&entity->fields.startType;
        if ( !v92 )
          goto LABEL_58;
        if ( v87 >= *(unsigned int *)(v92 + 24) )
          goto LABEL_88;
        v93 = (Il2CppObject *)this;
        CountText = (Il2CppObject *)ItemType__GetCountText(
                                      (int32_t)v88->fields.enterTransform,
                                      *(_DWORD *)(v92 + 4 * v84),
                                      0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
        v96 = System_String__Format_44573324(v95, &v88->fields.basePanelList->obj, v93, 0LL);
        v85 = System_String__Concat_44577788(v85, v96, 0LL);
        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
        v98 = System_String__Format_44573324(v97, &v88->fields.basePanelList->obj, CountText, 0LL);
        this = (SoundPlayerMenu_o *)System_String__Concat_44577788(v77, v98, 0LL);
        v77 = (System_String_o *)this;
      }
      if ( v84 - 7 >= v144 )
        break;
      v79 = entity;
      ++v84;
      if ( !entity )
        goto LABEL_58;
    }
    v82 = (System_Int32_array **)v141;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v100 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12426/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0LL);
  v99 = v83 & 1;
LABEL_66:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v101 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12428/*"SOUNDPLAYER_OPEN_CHECK"*/, 0LL);
  this = (SoundPlayerMenu_o *)sub_B5D5DC(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_58;
  v108 = this;
  if ( v82 )
  {
    this = (SoundPlayerMenu_o *)sub_B5D684(v82, this->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( !LODWORD(v108->fields.basePanelList) )
    goto LABEL_88;
  v108->fields.baseWindow = (struct UnityEngine_GameObject_o *)v82;
  sub_B5D560((BattleServantConfConponent_o *)&v108->fields.baseWindow, v82, v102, v103, v104, v105, v106, v107);
  if ( v85 )
  {
    this = (SoundPlayerMenu_o *)sub_B5D684(v85, v108->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( LODWORD(v108->fields.basePanelList) <= 1 )
    goto LABEL_88;
  v108->fields.closeTransform = (struct UnityEngine_Transform_o *)v85;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v108->fields.closeTransform,
    (System_Int32_array **)v85,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  if ( v100 )
  {
    this = (SoundPlayerMenu_o *)sub_B5D684(v100, v108->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( LODWORD(v108->fields.basePanelList) <= 2 )
    goto LABEL_88;
  v108->fields.enterTransform = (struct UnityEngine_Transform_o *)v100;
  sub_B5D560((BattleServantConfConponent_o *)&v108->fields.enterTransform, v100, v115, v116, v117, v118, v119, v120);
  if ( v77 )
  {
    this = (SoundPlayerMenu_o *)sub_B5D684(v77, v108->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( LODWORD(v108->fields.basePanelList) <= 3 )
    goto LABEL_88;
  *(_QWORD *)&v108->fields.isBasePosition = v77;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v108->fields.isBasePosition,
    (System_Int32_array **)v77,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  if ( v101 )
  {
    this = (SoundPlayerMenu_o *)sub_B5D684(v101, v108->klass->_1.element_class);
    if ( !this )
    {
LABEL_89:
      v140 = sub_B5D6BC();
      sub_B5D668(v140, 0LL);
    }
  }
  if ( LODWORD(v108->fields.basePanelList) <= 4 )
  {
LABEL_88:
    v139 = sub_B5D6C8(this);
    sub_B5D668(v139, 0LL);
  }
  *(_QWORD *)&v108->fields.basePosition.fields.y = v101;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v108->fields.basePosition.fields.y,
    v101,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v133 = System_String__Concat_44657912((System_String_array *)v108, 0LL);
  v134 = LocalizationManager__Get((System_String_o *)StringLiteral_12422/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0LL);
  v135 = LocalizationManager__Get((System_String_o *)StringLiteral_12423/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0LL);
  v136 = LocalizationManager__Get((System_String_o *)StringLiteral_12424/*"SOUNDPLAYER_DIALOG_OK"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v138 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_B5D694(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
  TripleButtonDlgComponent_CallbackFunc___ctor(v138, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0LL);
  if ( !Instance )
    goto LABEL_58;
  CommonUI__OpenTripleButtonDlg(Instance, title, v133, v134, v135, v136, v138, 30, 10, 10, 1, 0, 8, 1, 0, 0, 0, 0, 0LL);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_58;
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v99, 0LL);
}


void __fastcall SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  UnityEngine_GameObject_o *EffetData; // x21
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E79B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18435/*"ef_soundchoice"*/, v8, v9, v10);
    byte_42E79B5 = 1;
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
                  (System_String_o *)StringLiteral_18435/*"ef_soundchoice"*/,
                  v14);
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
      v17 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)EffetData,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)v17;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectEffect, v17, v18, v19, v20, v21, v22, v23);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
        GameObjectExtensions__SafeSetParent_32436524(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
        return;
      }
LABEL_18:
      sub_B5D69C(soundPlayerListViewManager, v13);
    }
  }
}


void __fastcall SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *selectEffect; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42E79B7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E79B7 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    v7 = this->fields.selectEffect;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, 0, 0LL);
    GameObjectExtensions__SafeSetParent_32436524(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
  }
}


void __fastcall SoundPlayerMenu__endPurchaseRequest(
        SoundPlayerMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x19
  System_String_o *v40; // x0
  const MethodInfo *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x2
  struct SoundPlayerListViewManager_o *v57; // x8
  const MethodInfo *v58; // x2
  System_Int32_array **Item; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x8
  __int64 v67; // x8
  Il2CppObject *v68; // x20
  System_String_o *v69; // x0
  System_String_o *v70; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v72; // x22

  if ( (byte_42E79BB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SoundPlayerMenu_OnSelectSound__, v15, v16, v17);
    sub_B5D5C4(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, v18, v19, v20);
    sub_B5D5C4(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12432/*"SOUNDPLAYER_SOUND_OPEN"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_68/*"\r"*/, v36, v37, v38);
    byte_42E79BB = 1;
  }
  v39 = sub_B5D694(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
  SoundPlayerMenu___c__DisplayClass36_0___ctor((SoundPlayerMenu___c__DisplayClass36_0_o *)v39, 0LL);
  if ( !v39 )
    goto LABEL_17;
  *(_QWORD *)(v39 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v39 + 16), (System_Int32_array **)this, v42, v43, v44, v45, v46, v47);
  v40 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL);
  if ( ((unsigned __int8)v40 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v41);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v49 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B5D694(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v49,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      0LL);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v49;
      sub_B5D560(
        (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
        (System_Int32_array **)v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      SoundPlayerListViewManager__SetMode_23438584(soundPlayerListViewManager, 2, v56);
      return;
    }
LABEL_17:
    sub_B5D69C(v40, v41);
  }
  v57 = this->fields.soundPlayerListViewManager;
  if ( !v57 )
    goto LABEL_17;
  ++v57->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v41);
  Item = (System_Int32_array **)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v58);
  *(_QWORD *)(v39 + 24) = Item;
  sub_B5D560((BattleServantConfConponent_o *)(v39 + 24), Item, v60, v61, v62, v63, v64, v65);
  v66 = *(_QWORD *)(v39 + 24);
  if ( !v66 )
    goto LABEL_17;
  v67 = *(_QWORD *)(v66 + 112);
  if ( !v67 )
    goto LABEL_17;
  v40 = *(System_String_o **)(v67 + 32);
  if ( !v40 )
    goto LABEL_17;
  v40 = System_String__Replace_44585024(
          v40,
          (System_String_o *)StringLiteral_68/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  if ( !v40 )
    goto LABEL_17;
  v68 = (Il2CppObject *)System_String__Replace_44585024(
                          v40,
                          (System_String_o *)StringLiteral_26/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12432/*"SOUNDPLAYER_SOUND_OPEN"*/, 0LL);
  v70 = System_String__Format(v69, v68, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v72 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v72,
    (Il2CppObject *)v39,
    Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v70,
    v72,
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
    sub_B5D69C(0LL, idx);
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
    sub_B5D69C(0LL, method);
  SoundPlayerListViewManager__releaseSoundPlayerEffect(soundPlayerListViewManager, method);
  SoundPlayerMenu__releaseSelectEffect(this, v4);
  SoundPlayerMenu__inputNewList(this, v5);
  SoundPlayerMenu__Init(this, v6);
}


void __fastcall SoundPlayerMenu__inputNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SoundPlayerMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  signed __int64 size; // x20
  System_String_array *v19; // x21
  unsigned __int64 v20; // x24
  BattleServantConfConponent_o *p_baseWindow; // x22
  struct System_Collections_Generic_List_int__o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x23
  System_String_o *v30; // x19
  SoundPlayerMenu_c *v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_42E79B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v5, v6, v7);
    sub_B5D5C4(&SoundPlayerMenu_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&string___TypeInfo, v11, v12, v13);
    this = (SoundPlayerMenu_o *)sub_B5D5C4(&StringLiteral_707/*","*/, v14, v15, v16);
    byte_42E79B1 = 1;
  }
  v34 = 0;
  isNewList = v4->fields.isNewList;
  if ( !isNewList )
LABEL_19:
    sub_B5D69C(this, method);
  size = isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    this = (SoundPlayerMenu_o *)sub_B5D5DC(string___TypeInfo, (unsigned int)size);
    v19 = (System_String_array *)this;
    v20 = 0LL;
    p_baseWindow = (BattleServantConfConponent_o *)&this->fields.baseWindow;
    do
    {
      v22 = v4->fields.isNewList;
      if ( !v22 )
        goto LABEL_19;
      if ( v20 >= (unsigned int)v22->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v34 = v22->fields._items->m_Items[v20 + 1];
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&v34, 0LL);
      if ( !v19 )
        goto LABEL_19;
      v29 = (System_Int32_array **)this;
      if ( this )
      {
        this = (SoundPlayerMenu_o *)sub_B5D684(this, v19->obj.klass->_1.element_class);
        if ( !this )
        {
          v33 = sub_B5D6BC();
          sub_B5D668(v33, 0LL);
        }
      }
      if ( v20 >= v19->max_length )
      {
        v32 = sub_B5D6C8(this);
        sub_B5D668(v32, 0LL);
      }
      p_baseWindow->klass = (BattleServantConfConponent_c *)v29;
      sub_B5D560(p_baseWindow, v29, v23, v24, v25, v26, v27, v28);
      ++v20;
      p_baseWindow = (BattleServantConfConponent_o *)((char *)p_baseWindow + 8);
    }
    while ( (__int64)v20 < size );
    v30 = System_String__Join((System_String_o *)StringLiteral_707/*","*/, v19, 0LL);
    v31 = SoundPlayerMenu_TypeInfo;
    if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v31 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v31->static_fields->SOUND_PLAYER_NEW_KEY, v30, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall SoundPlayerMenu__open(
        SoundPlayerMenu_o *this,
        System_Action_o *opened_act,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  System_Action_o *v35; // x20
  const MethodInfo *v36; // x2

  if ( (byte_42E79B2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)opened_act, (_DWORD)callback, method);
    sub_B5D5C4(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, v7, v8, v9);
    sub_B5D5C4(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, v10, v11, v12);
    byte_42E79B2 = 1;
  }
  v13 = sub_B5D694(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
  SoundPlayerMenu___c__DisplayClass27_0___ctor((SoundPlayerMenu___c__DisplayClass27_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = opened_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)opened_act,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  *(_QWORD *)(v13 + 32) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v13, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0LL);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_B5D69C(v14, v15);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v35, v36);
}


void __fastcall SoundPlayerMenu__openCheckDlgCallback(
        SoundPlayerMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  System_Int32_array **Item; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v43; // x0
  __int64 *v44; // x8
  const MethodInfo *v45; // x2
  System_Collections_IEnumerator_o *v46; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  CommonUI_o *v54; // x20
  TripleButtonDlgComponent_CallbackFunc_o *v55; // x21
  const MethodInfo *v56; // x1
  System_Action_o *v57; // x21

  if ( (byte_42E79B9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SoundPlayerMenu_openCheckDlgCallback__, v12, v13, v14);
    sub_B5D5C4(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__, v15, v16, v17);
    sub_B5D5C4(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__, v18, v19, v20);
    sub_B5D5C4(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, v21, v22, v23);
    byte_42E79B9 = 1;
  }
  v24 = sub_B5D694(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
  SoundPlayerMenu___c__DisplayClass34_0___ctor((SoundPlayerMenu___c__DisplayClass34_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_14;
  *(_QWORD *)(v24 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  Item = (System_Int32_array **)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v33);
  *(_QWORD *)(v24 + 16) = Item;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), Item, v35, v36, v37, v38, v39, v40);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v41);
      SoundPlayerMenu__detachSelectEffect(this, v56);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      v44 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_11:
      v57 = v43;
      System_Action___ctor(v43, (Il2CppObject *)v24, *v44, 0LL);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg(Instance, v57, 0LL);
        return;
      }
LABEL_14:
      sub_B5D69C(v25, v26);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v41);
      v46 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v24 + 16), v45);
      started = UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v46, 0LL);
      this->fields.retTrialListening = started;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.retTrialListening,
        (System_Int32_array **)started,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      v54 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v55 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_B5D694(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v55,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0LL);
      if ( v54 )
      {
        CommonUI__setCallbackTripleButtonDlg(v54, v55, 0LL);
        return;
      }
      goto LABEL_14;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v41);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      v44 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
      goto LABEL_11;
  }
}


void __fastcall SoundPlayerMenu__openEvent(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Collider_o *maskColl; // x0
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_42E79BC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SoundPlayerMenu__openEvent_b__37_0__, v6, v7, v8);
    byte_42E79BC = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0LL),
        v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0LL),
        !item) )
  {
    sub_B5D69C(maskColl, item);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v10, v11);
}


void __fastcall SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_selectEffect; // x19
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E79B8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E79B8 = 1;
  }
  selectEffect = this->fields.selectEffect;
  p_selectEffect = (BattleServantConfConponent_o *)&this->fields.selectEffect;
  v6 = (UnityEngine_Object_o *)selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_selectEffect->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_selectEffect->klass = 0LL;
    sub_B5D560(p_selectEffect, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall SoundPlayerMenu__remove_callbackFunc(
        SoundPlayerMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SoundPlayerMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E79AD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E79AD = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (SoundPlayerMenu_o *)sub_B5D990(v9);
  SoundPlayerMenu__releaseSelectEffect(v12, v13);
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

  if ( (byte_42E79AF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E79AF = 1;
  }
  this->fields.playSoundIdx = -1;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playSoundName, v9, v2, v3, v4, v5, v6, v7);
}


void __fastcall SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *canPlaySoundCnt; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v19; // x21
  struct SoundPlayerListViewManager_o *v20; // x8
  Il2CppObject *v21; // x19
  Il2CppObject *v22; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E79BA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12429/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12430/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, v11, v12, v13);
    byte_42E79BA = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12429/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0LL);
  if ( !canPlaySoundStr )
    goto LABEL_11;
  UILabel__set_text(canPlaySoundStr, v15, 0LL);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12430/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0LL);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_11;
  v19 = v15;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v15 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &canPlaySoundNum);
  v20 = this->fields.soundPlayerListViewManager;
  if ( !v20
    || (v21 = (Il2CppObject *)v15,
        playSoundMax = v20->fields.playSoundMax,
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playSoundMax),
        v15 = System_String__Format_44573324(v19, v21, v22, 0LL),
        !canPlaySoundCnt) )
  {
LABEL_11:
    sub_B5D69C(v15, v16);
  }
  UILabel__set_text(canPlaySoundCnt, v15, 0LL);
}


void __fastcall SoundPlayerMenu__stopTrialListening(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Coroutine_o *retTrialListening; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_Collections_IEnumerator_o *v19; // x1
  SoundManager_c *v20; // x0
  BattleServantConfConponent_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *klass; // x20
  System_Int32_array **v31; // x1

  if ( (byte_42E79BE & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E79BE = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_35615756((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0LL);
    this->fields.retTrialListening = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.retTrialListening, 0LL, v12, v13, v14, v15, v16, v17);
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( BgmManager__get_IsBusy(0LL) )
    {
      v19 = SoundPlayerMenu__busyWaitStopBgm(this, v18);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
    }
    else
    {
      v20 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__stopBgm((const MethodInfo *)v20);
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
        SoundManager__playBgm(klass, v23);
      }
      v31 = (System_Int32_array **)StringLiteral_1/*""*/;
      p_backupBgmName->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
      sub_B5D560(p_backupBgmName, v31, v24, v25, v26, v27, v28, v29);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E79BD & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerMenu__trialListening_d__39_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42E79BD = 1;
  }
  v6 = sub_B5D694(SoundPlayerMenu__trialListening_d__39_TypeInfo);
  SoundPlayerMenu__trialListening_d__39___ctor((SoundPlayerMenu__trialListening_d__39_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = item;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)item, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0

  if ( (byte_42E640B & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerMenu___c_TypeInfo, v1, v2, v3);
    byte_42E640B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SoundPlayerMenu___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SoundPlayerMenu___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E640D & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E640D = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


bool __fastcall SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E640C & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E640C = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  SoundPlayerMenu_o *_4__this; // x0
  struct SoundPlayerMenu_o *v15; // x20
  System_Action_o *v16; // x21
  struct SoundPlayerMenu_o *v17; // x8
  struct SoundPlayerMenu_o *v18; // x8
  struct SoundPlayerMenu_o *v19; // x8
  struct SoundPlayerMenu_o *v20; // x8
  struct SoundPlayerMenu_o *v21; // x8
  UnityEngine_Object_o *baseWindow; // x20
  struct SoundPlayerMenu_o *v23; // x8
  srcLineSprite_o *Component_srcLineSprite; // x20
  struct SoundPlayerMenu_o *v25; // x8

  if ( (byte_42E640E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SoundPlayerMenu_EndOpen__, v11, v12, v13);
    byte_42E640E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_36;
  SoundPlayerMenu__createSelectEffect(_4__this, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_36;
  if ( v15->fields.state )
  {
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)v15, Method_SoundPlayerMenu_EndOpen__, 0LL);
  }
  else
  {
    v15->fields.openedAct = this->fields.opened_act;
    sub_B5D560(&v15->fields.openedAct);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_36;
    _4__this->fields.callbackFunc = this->fields.callback;
    sub_B5D560(&_4__this->fields.callbackFunc);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)v17->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v18 = this->fields.__4__this;
    if ( !v18 )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)v18->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_36;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, 0LL);
    v19 = this->fields.__4__this;
    if ( !v19 )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)v19->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_36;
    SoundPlayerListViewManager__SetMode_23438584((SoundPlayerListViewManager_o *)_4__this, 1, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_36;
    SoundPlayerMenu__setCanPlaySoundDisp(_4__this, 0LL);
    v20 = this->fields.__4__this;
    if ( !v20 )
      goto LABEL_36;
    v20->fields.state = 1;
    v15 = this->fields.__4__this;
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)v15, Method_SoundPlayerMenu_EndOpen__, 0LL);
    if ( !v15 )
      goto LABEL_36;
  }
  BaseMenu__Open((BaseMenu_o *)v15, v16, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_36;
  baseWindow = (UnityEngine_Object_o *)v21->fields.baseWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = (SoundPlayerMenu_o *)UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_33;
  v23 = this->fields.__4__this;
  if ( !v23 || (_4__this = (SoundPlayerMenu_o *)v23->fields.baseWindow) == 0LL )
LABEL_36:
    sub_B5D69C(_4__this, method);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)_4__this,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = (SoundPlayerMenu_o *)UnityEngine_Object__op_Inequality(
                                    (UnityEngine_Object_o *)Component_srcLineSprite,
                                    0LL,
                                    0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_36;
    LODWORD(Component_srcLineSprite->fields.mcLineSprite) = 1045220557;
    LODWORD(Component_srcLineSprite->fields.mFSM) = 2;
  }
LABEL_33:
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_36;
  _4__this = (SoundPlayerMenu_o *)v25->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_36;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v25->fields.isNewList,
    v25->fields.playSoundName,
    0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SoundPlayerMenu___c__DisplayClass34_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct SoundPlayerListViewItem_o *item; // x8
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v21; // x21
  struct SoundPlayerMenu_o *v22; // x8

  v4 = this;
  if ( (byte_42E640F & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_PurchaseRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SoundPlayerMenu_endPurchaseRequest__, v11, v12, v13);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v14, v15, v16);
    byte_42E640F = 1;
  }
  item = v4->fields.item;
  if ( !item )
    goto LABEL_14;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_14;
  shopId = bgmEntity->fields.shopId;
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( shopId )
  {
    v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v21, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                        v21,
                                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v22 = v4->fields.__4__this;
    if ( v22 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v22->fields.PURCHASE_NUM, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(this, method);
  }
  if ( !_4__this )
    goto LABEL_14;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)_4__this, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SoundPlayerMenu___c__DisplayClass34_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SoundPlayerMenu_o *_4__this; // x20
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v10; // x21
  __int64 v11; // x9

  v4 = this;
  if ( (byte_42E6410 & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_B5D5C4(&Method_SoundPlayerMenu_OnSelectSound__, v5, v6, v7);
    byte_42E6410 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (soundPlayerListViewManager = _4__this->fields.soundPlayerListViewManager,
        v10 = sub_B5D694(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        v11 = *(_QWORD *)Method_SoundPlayerMenu_OnSelectSound__,
        *(_QWORD *)(v10 + 40) = Method_SoundPlayerMenu_OnSelectSound__,
        *(_QWORD *)(v10 + 16) = v11,
        *(_QWORD *)(v10 + 32) = _4__this,
        sub_B5D560(v10 + 32),
        !soundPlayerListViewManager) )
  {
    sub_B5D69C(this, method);
  }
  SoundPlayerListViewManager__SetMode(
    soundPlayerListViewManager,
    2,
    (SoundPlayerListViewManager_CallbackFunc_o *)v10,
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

  _4__this = this->fields.__4__this;
  if ( !_4__this || (SoundPlayerMenu__detachSelectEffect(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B5D69C(_4__this, method);
  SoundPlayerMenu__openEvent(_4__this, this->fields.item, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t _1__state; // w8
  SoundPlayerMenu___c_c *v24; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v27; // x21
  struct SoundPlayerMenu___c_StaticFields *v28; // x0
  UnityEngine_WaitUntil_o *v29; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  __int64 v33; // x0
  __int64 v34; // x1
  System_String_o **p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  System_String_o *v37; // x20

  if ( (byte_42E6411 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, v11, v12, v13);
    sub_B5D5C4(&SoundPlayerMenu___c_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E6411 = 1;
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
      sub_B5D69C(v33, v34);
    backupBgmName = _4__this->fields.backupBgmName;
    p_backupBgmName = &_4__this->fields.backupBgmName;
    if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
    {
      v37 = *p_backupBgmName;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm(v37, 0LL);
    }
    *p_backupBgmName = (System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560(p_backupBgmName);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v24 = SoundPlayerMenu___c_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v24 = SoundPlayerMenu___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__41_0 = static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__41_0,
      v27,
      Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v28 = SoundPlayerMenu___c_TypeInfo->static_fields;
    v28->__9__41_0 = _9__41_0;
    sub_B5D560(&v28->__9__41_0);
  }
  v29 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v29, _9__41_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v29;
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int32_t _1__state; // w8
  struct SoundPlayerMenu_o *_4__this; // x20
  SoundPlayerListViewItem_o *BgmName; // x0
  __int64 v29; // x1
  System_String_o *BgmCueName; // x0
  float LISTENING_TIME; // s8
  UnityEngine_WaitForSeconds_o *v32; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  SoundPlayerMenu___c_c *v35; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v38; // x21
  struct SoundPlayerMenu___c_StaticFields *v39; // x0
  UnityEngine_WaitUntil_o *v40; // x21
  Il2CppObject **v41; // x19
  System_String_o *backupBgmName; // x19

  if ( (byte_42E6412 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SoundPlayerMenu___c__trialListening_b__39_0__, v14, v15, v16);
    sub_B5D5C4(&SoundPlayerMenu___c_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v23, v24, v25);
    byte_42E6412 = 1;
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
      BgmName = (SoundPlayerListViewItem_o *)SoundManager__getBgmName(0LL);
      if ( _4__this )
      {
        _4__this->fields.backupBgmName = (struct System_String_o *)BgmName;
        sub_B5D560(&_4__this->fields.backupBgmName);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0LL) )
        {
          _4__this->fields.backupBgmName = _4__this->fields.playSoundName;
          sub_B5D560(&_4__this->fields.backupBgmName);
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopBgm(0LL);
        BgmName = this->fields.item;
        if ( BgmName )
        {
          BgmCueName = SoundPlayerListViewItem__getBgmCueName(BgmName, 0LL);
          SoundManager__playBgm(BgmCueName, 0LL);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v32 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v32, LISTENING_TIME, 0LL);
          this->fields.__2__current = (Il2CppObject *)v32;
          p__2__current = &this->fields.__2__current;
          sub_B5D560(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_42:
      sub_B5D69C(BgmName, v29);
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
    sub_B5D560(&_4__this->fields.retTrialListening);
    return 0;
  }
  v35 = SoundPlayerMenu___c_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v35 = SoundPlayerMenu___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__39_0 = static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__39_0,
      v38,
      Method_SoundPlayerMenu___c__trialListening_b__39_0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v39 = SoundPlayerMenu___c_TypeInfo->static_fields;
    v39->__9__39_0 = _9__39_0;
    sub_B5D560(&v39->__9__39_0);
  }
  v40 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v40, _9__39_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v40;
  v41 = &this->fields.__2__current;
  sub_B5D560(v41);
  *((_DWORD *)v41 - 2) = 2;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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