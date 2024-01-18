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

  if ( (byte_418771F & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerMenu_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_12926/*"SoundPlayerNewKey"*/, v8);
    byte_418771F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SoundPlayerMenu_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_12926/*"SoundPlayerNewKey"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12926/*"SoundPlayerNewKey"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  System_Collections_Generic_List_int__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418771E & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_418771E = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playSoundName, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isNewList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4187710 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_4187710 = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B2C42C(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    0LL);
  if ( !soundPlayerListViewManager )
    sub_B2C434(v6, v7);
  soundPlayerListViewManager->fields.callbackFunc = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SoundPlayerListViewManager__SetMode_24834100(soundPlayerListViewManager, 2, v14);
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

  if ( (byte_418770B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418770B = 1;
  }
  this->fields.retTrialListening = 0LL;
  this->fields.state = 0;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.retTrialListening, 0LL, v2, v3, v4, v5, v6, v7);
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.backupBgmName, v9, v10, v11, v12, v13, v14, v15);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0LL),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0LL)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0LL)) == 0LL )
  {
    sub_B2C434(soundPlayerListViewManager, v16);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  SoundPlayerListViewItem_o *v14; // x20
  int32_t playSoundIdx; // w22
  SoundPlayerListViewItem_o *isNewList; // x0
  const MethodInfo *v17; // x1
  SoundManager_c *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  struct BgmEntity_o *bgmEntity; // x8
  int32_t id; // w21
  const MethodInfo *v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct BgmEntity_o *v31; // x8
  struct System_String_o **p_fileName; // x8
  struct System_String_o *v33; // x1
  const MethodInfo *v34; // x1
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x2

  if ( (byte_4187711 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    sub_B2C35C(&Method_SoundPlayerMenu_OnSelectSound__, v10);
    byte_4187711 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Item = SoundPlayerMenu__getItem(this, index, *(const MethodInfo **)&index);
    if ( !Item )
      goto LABEL_34;
    v14 = Item;
    if ( !Item->fields.bgmEntity )
      goto LABEL_34;
    this->fields.selectIndex = index;
    if ( kind == 2 )
    {
      SoundPlayerMenu__attachSelectEffect(this, v12);
      SoundPlayerMenu__createOpenDlg(this, v14, v20);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, v21);
    }
    else if ( kind == 1 )
    {
      playSoundIdx = this->fields.playSoundIdx;
      this->fields.playSoundIdx = index;
      isNewList = SoundPlayerMenu__getItem(this, playSoundIdx, v13);
      if ( isNewList )
      {
        isNewList->fields._isPlaySound_k__BackingField = 0;
        SoundPlayerListViewItem__applyUi(isNewList, v17);
      }
      if ( this->fields.playSoundIdx == playSoundIdx )
      {
        v18 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopBgm((const MethodInfo *)v18);
        SoundPlayerMenu__resetPlaySoundData(this, v19);
      }
      else
      {
        bgmEntity = v14->fields.bgmEntity;
        if ( !bgmEntity )
          goto LABEL_36;
        id = bgmEntity->fields.id;
        *(_WORD *)&v14->fields._isPlaySound_k__BackingField = 1;
        SoundPlayerListViewItem__attachPlayEffect(v14, v17);
        SoundPlayerListViewItem__applyUi(v14, v24);
        isNewList = (SoundPlayerListViewItem_o *)this->fields.isNewList;
        if ( !isNewList )
          goto LABEL_36;
        if ( !System_Collections_Generic_List_int___Contains(
                (System_Collections_Generic_List_int__o *)isNewList,
                id,
                (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (SoundPlayerListViewItem_o *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)isNewList,
            id,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        if ( (byte_41876EA & 1) == 0 )
        {
          sub_B2C35C(&StringLiteral_1/*""*/, v17);
          byte_41876EA = 1;
        }
        v31 = v14->fields.bgmEntity;
        if ( v31 )
          p_fileName = &v31->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        v33 = *p_fileName;
        this->fields.playSoundName = *p_fileName;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.playSoundName,
          (System_Int32_array **)v33,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        playSoundName = this->fields.playSoundName;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm(playSoundName, v34);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v37 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B2C42C(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        0LL);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v37;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
          (System_Int32_array **)v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        SoundPlayerListViewManager__SetMode_24834100(soundPlayerListViewManager, 2, v44);
        return;
      }
LABEL_36:
      sub_B2C434(isNewList, v17);
    }
  }
}


