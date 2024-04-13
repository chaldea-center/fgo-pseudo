void __fastcall SoundPlayerShopItemComponent___ctor(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__OnClickItem(
        SoundPlayerShopItemComponent_o *this,
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
  ItemDetailInfoComponent_o *itemDetailComp; // x20
  ItemEntity_o *itemEnt; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E79C6 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SoundPlayerShopItemComponent_closeItemDetail__, v8, v9, v10);
    byte_42E79C6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, method);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0LL);
  if ( !itemDetailComp )
    sub_B5D69C(v14, v15);
  ItemDetailInfoComponent__Open(itemDetailComp, itemEnt, v13, 50, 0LL);
}


bool __fastcall SoundPlayerShopItemComponent__checkItemNum(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isItemNum;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerShopItemComponent__closeItemDetail(
        SoundPlayerShopItemComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_42E79C7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, isDecide, (_DWORD)method, v3);
    byte_42E79C7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, (const MethodInfo *)isDecide);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_B5D69C(0LL, v5);
  ItemDetailInfoComponent__Close(itemDetailComp, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__enableDispItemInfo(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(itemInfo, 0, 0LL);
}


int32_t __fastcall SoundPlayerShopItemComponent__getItemId(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentItemId;
}


int32_t __fastcall SoundPlayerShopItemComponent__getItemImgId(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.itemImgId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerShopItemComponent__setItemInfo(
        SoundPlayerShopItemComponent_o *this,
        int64_t usrId,
        int32_t itemId,
        int32_t needNum,
        int32_t idx,
        const MethodInfo *method)
{
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  void *Instance; // x0
  __int64 v36; // x1
  int32_t v37; // w8
  int data; // w8
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v40; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v42; // x0
  int v43; // s3
  float v44; // s4
  float v45; // s5
  float v46; // s6
  UIWidget_o *needTitleLb; // x22
  int v48; // s1
  int v49; // s0
  int v50; // s2
  UIWidget_o *v51; // x22
  float v52; // s4
  float v53; // s5
  float v54; // s6
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UIWidget_o *v59; // x22
  int v60; // s0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct ItemEntity_o *itemEnt; // x8
  float v72; // s1
  float v73; // s2
  float v74; // s8
  float v75; // s9
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E79C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, usrId, itemId, *(_QWORD *)&needNum);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_24187/*"必要"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_24188/*"所持"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v32, v33, v34);
    byte_42E79C5 = 1;
  }
  *(_QWORD *)&methoda.token = 0LL;
  methoda.return_type = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (void *)UserItemMaster__TryGetEntity(
                       (UserItemMaster_o *)Instance,
                       (UserItemEntity_o **)&methoda.token,
                       usrId,
                       itemId,
                       0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !*(_QWORD *)&methoda.token )
      goto LABEL_39;
    v37 = *(_DWORD *)(*(_QWORD *)&methoda.token + 28LL);
LABEL_8:
    this->fields.haveItemNum = v37;
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         (WarEntity_o **)&methoda.return_type,
         itemId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = UserGameMaster__getSelfUserGame(0LL);
    if ( !methoda.return_type )
      goto LABEL_39;
    data = (int)methoda.return_type[3].data;
    if ( data == 5 )
    {
      if ( !Instance )
        goto LABEL_39;
      v37 = *((_DWORD *)Instance + 44);
    }
    else
    {
      if ( data != 22 )
        goto LABEL_17;
      if ( !Instance )
        goto LABEL_39;
      v37 = *((_DWORD *)Instance + 45);
    }
    goto LABEL_8;
  }
LABEL_17:
  Instance = this->fields.itemIconComp;
  if ( !Instance )
    goto LABEL_39;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Instance, itemId, -1, 0LL);
  Instance = this->fields.needTitleLb;
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_24187/*"必要"*/, 0LL);
  Instance = this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_24188/*"所持"*/, 0LL);
  haveNumLb = this->fields.haveNumLb;
  LODWORD(methoda.name) = this->fields.haveItemNum;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.name);
  Instance = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v40, 0LL);
  if ( !haveNumLb )
    goto LABEL_39;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0LL);
  needNumLb = this->fields.needNumLb;
  LODWORD(methoda.methodPointer) = this->fields.needItemNum;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  Instance = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v42, 0LL);
  if ( !needNumLb )
    goto LABEL_39;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0LL);
  if ( this->fields.haveItemNum < this->fields.needItemNum )
  {
    needTitleLb = (UIWidget_o *)this->fields.needTitleLb;
    v48 = 0;
    v49 = 1062920520;
    v50 = 1050924810;
    this->fields.isItemNum = 0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_41567816(
      *(UnityEngine_Color_o *)(&v43 - 3),
      v44,
      v45,
      v46,
      (const MethodInfo *)&methoda.name);
    if ( needTitleLb )
    {
      UIWidget__set_color(needTitleLb, *(UnityEngine_Color_o *)&methoda.name, 0LL);
      v51 = (UIWidget_o *)this->fields.needNumLb;
      v78.fields.g = 0.0;
      v78.fields.r = 0.855;
      v78.fields.b = 0.32;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      UnityEngine_Color___ctor_41567816(v78, v52, v53, v54, &methoda);
      if ( v51 )
      {
        methodPointer_high = HIDWORD(methoda.methodPointer);
        methodPointer = (int)methoda.methodPointer;
        invoker_method_high = HIDWORD(methoda.invoker_method);
        invoker_method = (int)methoda.invoker_method;
        goto LABEL_28;
      }
    }
LABEL_39:
    sub_B5D69C(Instance, v36);
  }
  v59 = (UIWidget_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 1;
  *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_white(0LL);
  if ( !v59 )
    goto LABEL_39;
  UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v60, 0LL);
  v51 = (UIWidget_o *)this->fields.needNumLb;
  *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
  if ( !v51 )
    goto LABEL_39;
LABEL_28:
  UIWidget__set_color(v51, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  Instance = this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.currentItemId = itemId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.currentItemId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  itemEnt = this->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_39;
  Instance = this->fields.itemDetailInfo;
  this->fields.itemImgId = itemEnt->fields.imageId;
  if ( !Instance )
    goto LABEL_39;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  *(UnityEngine_Vector3_o *)(&v72 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
  Instance = this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_39;
  v74 = v72;
  v75 = v73;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  v77.fields.z = v75;
  v77.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v77.fields.y = v74;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v77, 0LL);
}