void __fastcall ResultItemComponent___ctor(ResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ResultItemComponent__Clear(ResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Component_o *bonusSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ItemIconComponent_o *itemIcon; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0LL),
        (bonusSprite = (UnityEngine_Component_o *)this->fields.bonusSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(bonusSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (itemIcon = this->fields.itemIcon) == 0LL) )
  {
    sub_B170D4();
  }
  ItemIconComponent__Clear(itemIcon, 0LL);
}


void __fastcall ResultItemComponent__Set(
        ResultItemComponent_o *this,
        GiftEntity_o *giftEnt,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  int prioredIconId; // w1
  ItemIconComponent_o *itemIcon; // x0
  int32_t num; // w3
  int32_t v11; // w3

  if ( !giftEnt )
    goto LABEL_16;
  if ( giftEnt->fields.objectId < 1 )
  {
    ResultItemComponent__Clear(this, (const MethodInfo *)giftEnt);
    return;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  prioredIconId = giftEnt->fields.prioredIconId;
  itemIcon = this->fields.itemIcon;
  if ( prioredIconId >= 1 )
  {
    if ( itemIcon )
    {
      if ( giftEnt->fields.num <= 1 )
        num = -1;
      else
        num = giftEnt->fields.num;
      ItemIconComponent__SetItemImage_28931492(itemIcon, prioredIconId, giftEnt->fields.objectId, num, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
  if ( !itemIcon )
    goto LABEL_16;
  if ( count < 1 )
    v11 = -1;
  else
    v11 = count;
  ItemIconComponent__SetGift(itemIcon, giftEnt->fields.type, giftEnt->fields.objectId, v11, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultItemComponent__SetExtra(
        ResultItemComponent_o *this,
        int32_t imgId,
        int32_t bgId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  ItemIconComponent_o *itemIcon; // x0

  if ( imgId < 1 )
  {
    ResultItemComponent__Clear(this, *(const MethodInfo **)&imgId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject
      || (UnityEngine_GameObject__SetActive(baseObject, 1, 0LL), (itemIcon = this->fields.itemIcon) == 0LL) )
    {
      sub_B170D4();
    }
    ItemIconComponent__SetItemImage_28925112(itemIcon, imgId, bgId, -1, -1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultItemComponent__SetItemIconScale(
        ResultItemComponent_o *this,
        UnityEngine_Vector3_o vec,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemIcon; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    sub_B170D4();
  z = vec.fields.z;
  y = vec.fields.y;
  x = vec.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  GameObjectExtensions__SetLocalScale(gameObject, v8, 0LL);
}


void __fastcall ResultItemComponent__SetRareItem(ResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bonusSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  bonusSprite = (UnityEngine_Component_o *)this->fields.bonusSprite;
  if ( !bonusSprite || (gameObject = UnityEngine_Component__get_gameObject(bonusSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}