void __fastcall SoundPlayerShopItemComponent___ctor(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__OnClickItem(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  ItemDetailInfoComponent_o *itemDetailComp; // x20
  ItemEntity_o *itemEnt; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42AF49C & 1) == 0 )
  {
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_42AF49C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, method);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v5 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0LL);
  if ( !itemDetailComp )
    sub_B52A5C(v6, v7);
  ItemDetailInfoComponent__Open(itemDetailComp, itemEnt, v5, 50, 0LL);
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
  __int64 v4; // x1
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_42AF49D & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF49D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, (const MethodInfo *)isDecide);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_B52A5C(0LL, v4);
  ItemDetailInfoComponent__Close(itemDetailComp, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__enableDispItemInfo(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B52A5C(0LL, method);
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
  void *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w8
  int data; // w8
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v16; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v18; // x0
  int v19; // s3
  float v20; // s4
  float v21; // s5
  float v22; // s6
  UIWidget_o *needTitleLb; // x22
  int v24; // s1
  int v25; // s0
  int v26; // s2
  UIWidget_o *v27; // x22
  float v28; // s4
  float v29; // s5
  float v30; // s6
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UIWidget_o *v35; // x22
  int v36; // s0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct ItemEntity_o *itemEnt; // x8
  float v48; // s1
  float v49; // s2
  float v50; // s8
  float v51; // s9
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AF49B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_24067/*"必要"*/);
    sub_B52984(&StringLiteral_24068/*"所持"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42AF49B = 1;
  }
  *(_QWORD *)&methoda.token = 0LL;
  methoda.return_type = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    v13 = *(_DWORD *)(*(_QWORD *)&methoda.token + 28LL);
LABEL_8:
    this->fields.haveItemNum = v13;
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         (WarEntity_o **)&methoda.return_type,
         itemId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = UserGameMaster__getSelfUserGame(0LL);
    if ( !methoda.return_type )
      goto LABEL_39;
    data = (int)methoda.return_type[3].data;
    if ( data == 5 )
    {
      if ( !Instance )
        goto LABEL_39;
      v13 = *((_DWORD *)Instance + 44);
    }
    else
    {
      if ( data != 22 )
        goto LABEL_17;
      if ( !Instance )
        goto LABEL_39;
      v13 = *((_DWORD *)Instance + 45);
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
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_24067/*"必要"*/, 0LL);
  Instance = this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_24068/*"所持"*/, 0LL);
  haveNumLb = this->fields.haveNumLb;
  LODWORD(methoda.name) = this->fields.haveItemNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.name);
  Instance = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v16, 0LL);
  if ( !haveNumLb )
    goto LABEL_39;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0LL);
  needNumLb = this->fields.needNumLb;
  LODWORD(methoda.methodPointer) = this->fields.needItemNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  Instance = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v18, 0LL);
  if ( !needNumLb )
    goto LABEL_39;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0LL);
  if ( this->fields.haveItemNum < this->fields.needItemNum )
  {
    needTitleLb = (UIWidget_o *)this->fields.needTitleLb;
    v24 = 0;
    v25 = 1062920520;
    v26 = 1050924810;
    this->fields.isItemNum = 0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_41463668(
      *(UnityEngine_Color_o *)(&v19 - 3),
      v20,
      v21,
      v22,
      (const MethodInfo *)&methoda.name);
    if ( needTitleLb )
    {
      UIWidget__set_color(needTitleLb, *(UnityEngine_Color_o *)&methoda.name, 0LL);
      v27 = (UIWidget_o *)this->fields.needNumLb;
      v54.fields.g = 0.0;
      v54.fields.r = 0.855;
      v54.fields.b = 0.32;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      UnityEngine_Color___ctor_41463668(v54, v28, v29, v30, &methoda);
      if ( v27 )
      {
        methodPointer_high = HIDWORD(methoda.methodPointer);
        methodPointer = (int)methoda.methodPointer;
        invoker_method_high = HIDWORD(methoda.invoker_method);
        invoker_method = (int)methoda.invoker_method;
        goto LABEL_28;
      }
    }
LABEL_39:
    sub_B52A5C(Instance, v12);
  }
  v35 = (UIWidget_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 1;
  *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
  if ( !v35 )
    goto LABEL_39;
  UIWidget__set_color(v35, *(UnityEngine_Color_o *)&v36, 0LL);
  v27 = (UIWidget_o *)this->fields.needNumLb;
  *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
  if ( !v27 )
    goto LABEL_39;
LABEL_28:
  UIWidget__set_color(v27, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  Instance = this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.currentItemId = itemId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.currentItemId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  *(UnityEngine_Vector3_o *)(&v48 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
  Instance = this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_39;
  v50 = v48;
  v51 = v49;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  v53.fields.z = v51;
  v53.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v53.fields.y = v50;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v53, 0LL);
}