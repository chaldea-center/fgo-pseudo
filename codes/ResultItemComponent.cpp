void __fastcall ResultItemComponent___ctor(ResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ResultItemComponent__Clear(ResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.bonusSprite) == 0LL)
    || (baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0LL) )
  {
    sub_B0D97C(baseObject);
  }
  ItemIconComponent__Clear((ItemIconComponent_o *)baseObject, 0LL);
}


void __fastcall ResultItemComponent__Set(
        ResultItemComponent_o *this,
        GiftEntity_o *giftEnt,
        int32_t count,
        const MethodInfo *method)
{
  ResultItemComponent_o *v5; // x21
  int prioredIconId; // w1
  int32_t num; // w3
  int32_t v9; // w3

  if ( !giftEnt )
    goto LABEL_16;
  v5 = this;
  if ( giftEnt->fields.objectId < 1 )
  {
    ResultItemComponent__Clear(this, (const MethodInfo *)giftEnt);
    return;
  }
  this = (ResultItemComponent_o *)this->fields.baseObject;
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  prioredIconId = giftEnt->fields.prioredIconId;
  this = (ResultItemComponent_o *)v5->fields.itemIcon;
  if ( prioredIconId >= 1 )
  {
    if ( this )
    {
      if ( giftEnt->fields.num <= 1 )
        num = -1;
      else
        num = giftEnt->fields.num;
      ItemIconComponent__SetItemImage_26857760(
        (ItemIconComponent_o *)this,
        prioredIconId,
        giftEnt->fields.objectId,
        num,
        0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(this);
  }
  if ( !this )
    goto LABEL_16;
  if ( count < 1 )
    v9 = -1;
  else
    v9 = count;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, giftEnt->fields.type, giftEnt->fields.objectId, v9, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultItemComponent__SetExtra(
        ResultItemComponent_o *this,
        int32_t imgId,
        int32_t bgId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( imgId < 1 )
  {
    ResultItemComponent__Clear(this, *(const MethodInfo **)&imgId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject
      || (UnityEngine_GameObject__SetActive(baseObject, 1, 0LL),
          (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0LL) )
    {
      sub_B0D97C(baseObject);
    }
    ItemIconComponent__SetItemImage_26855044((ItemIconComponent_o *)baseObject, imgId, bgId, -1, -1, 0LL);
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
    sub_B0D97C(0LL);
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

  bonusSprite = (UnityEngine_Component_o *)this->fields.bonusSprite;
  if ( !bonusSprite
    || (bonusSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bonusSprite, 0LL)) == 0LL )
  {
    sub_B0D97C(bonusSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bonusSprite, 1, 0LL);
}