void __fastcall SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_B2C434(0LL, enable);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4187720 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_4187720 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0LL),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v6 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B2C42C(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          0LL),
        !soundPlayerListViewManager) )
  {
    sub_B2C434(maskColl, method);
  }
  soundPlayerListViewManager->fields.callbackFunc = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SoundPlayerListViewManager__SetMode_24834100(soundPlayerListViewManager, 2, v13);
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

  if ( (byte_4187709 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4187709 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_B2C728(v8);
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
  __int64 v9; // x1
  __int64 isNewList; // x0
  __int64 v11; // x8
  __int64 v12; // x20
  unsigned __int64 v13; // x21
  signed __int64 v14; // x22
  __int64 v15; // x0

  if ( (byte_418770D & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v4);
    sub_B2C35C(&SoundPlayerMenu_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418770D = 1;
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
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    isNewList = (__int64)this->fields.isNewList;
    if ( !isNewList )
      goto LABEL_19;
    System_Collections_Generic_List_int___Clear(
      (System_Collections_Generic_List_int__o *)isNewList,
      (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
    isNewList = sub_B2C374(char___TypeInfo, 1LL);
    if ( !isNewList )
      goto LABEL_19;
    v9 = isNewList;
    if ( !*(_DWORD *)(isNewList + 24) )
    {
LABEL_17:
      v15 = sub_B2C460(isNewList);
      sub_B2C400(v15, 0LL);
    }
    *(_WORD *)(isNewList + 32) = 44;
    if ( !String || (isNewList = (__int64)System_String__Split(String, (System_Char_array *)isNewList, 0LL)) == 0 )
LABEL_19:
      sub_B2C434(isNewList, v9);
    v11 = *(_QWORD *)(isNewList + 24);
    v12 = isNewList;
    if ( (int)v11 >= 1 )
    {
      v13 = 0LL;
      v14 = (int)v11;
      while ( 1 )
      {
        isNewList = System_Int32__Parse(*(System_String_o **)(v12 + 32 + 8 * v13), 0LL);
        if ( !this->fields.isNewList )
          goto LABEL_19;
        System_Collections_Generic_List_int___Add(
          this->fields.isNewList,
          isNewList,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( (__int64)++v13 >= v14 )
          return;
        if ( v13 >= *(unsigned int *)(v12 + 24) )
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
  UnityEngine_GameObject_o *Item; // x0
  __int64 v8; // x1
  void *monitor; // x8
  __int64 v10; // x11
  UnityEngine_Component_o **v11; // x20

  if ( (byte_4187713 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&SoundPlayerListViewObject_TypeInfo, v4);
    byte_4187713 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    Item = (UnityEngine_GameObject_o *)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v6);
    if ( !Item )
      goto LABEL_24;
    monitor = Item[4].monitor;
    if ( monitor
      && (v10 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)monitor + 300LL) >= (unsigned int)v10) )
    {
      if ( *(SoundPlayerListViewObject_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * v10 - 8) == SoundPlayerListViewObject_TypeInfo )
        v11 = (UnityEngine_Component_o **)Item[4].monitor;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
    {
      Item = this->fields.selectEffect;
      if ( Item )
      {
        UnityEngine_GameObject__SetActive(Item, 1, 0LL);
        if ( v11 )
        {
          GameObjectExtensions__SafeSetParent(this->fields.selectEffect, v11[16], 0LL);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0LL);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0LL);
          Item = this->fields.selectEffect;
          if ( Item )
          {
            Item = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 Item,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0LL);
              return;
            }
          }
        }
      }
LABEL_24:
      sub_B2C434(Item, v8);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__busyWaitStopBgm(
        SoundPlayerMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418771C & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo, method);
    byte_418771C = 1;
  }
  v3 = sub_B2C42C(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
  SoundPlayerMenu__busyWaitStopBgm_d__41___ctor((SoundPlayerMenu__busyWaitStopBgm_d__41_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SoundPlayerMenu__createOpenDlg(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItem_o *v3; // x20
  SoundPlayerMenu_o *v4; // x23
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
  Il2CppObject *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  struct BgmEntity_o *v30; // x20
  System_String_o *v31; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  ItemMaster_o *v33; // x24
  System_String_o *v34; // x21
  UserItemMaster_o *v35; // x25
  WarEntity_o *v36; // x8
  struct System_String_o *name; // x9
  System_String_c *klass; // x9
  System_Int32_array **v39; // x19
  char v40; // w20
  __int64 v41; // x22
  System_String_o *v42; // x23
  struct System_String_o *v43; // x8
  unsigned __int64 v44; // x28
  SoundPlayerMenu_o *v45; // x26
  struct System_String_o *v46; // x8
  int enterTransform; // w8
  __int64 v48; // x8
  __int64 v49; // x8
  Il2CppObject *v50; // x27
  Il2CppObject *CountText; // x28
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  bool v56; // w24
  System_Int32_array **v57; // x27
  System_Int32_array **v58; // x25
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  SoundPlayerMenu_o *v65; // x26
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_o *v90; // x21
  System_String_o *v91; // x22
  System_String_o *v92; // x23
  System_String_o *v93; // x25
  CommonUI_o *Instance; // x26
  TripleButtonDlgComponent_CallbackFunc_o *v95; // x27
  __int64 v96; // x0
  __int64 v97; // x0
  SoundPlayerMenu_o *v98; // [xsp+40h] [xbp-80h]
  System_String_o *title; // [xsp+48h] [xbp-78h]
  Il2CppObject *object; // [xsp+50h] [xbp-70h]
  __int64 v101; // [xsp+58h] [xbp-68h]
  UserItemEntity_o *v102; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v3 = item;
  v4 = this;
  if ( (byte_418771D & 1) == 0 )
  {
    sub_B2C35C(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&Method_SoundPlayerMenu_openCheckDlgCallback__, v13);
    sub_B2C35C(&string___TypeInfo, v14);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v15);
    sub_B2C35C(&StringLiteral_12281/*"SOUNDPLAYER_OPEN_CHECK"*/, v16);
    sub_B2C35C(&StringLiteral_12279/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, v17);
    sub_B2C35C(&StringLiteral_12277/*"SOUNDPLAYER_DIALOG_OK"*/, v18);
    sub_B2C35C(&StringLiteral_12280/*"SOUNDPLAYER_ITEM_DISP"*/, v19);
    sub_B2C35C(&StringLiteral_12275/*"SOUNDPLAYER_DIALOG_CANCEL"*/, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    sub_B2C35C(&StringLiteral_67/*"\r"*/, v22);
    sub_B2C35C(&StringLiteral_12278/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, v23);
    sub_B2C35C(&StringLiteral_12286/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, v24);
    this = (SoundPlayerMenu_o *)sub_B2C35C(&StringLiteral_12276/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, v25);
    byte_418771D = 1;
  }
  entity = 0LL;
  v102 = 0LL;
  if ( !v3 )
    goto LABEL_58;
  bgmEntity = v3->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_58;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_58;
  this = (SoundPlayerMenu_o *)System_String__Replace_44312768(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_67/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0LL);
  if ( !this )
    goto LABEL_58;
  v27 = (Il2CppObject *)System_String__Replace_44312768(
                          (System_String_o *)this,
                          (System_String_o *)StringLiteral_26/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12286/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0LL);
  v29 = System_String__Format(v28, v27, 0LL);
  v30 = v3->fields.bgmEntity;
  v31 = v29;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  title = v31;
  v33 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)this,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)this,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v30 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_58;
  v34 = (System_String_o *)StringLiteral_1/*""*/;
  v35 = (UserItemMaster_o *)this;
  object = (Il2CppObject *)v4;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          v30->fields.shopId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    v56 = 0;
    v57 = (System_Int32_array **)v34;
    v42 = v34;
    v39 = (System_Int32_array **)v34;
    goto LABEL_66;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12278/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0LL);
  v36 = entity;
  if ( !entity || (name = entity->fields.name) == 0LL )
LABEL_58:
    sub_B2C434(this, item);
  klass = name[1].klass;
  v39 = (System_Int32_array **)this;
  if ( (int)klass < 1 )
  {
    v40 = 0;
    v42 = v34;
  }
  else
  {
    v98 = this;
    v101 = (int)klass;
    v40 = 0;
    v41 = 8LL;
    v42 = v34;
    while ( 1 )
    {
      v43 = v36->fields.name;
      if ( !v43 )
        goto LABEL_58;
      v44 = v41 - 8;
      if ( v41 - 8 >= (unsigned __int64)LODWORD(v43[1].klass) )
        goto LABEL_88;
      if ( !v33 )
        goto LABEL_58;
      this = (SoundPlayerMenu_o *)ItemMaster__GetItemData(v33, *((_DWORD *)&v43->klass + v41), 0LL);
      if ( this )
      {
        v45 = this;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (SoundPlayerMenu_o *)NetworkManager__get_UserId(0LL);
        if ( !entity )
          goto LABEL_58;
        v46 = entity->fields.name;
        if ( !v46 )
          goto LABEL_58;
        if ( v44 >= LODWORD(v46[1].klass) )
          goto LABEL_88;
        if ( !v35 )
          goto LABEL_58;
        this = (SoundPlayerMenu_o *)UserItemMaster__TryGetEntity(
                                      v35,
                                      &v102,
                                      (int64_t)this,
                                      *((_DWORD *)&v46->klass + v41),
                                      0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v102 )
            goto LABEL_58;
          item = (SoundPlayerListViewItem_o *)(unsigned int)v102->fields.num;
        }
        else
        {
          this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0LL);
          enterTransform = (int)v45->fields.enterTransform;
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
        v48 = *(_QWORD *)&entity->fields.startType;
        if ( !v48 )
          goto LABEL_58;
        if ( v44 >= *(unsigned int *)(v48 + 24) )
          goto LABEL_88;
        if ( (int)item < *(_DWORD *)(v48 + 4 * v41) )
          v40 = 1;
        this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v45->fields.enterTransform, (int32_t)item, 0LL);
        if ( !entity )
          goto LABEL_58;
        v49 = *(_QWORD *)&entity->fields.startType;
        if ( !v49 )
          goto LABEL_58;
        if ( v44 >= *(unsigned int *)(v49 + 24) )
          goto LABEL_88;
        v50 = (Il2CppObject *)this;
        CountText = (Il2CppObject *)ItemType__GetCountText(
                                      (int32_t)v45->fields.enterTransform,
                                      *(_DWORD *)(v49 + 4 * v41),
                                      0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
        v53 = System_String__Format_44301068(v52, &v45->fields.basePanelList->obj, v50, 0LL);
        v42 = System_String__Concat_44305532(v42, v53, 0LL);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
        v55 = System_String__Format_44301068(v54, &v45->fields.basePanelList->obj, CountText, 0LL);
        this = (SoundPlayerMenu_o *)System_String__Concat_44305532(v34, v55, 0LL);
        v34 = (System_String_o *)this;
      }
      if ( v41 - 7 >= v101 )
        break;
      v36 = entity;
      ++v41;
      if ( !entity )
        goto LABEL_58;
    }
    v39 = (System_Int32_array **)v98;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v57 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0LL);
  v56 = v40 & 1;
LABEL_66:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v58 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12281/*"SOUNDPLAYER_OPEN_CHECK"*/, 0LL);
  this = (SoundPlayerMenu_o *)sub_B2C374(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_58;
  v65 = this;
  if ( v39 )
  {
    this = (SoundPlayerMenu_o *)sub_B2C41C(v39, this->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( !LODWORD(v65->fields.basePanelList) )
    goto LABEL_88;
  v65->fields.baseWindow = (struct UnityEngine_GameObject_o *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)&v65->fields.baseWindow, v39, v59, v60, v61, v62, v63, v64);
  if ( v42 )
  {
    this = (SoundPlayerMenu_o *)sub_B2C41C(v42, v65->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( LODWORD(v65->fields.basePanelList) <= 1 )
    goto LABEL_88;
  v65->fields.closeTransform = (struct UnityEngine_Transform_o *)v42;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v65->fields.closeTransform,
    (System_Int32_array **)v42,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  if ( v57 )
  {
    this = (SoundPlayerMenu_o *)sub_B2C41C(v57, v65->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( LODWORD(v65->fields.basePanelList) <= 2 )
    goto LABEL_88;
  v65->fields.enterTransform = (struct UnityEngine_Transform_o *)v57;
  sub_B2C2F8((BattleServantConfConponent_o *)&v65->fields.enterTransform, v57, v72, v73, v74, v75, v76, v77);
  if ( v34 )
  {
    this = (SoundPlayerMenu_o *)sub_B2C41C(v34, v65->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( LODWORD(v65->fields.basePanelList) <= 3 )
    goto LABEL_88;
  *(_QWORD *)&v65->fields.isBasePosition = v34;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v65->fields.isBasePosition,
    (System_Int32_array **)v34,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  if ( v58 )
  {
    this = (SoundPlayerMenu_o *)sub_B2C41C(v58, v65->klass->_1.element_class);
    if ( !this )
    {
LABEL_89:
      v97 = sub_B2C454(this);
      sub_B2C400(v97, 0LL);
    }
  }
  if ( LODWORD(v65->fields.basePanelList) <= 4 )
  {
LABEL_88:
    v96 = sub_B2C460(this);
    sub_B2C400(v96, 0LL);
  }
  *(_QWORD *)&v65->fields.basePosition.fields.y = v58;
  sub_B2C2F8((BattleServantConfConponent_o *)&v65->fields.basePosition.fields.y, v58, v84, v85, v86, v87, v88, v89);
  v90 = System_String__Concat_44385656((System_String_array *)v65, 0LL);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12275/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0LL);
  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_12276/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0LL);
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12277/*"SOUNDPLAYER_DIALOG_OK"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v95 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_B2C42C(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
  TripleButtonDlgComponent_CallbackFunc___ctor(v95, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0LL);
  if ( !Instance )
    goto LABEL_58;
  CommonUI__OpenTripleButtonDlg(Instance, title, v90, v91, v92, v93, v95, 30, 10, 10, 1, 0, 8, 1, 0LL);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_58;
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v56, 0LL);
}


void __fastcall SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  UnityEngine_GameObject_o *EffetData; // x21
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4187712 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_18206/*"ef_soundchoice"*/, v4);
    byte_4187712 = 1;
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
                  (System_String_o *)StringLiteral_18206/*"ef_soundchoice"*/,
                  v8);
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
      v11 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)EffetData,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)v11;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectEffect, v11, v12, v13, v14, v15, v16, v17);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
        GameObjectExtensions__SafeSetParent_31331952(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
        return;
      }
LABEL_18:
      sub_B2C434(soundPlayerListViewManager, v7);
    }
  }
}


void __fastcall SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4187714 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187714 = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    v5 = this->fields.selectEffect;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    GameObjectExtensions__SafeSetParent_31331952(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
  }
}


