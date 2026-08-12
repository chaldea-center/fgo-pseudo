void ExRoomTopShopBoard___ctor(ExRoomTopShopBoard_o *this, const MethodInfo *method)
{
  this->fields.infoFrameSideSize = 82;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomTopShopBoard__Awake(ExRoomTopShopBoard_o *this, const MethodInfo *method)
{
  ;
}


int64_t ExRoomTopShopBoard__GetDailyShopCloseTime(ExRoomTopShopBoard_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *TargetDailyShopEntities; // x0
  __int64 v3; // x1
  int64_t v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  int64_t ActiveTime; // x0
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596AEAD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__get_Current__);
    this = (ExRoomTopShopBoard_o *)sub_2213A60(&Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
    byte_596AEAD = 1;
  }
  memset(&v13, 0, sizeof(v13));
  TargetDailyShopEntities = (System_Collections_Generic_List_object__o *)ExRoomShopComponent__GetTargetDailyShopEntities((const MethodInfo *)this);
  if ( !TargetDailyShopEntities )
    sub_2213CDC(0, v3);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    TargetDailyShopEntities,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
  v4 = 0;
  v11 = 0;
  v12 = &v13;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
    if ( !v5 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_2213CDC(v5, v6);
    if ( !ShopEntity__IsSoldOut((ShopEntity_o *)v13.fields._current, 0) )
    {
      ActiveTime = ShopEntity__GetActiveTime((ShopEntity_o *)current, 0);
      if ( ActiveTime < v4 || v4 < 1 )
        v4 = ActiveTime;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
  return v4;
}


void ExRoomTopShopBoard__InitInfo(ExRoomTopShopBoard_o *this, const MethodInfo *method)
{
  ExRoomTopShopBoard_o *v2; // x19
  int64_t DailyShopCloseTime; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *infoRoot; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *infoFrameSprite; // x19

  v2 = this;
  if ( (byte_596AEAB & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    this = (ExRoomTopShopBoard_o *)sub_2213A60(&StringLiteral_18473/*"caldeagate_notice_00"*/);
    byte_596AEAB = 1;
  }
  DailyShopCloseTime = ExRoomTopShopBoard__GetDailyShopCloseTime(this, method);
  infoRoot = v2->fields.infoRoot;
  v2->fields.targetTime = DailyShopCloseTime;
  if ( !infoRoot )
    sub_2213CDC(DailyShopCloseTime, v4);
  UnityEngine_GameObject__SetActive(infoRoot, DailyShopCloseTime > 0, 0);
  infoFrameSprite = v2->fields.infoFrameSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetBanner(infoFrameSprite, (System_String_o *)StringLiteral_18473/*"caldeagate_notice_00"*/, 0);
}


void ExRoomTopShopBoard__InitSet(
        ExRoomTopShopBoard_o *this,
        ExRoomTopComponent_o *topComponent,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AtlasManagerUnit_o *exRoomAtlasManagerUnit; // x0
  __int64 v11; // x1
  struct ExRoomTopComponent_o *topDisp; // x8
  struct ExRoomRootComponent_o *root; // x8
  struct ExRoomResourceCatalogAssetBundle_o *ResourceCatalog_k__BackingField; // x8
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_596AEAA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18588/*"chaldea_category_1008"*/);
    byte_596AEAA = 1;
  }
  this->fields.topDisp = topComponent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.topDisp,
    (int32_t)topComponent,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  topDisp = this->fields.topDisp;
  if ( !topDisp
    || (root = topDisp->fields.root) == 0
    || (ResourceCatalog_k__BackingField = root->fields._ResourceCatalog_k__BackingField) == 0
    || (exRoomAtlasManagerUnit = ResourceCatalog_k__BackingField->fields.exRoomAtlasManagerUnit) == 0
    || (AtlasManagerUnit__SetUI(
          exRoomAtlasManagerUnit,
          this->fields.boardSprite,
          (System_String_o *)StringLiteral_18588/*"chaldea_category_1008"*/,
          0),
        (exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)this->fields.boardSprite) == 0) )
  {
    sub_2213CDC(exRoomAtlasManagerUnit, v11);
  }
  ((void (__fastcall *)(AtlasManagerUnit_o *, void *))exRoomAtlasManagerUnit->klass[2]._1.parent)(
    exRoomAtlasManagerUnit,
    exRoomAtlasManagerUnit->klass[2]._1.generic_class);
  ExRoomTopShopBoard__InitInfo(this, v15);
  ExRoomTopShopBoard__UpdateInfo(this, v16);
}


void ExRoomTopShopBoard__OnClickShop(ExRoomTopShopBoard_o *this, const MethodInfo *method)
{
  ExRoomTopComponent_o *topDisp; // x0

  topDisp = this->fields.topDisp;
  if ( !topDisp )
    sub_2213CDC(0, method);
  ExRoomTopComponent__OnClickShop(topDisp, method);
}


// attributes: thunk
void ExRoomTopShopBoard__Update(ExRoomTopShopBoard_o *this, const MethodInfo *method)
{
  ExRoomTopShopBoard__UpdateInfo(this, method);
}


void ExRoomTopShopBoard__UpdateInfo(ExRoomTopShopBoard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  System_String_o *RestTime; // x0
  void *infoFrameSprite; // x0
  __int64 v7; // x1
  struct UILabel_o *infoLabel; // x8
  System_String_o *v9; // x20
  float FontWidth; // s0
  int v11; // w9

  if ( (byte_596AEAC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_13983/*"TIME_REST_QUEST"*/);
    byte_596AEAC = 1;
  }
  if ( this->fields.targetTime >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13983/*"TIME_REST_QUEST"*/, 0);
    RestTime = LocalizationManager__GetRestTime(this->fields.targetTime, 0);
    infoFrameSprite = System_String__Concat_75651716(v4, RestTime, 0);
    infoLabel = this->fields.infoLabel;
    if ( !infoLabel )
      goto LABEL_16;
    v9 = (System_String_o *)infoFrameSprite;
    if ( !infoFrameSprite )
      goto LABEL_16;
    if ( System_String__Equals_75686512((System_String_o *)infoFrameSprite, infoLabel->fields.mText, 0) )
      return;
    infoFrameSprite = this->fields.infoLabel;
    if ( !infoFrameSprite
      || (UILabel__set_text((UILabel_o *)infoFrameSprite, v9, 0), (infoFrameSprite = this->fields.infoLabel) == 0)
      || (FontWidth = WrapControlText__getFontWidth(
                        (UILabel_o *)infoFrameSprite,
                        *((System_String_o **)infoFrameSprite + 52),
                        *((_DWORD *)infoFrameSprite + 106),
                        0),
          (infoFrameSprite = this->fields.infoFrameSprite) == 0) )
    {
LABEL_16:
      sub_2213CDC(infoFrameSprite, v7);
    }
    v11 = (int)FontWidth;
    if ( FontWidth == INFINITY )
      v11 = 0x80000000;
    UIWidget__set_width((UIWidget_o *)infoFrameSprite, this->fields.infoFrameSideSize + v11, 0);
  }
}