void __fastcall SoundPlayerMenu__endPurchaseRequest(
        SoundPlayerMenu_o *this,
        System_String_o *result,
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
  __int64 v16; // x19
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  struct SoundPlayerListViewManager_o *v34; // x8
  const MethodInfo *v35; // x2
  System_Int32_array **Item; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x8
  __int64 v44; // x8
  Il2CppObject *v45; // x20
  System_String_o *v46; // x0
  System_String_o *v47; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v49; // x22

  if ( (byte_4187718 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_SoundPlayerMenu_OnSelectSound__, v8);
    sub_B2C35C(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__, v9);
    sub_B2C35C(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v11);
    sub_B2C35C(&StringLiteral_12285/*"SOUNDPLAYER_SOUND_OPEN"*/, v12);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_67/*"\r"*/, v15);
    byte_4187718 = 1;
  }
  v16 = sub_B2C42C(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
  SoundPlayerMenu___c__DisplayClass36_0___ctor((SoundPlayerMenu___c__DisplayClass36_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_17;
  *(_QWORD *)(v16 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  v17 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v18);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v26 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B2C42C(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      0LL);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v26;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
        (System_Int32_array **)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      SoundPlayerListViewManager__SetMode_24834100(soundPlayerListViewManager, 2, v33);
      return;
    }
LABEL_17:
    sub_B2C434(v17, v18);
  }
  v34 = this->fields.soundPlayerListViewManager;
  if ( !v34 )
    goto LABEL_17;
  ++v34->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v18);
  Item = (System_Int32_array **)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v35);
  *(_QWORD *)(v16 + 24) = Item;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 24), Item, v37, v38, v39, v40, v41, v42);
  v43 = *(_QWORD *)(v16 + 24);
  if ( !v43 )
    goto LABEL_17;
  v44 = *(_QWORD *)(v43 + 112);
  if ( !v44 )
    goto LABEL_17;
  v17 = *(System_String_o **)(v44 + 32);
  if ( !v17 )
    goto LABEL_17;
  v17 = System_String__Replace_44312768(
          v17,
          (System_String_o *)StringLiteral_67/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  if ( !v17 )
    goto LABEL_17;
  v45 = (Il2CppObject *)System_String__Replace_44312768(
                          v17,
                          (System_String_o *)StringLiteral_26/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"SOUNDPLAYER_SOUND_OPEN"*/, 0LL);
  v47 = System_String__Format(v46, v45, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v16,
    Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v47,
    v49,
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
    sub_B2C434(0LL, idx);
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
    sub_B2C434(0LL, method);
  SoundPlayerListViewManager__releaseSoundPlayerEffect(soundPlayerListViewManager, method);
  SoundPlayerMenu__releaseSelectEffect(this, v4);
  SoundPlayerMenu__inputNewList(this, v5);
  SoundPlayerMenu__Init(this, v6);
}


void __fastcall SoundPlayerMenu__inputNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  signed __int64 size; // x20
  System_String_array *v9; // x21
  unsigned __int64 v10; // x24
  BattleServantConfConponent_o *p_baseWindow; // x22
  struct System_Collections_Generic_List_int__o *v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x23
  System_String_o *v20; // x19
  SoundPlayerMenu_c *v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_418770E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_B2C35C(&SoundPlayerMenu_TypeInfo, v4);
    sub_B2C35C(&string___TypeInfo, v5);
    this = (SoundPlayerMenu_o *)sub_B2C35C(&StringLiteral_699/*","*/, v6);
    byte_418770E = 1;
  }
  v24 = 0;
  isNewList = v2->fields.isNewList;
  if ( !isNewList )
LABEL_19:
    sub_B2C434(this, method);
  size = isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    this = (SoundPlayerMenu_o *)sub_B2C374(string___TypeInfo, (unsigned int)size);
    v9 = (System_String_array *)this;
    v10 = 0LL;
    p_baseWindow = (BattleServantConfConponent_o *)&this->fields.baseWindow;
    do
    {
      v12 = v2->fields.isNewList;
      if ( !v12 )
        goto LABEL_19;
      if ( v10 >= (unsigned int)v12->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v24 = v12->fields._items->m_Items[v10 + 1];
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&v24, 0LL);
      if ( !v9 )
        goto LABEL_19;
      v19 = (System_Int32_array **)this;
      if ( this )
      {
        this = (SoundPlayerMenu_o *)sub_B2C41C(this, v9->obj.klass->_1.element_class);
        if ( !this )
        {
          v23 = sub_B2C454(0LL);
          sub_B2C400(v23, 0LL);
        }
      }
      if ( v10 >= v9->max_length )
      {
        v22 = sub_B2C460(this);
        sub_B2C400(v22, 0LL);
      }
      p_baseWindow->klass = (BattleServantConfConponent_c *)v19;
      sub_B2C2F8(p_baseWindow, v19, v13, v14, v15, v16, v17, v18);
      ++v10;
      p_baseWindow = (BattleServantConfConponent_o *)((char *)p_baseWindow + 8);
    }
    while ( (__int64)v10 < size );
    v20 = System_String__Join((System_String_o *)StringLiteral_699/*","*/, v9, 0LL);
    v21 = SoundPlayerMenu_TypeInfo;
    if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v21 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v21->static_fields->SOUND_PLAYER_NEW_KEY, v20, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall SoundPlayerMenu__open(
        SoundPlayerMenu_o *this,
        System_Action_o *opened_act,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  System_Action_o *v31; // x20
  const MethodInfo *v32; // x2

  if ( (byte_418770F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, opened_act);
    sub_B2C35C(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, v7);
    sub_B2C35C(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo, v8);
    byte_418770F = 1;
  }
  v9 = sub_B2C42C(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
  SoundPlayerMenu___c__DisplayClass27_0___ctor((SoundPlayerMenu___c__DisplayClass27_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = opened_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)opened_act, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v9, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0LL);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_B2C434(v10, v11);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerMenu__openCheckDlgCallback(
        SoundPlayerMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
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
  System_Action_o *v30; // x0
  __int64 *v31; // x8
  const MethodInfo *v32; // x2
  System_Collections_IEnumerator_o *v33; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  CommonUI_o *v41; // x20
  TripleButtonDlgComponent_CallbackFunc_o *v42; // x21
  const MethodInfo *v43; // x1
  System_Action_o *v44; // x21

  if ( (byte_4187716 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_SoundPlayerMenu_openCheckDlgCallback__, v7);
    sub_B2C35C(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__, v8);
    sub_B2C35C(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__, v9);
    sub_B2C35C(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo, v10);
    byte_4187716 = 1;
  }
  v11 = sub_B2C42C(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
  SoundPlayerMenu___c__DisplayClass34_0___ctor((SoundPlayerMenu___c__DisplayClass34_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_14;
  *(_QWORD *)(v11 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  Item = (System_Int32_array **)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v20);
  *(_QWORD *)(v11 + 16) = Item;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), Item, v22, v23, v24, v25, v26, v27);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v28);
      SoundPlayerMenu__detachSelectEffect(this, v43);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v31 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_11:
      v44 = v30;
      System_Action___ctor(v30, (Il2CppObject *)v11, *v31, 0LL);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg(Instance, v44, 0LL);
        return;
      }
LABEL_14:
      sub_B2C434(v12, v13);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v28);
      v33 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v11 + 16), v32);
      started = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
      this->fields.retTrialListening = started;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.retTrialListening,
        (System_Int32_array **)started,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      v41 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v42 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_B2C42C(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v42,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0LL);
      if ( v41 )
      {
        CommonUI__setCallbackTripleButtonDlg(v41, v42, 0LL);
        return;
      }
      goto LABEL_14;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v28);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v31 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
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
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4187719 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, item);
    sub_B2C35C(&Method_SoundPlayerMenu__openEvent_b__37_0__, v5);
    byte_4187719 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0LL),
        v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0LL),
        !item) )
  {
    sub_B2C434(maskColl, item);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v7, v8);
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

  if ( (byte_4187715 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187715 = 1;
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
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_selectEffect->klass = 0LL;
    sub_B2C2F8(p_selectEffect, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_418770A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418770A = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_B2C728(v8);
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

  if ( (byte_418770C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418770C = 1;
  }
  this->fields.playSoundIdx = -1;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playSoundName, v9, v2, v3, v4, v5, v6, v7);
}


void __fastcall SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *canPlaySoundCnt; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v11; // x21
  struct SoundPlayerListViewManager_o *v12; // x8
  Il2CppObject *v13; // x19
  Il2CppObject *v14; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187717 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_12282/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, v4);
    sub_B2C35C(&StringLiteral_12283/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, v5);
    byte_4187717 = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12282/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0LL);
  if ( !canPlaySoundStr )
    goto LABEL_11;
  UILabel__set_text(canPlaySoundStr, v7, 0LL);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12283/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0LL);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_11;
  v11 = v7;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &canPlaySoundNum);
  v12 = this->fields.soundPlayerListViewManager;
  if ( !v12
    || (v13 = (Il2CppObject *)v7,
        playSoundMax = v12->fields.playSoundMax,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playSoundMax),
        v7 = System_String__Format_44301068(v11, v13, v14, 0LL),
        !canPlaySoundCnt) )
  {
LABEL_11:
    sub_B2C434(v7, v8);
  }
  UILabel__set_text(canPlaySoundCnt, v7, 0LL);
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

  if ( (byte_418771B & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418771B = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_35310416((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0LL);
    this->fields.retTrialListening = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.retTrialListening, 0LL, v6, v7, v8, v9, v10, v11);
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( BgmManager__get_IsBusy(0LL) )
    {
      v13 = SoundPlayerMenu__busyWaitStopBgm(this, v12);
      UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
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
      v25 = (System_Int32_array **)StringLiteral_1/*""*/;
      p_backupBgmName->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
      sub_B2C2F8(p_backupBgmName, v25, v18, v19, v20, v21, v22, v23);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_418771A & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerMenu__trialListening_d__39_TypeInfo, item);
    byte_418771A = 1;
  }
  v5 = sub_B2C42C(SoundPlayerMenu__trialListening_d__39_TypeInfo);
  SoundPlayerMenu__trialListening_d__39___ctor((SoundPlayerMenu__trialListening_d__39_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = item;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)item, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x0

  if ( (byte_418475C & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerMenu___c_TypeInfo, v1);
    byte_418475C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SoundPlayerMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SoundPlayerMenu___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_418475E & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    byte_418475E = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


bool __fastcall SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_418475D & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    byte_418475D = 1;
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
  struct SoundPlayerMenu_o *v7; // x20
  System_Action_o *v8; // x21
  struct System_Action_o *opened_act; // x1
  struct System_Action_o *callback; // x1
  struct SoundPlayerMenu_o *v11; // x8
  struct SoundPlayerMenu_o *v12; // x8
  struct SoundPlayerMenu_o *v13; // x8
  struct SoundPlayerMenu_o *v14; // x8
  struct SoundPlayerMenu_o *v15; // x8
  UnityEngine_Object_o *baseWindow; // x20
  struct SoundPlayerMenu_o *v17; // x8
  srcLineSprite_o *Component_srcLineSprite; // x20
  struct SoundPlayerMenu_o *v19; // x8

  if ( (byte_418475F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SoundPlayerMenu_EndOpen__, v5);
    byte_418475F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_36;
  SoundPlayerMenu__createSelectEffect(_4__this, 0LL);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_36;
  if ( v7->fields.state )
  {
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v7, Method_SoundPlayerMenu_EndOpen__, 0LL);
  }
  else
  {
    opened_act = this->fields.opened_act;
    v7->fields.openedAct = opened_act;
    sub_B2C2F8(&v7->fields.openedAct, opened_act);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_36;
    callback = this->fields.callback;
    _4__this->fields.callbackFunc = callback;
    sub_B2C2F8(&_4__this->fields.callbackFunc, callback);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v11 = this->fields.__4__this;
    if ( !v11 )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)v11->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)v12->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_36;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, 0LL);
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_36;
    _4__this = (SoundPlayerMenu_o *)v13->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_36;
    SoundPlayerListViewManager__SetMode_24834100((SoundPlayerListViewManager_o *)_4__this, 1, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_36;
    SoundPlayerMenu__setCanPlaySoundDisp(_4__this, 0LL);
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_36;
    v14->fields.state = 1;
    v7 = this->fields.__4__this;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v7, Method_SoundPlayerMenu_EndOpen__, 0LL);
    if ( !v7 )
      goto LABEL_36;
  }
  BaseMenu__Open((BaseMenu_o *)v7, v8, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_36;
  baseWindow = (UnityEngine_Object_o *)v15->fields.baseWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = (SoundPlayerMenu_o *)UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_33;
  v17 = this->fields.__4__this;
  if ( !v17 || (_4__this = (SoundPlayerMenu_o *)v17->fields.baseWindow) == 0LL )
LABEL_36:
    sub_B2C434(_4__this, method);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)_4__this,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_36;
  _4__this = (SoundPlayerMenu_o *)v19->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_36;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v19->fields.isNewList,
    v19->fields.playSoundName,
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
  SoundPlayerMenu___c__DisplayClass34_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct SoundPlayerListViewItem_o *item; // x8
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  struct SoundPlayerMenu_o *v12; // x8

  v2 = this;
  if ( (byte_4184760 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_PurchaseRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_SoundPlayerMenu_endPurchaseRequest__, v5);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_B2C35C(&StringLiteral_21218/*"ok"*/, v6);
    byte_4184760 = 1;
  }
  item = v2->fields.item;
  if ( !item )
    goto LABEL_14;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_14;
  shopId = bgmEntity->fields.shopId;
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( shopId )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v11, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                        v11,
                                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v12 = v2->fields.__4__this;
    if ( v12 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v12->fields.PURCHASE_NUM, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B2C434(this, method);
  }
  if ( !_4__this )
    goto LABEL_14;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)_4__this, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu___c__DisplayClass34_0_o *v2; // x19
  __int64 v3; // x1
  struct SoundPlayerMenu_o *_4__this; // x20
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v6; // x21
  __int64 v7; // x9

  v2 = this;
  if ( (byte_4184761 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, method);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_B2C35C(&Method_SoundPlayerMenu_OnSelectSound__, v3);
    byte_4184761 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (soundPlayerListViewManager = _4__this->fields.soundPlayerListViewManager,
        v6 = sub_B2C42C(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        v7 = *(_QWORD *)Method_SoundPlayerMenu_OnSelectSound__,
        *(_QWORD *)(v6 + 40) = Method_SoundPlayerMenu_OnSelectSound__,
        *(_QWORD *)(v6 + 16) = v7,
        *(_QWORD *)(v6 + 32) = _4__this,
        sub_B2C2F8(v6 + 32, _4__this),
        !soundPlayerListViewManager) )
  {
    sub_B2C434(this, method);
  }
  SoundPlayerListViewManager__SetMode(
    soundPlayerListViewManager,
    2,
    (SoundPlayerListViewManager_CallbackFunc_o *)v6,
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
    sub_B2C434(_4__this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  SoundPlayerMenu___c_c *v10; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v13; // x21
  struct SoundPlayerMenu___c_StaticFields *v14; // x0
  UnityEngine_WaitUntil_o *v15; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o **p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  System_String_o *v23; // x20
  void *v24; // x1

  if ( (byte_4184762 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__, v5);
    sub_B2C35C(&SoundPlayerMenu___c_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4184762 = 1;
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
      sub_B2C434(v19, v20);
    backupBgmName = _4__this->fields.backupBgmName;
    p_backupBgmName = &_4__this->fields.backupBgmName;
    if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
    {
      v23 = *p_backupBgmName;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm(v23, 0LL);
    }
    v24 = StringLiteral_1/*""*/;
    *p_backupBgmName = (System_String_o *)StringLiteral_1/*""*/;
    sub_B2C2F8(p_backupBgmName, v24);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v10 = SoundPlayerMenu___c_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v10 = SoundPlayerMenu___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__41_0 = static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__41_0,
      v13,
      Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v14 = SoundPlayerMenu___c_TypeInfo->static_fields;
    v14->__9__41_0 = _9__41_0;
    sub_B2C2F8(&v14->__9__41_0, _9__41_0);
  }
  v15 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, _9__41_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8(p__2__current, v15);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  SoundPlayerListViewItem_o *BgmName; // x0
  __int64 v13; // x1
  struct System_String_o *playSoundName; // x1
  System_String_o *BgmCueName; // x0
  float LISTENING_TIME; // s8
  UnityEngine_WaitForSeconds_o *v17; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  SoundPlayerMenu___c_c *v20; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v23; // x21
  struct SoundPlayerMenu___c_StaticFields *v24; // x0
  UnityEngine_WaitUntil_o *v25; // x21
  Il2CppObject **v26; // x19
  System_String_o *backupBgmName; // x19

  if ( (byte_4184763 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_SoundPlayerMenu___c__trialListening_b__39_0__, v6);
    sub_B2C35C(&SoundPlayerMenu___c_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v9);
    byte_4184763 = 1;
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
        sub_B2C2F8(&_4__this->fields.backupBgmName, BgmName);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0LL) )
        {
          playSoundName = _4__this->fields.playSoundName;
          _4__this->fields.backupBgmName = playSoundName;
          sub_B2C2F8(&_4__this->fields.backupBgmName, playSoundName);
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
          v17 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v17, LISTENING_TIME, 0LL);
          this->fields.__2__current = (Il2CppObject *)v17;
          p__2__current = &this->fields.__2__current;
          sub_B2C2F8(p__2__current, v17);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_42:
      sub_B2C434(BgmName, v13);
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
    sub_B2C2F8(&_4__this->fields.retTrialListening, 0LL);
    return 0;
  }
  v20 = SoundPlayerMenu___c_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v20 = SoundPlayerMenu___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__39_0 = static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__39_0,
      v23,
      Method_SoundPlayerMenu___c__trialListening_b__39_0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v24 = SoundPlayerMenu___c_TypeInfo->static_fields;
    v24->__9__39_0 = _9__39_0;
    sub_B2C2F8(&v24->__9__39_0, _9__39_0);
  }
  v25 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v25, _9__39_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v25;
  v26 = &this->fields.__2__current;
  sub_B2C2F8(v26, v25);
  *((_DWORD *)v26 - 2) = 2;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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